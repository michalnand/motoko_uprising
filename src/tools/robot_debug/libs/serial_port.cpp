#ifndef __USE_MISC
#define  __USE_MISC
#endif

#ifndef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#endif

/*
#ifndef _BSD_SOURCE
#define _BSD_SOURCE
#endif
*/
#define _DEFAULT_SOURCE

#include "serial_port.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>

#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */
#include <strings.h>  /* String function definitions */



SerialPort::SerialPort(std::string port_name, unsigned int baud_rate, unsigned int reading_buffer_size)
{
  serial_state = 0;

  // serial_port_fd = open( port_name.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
  serial_port_fd = open(port_name.c_str(), O_RDWR | O_NOCTTY);

  //fcntl(serial_port_fd, F_SETFL, O_NONBLOCK);
  fcntl(serial_port_fd, F_SETFL, 0);

  if (serial_port_fd < 0)
  {
    printf("ERROR : serial port init");

    serial_state = -1;

    return;
  }

  struct termios options;

  tcgetattr(serial_port_fd, &options);

  cfsetispeed(&options, baud_rate);
  cfsetospeed(&options, baud_rate);


  options.c_cflag |= (CLOCAL | CREAD);

  options.c_cflag &= ~PARENB;
  options.c_cflag &= ~CSTOPB;
  options.c_cflag &= ~CSIZE;
  options.c_cflag |= CS8;

  tcsetattr(serial_port_fd, TCSANOW, &options);

  serial_state = 0;
  buffer_wr_ptr = 0;
  buffer_rd_ptr = 0;
  run = true;

  for (unsigned int i = 0; i < reading_buffer_size; i++)
    buffer.push_back('\0');

  reading_thread = new std::thread(&SerialPort::serial_read_thread, this);
}


SerialPort::~SerialPort()
{
	close(serial_port_fd);

  run = false;
  reading_thread->join();
  delete reading_thread;
}

int SerialPort::get_error()
{
  if (serial_state < 0)
    return serial_state;

	return 0;
}



int SerialPort::putchar(char c)
{
  int res = 0;

  res = write(serial_port_fd, &c, 1);
  tcflush(serial_port_fd, TCIOFLUSH); // clear buffer

  if (res != sizeof(char))
    printf("ERROR : serial port writting\n");

  return res;
}



bool SerialPort::is_char()
{
  mutex.lock();
  bool status = buffer_wr_ptr != buffer_rd_ptr;
  mutex.unlock();

  return status;
}


char SerialPort::get_char()
{
  char result = 0;
  while (1)
  {
    mutex.lock();
    bool status = buffer_wr_ptr != buffer_rd_ptr;

    if (status)
    {
      result = buffer[buffer_rd_ptr];
      buffer_rd_ptr = (buffer_rd_ptr+1)%buffer.size();
    }

    mutex.unlock();

    if (status)
      break;
  }

  return result;
}


void SerialPort::serial_read_thread()
{
  while (run)
  {
    int c = serial_read();

    if (c >= 0)
    {
      mutex.lock();
      buffer[buffer_wr_ptr] = c;
      buffer_wr_ptr = (buffer_wr_ptr+1)%buffer.size();
      mutex.unlock();
    }
  }
}

int SerialPort::serial_read()
{
    char c = 0;
    int dlen = read(serial_port_fd, &c, 1);

    if (dlen == 0)
      return -1;

    if (dlen < 0)
      return -2;

    return c;
}
