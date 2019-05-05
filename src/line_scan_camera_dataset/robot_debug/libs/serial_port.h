#ifndef _SERIALPORT_H_
#define _SERIALPORT_H_


#include <termios.h> /* POSIX terminal control definitions */
#include <thread>
#include <mutex>
#include <vector>
#include <string>

// B115200
// B9600

class SerialPort
{
	private:
		  	int serial_state;
  			int serial_port_fd;

				bool run;

				std::mutex mutex;
  			std::thread *reading_thread;

				std::vector<char> buffer;
				unsigned int buffer_wr_ptr;
				unsigned int buffer_rd_ptr;

	public:
		SerialPort(std::string port_name, unsigned int baud_rate = B115200, unsigned int reading_buffer_size = 32768);
		~SerialPort();

		int get_error();


		int putchar(char c);

		bool is_char();
		char get_char();

	private:

		void serial_read_thread();
		int serial_read();

};

#endif
