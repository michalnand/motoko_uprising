#include <drivers.h>


Terminal                                terminal;
Timer                                   timer;
I2C<TGPIOB, 7, 6, I2C_TIMING>           i2c;
Gpio<TGPIOB, 15>                        led;

ADC                         adc;
IMU                         imu_sensor;
LineSensor                  line_sensor;
DistanceSensor              distance_sensor;
EncoderSensor               encoder_sensor;
MotorControll               motor_controll;
EEPROM                      eeprom;
Key                         key;


Drivers                     drivers;



Drivers::Drivers()
{

}

Drivers::~Drivers()
{

}

int Drivers::init()
{
    led = 1;

    terminal.init();
    terminal << "\n\n\n#####\n\n\n";
    terminal << "terminal init done\n";

    unsigned int mem_res = mem_init();
    terminal << "mem init done, heap start at " << mem_res << "\n";

    timer.init();
    terminal << "timer init done\n";

    terminal << "delay 200 ms ";
    timer.delay_ms(200);
    terminal << "done\n";

    i2c.init();
    terminal << "i2c init done\n";

    imu_sensor.init(i2c);
    terminal << "imu init done with " << imu_sensor.present() << "\n";

    eeprom.init(i2c);
    terminal << "eeprom init done with " << eeprom.present() << "\n";

    adc.init();
    terminal << "adc init done\n";

    line_sensor.init();
    terminal << "line sensor init done\n";

    distance_sensor.init();
    terminal << "distance sensor init done\n";

    encoder_sensor.init();
    terminal << "encoder sensor init done\n";

    motor_controll.init();
    terminal << "motor controll init done\n";

    key.init();
    terminal << "key init done\n";

    led = 0;

    terminal << "\n\n";
    terminal << "system init done\n\n\n";

    return 0;
}
