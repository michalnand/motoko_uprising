#include <embedded_libs.h>

#include <diagnostic.h>
#include <robot.h>

#include <movement.h>

int main()
{
    drivers.init();

    key.read();

    timer.delay_ms(1000);


    //diagnostic();


    Robot robot;
    robot.main();

    /*
    Movement movement;

    movement.set(MOVEMENT_TURN_RIGHT, 100);
    movement.process();

    timer.delay_ms(500);

    movement.set(MOVEMENT_TURN_RIGHT, -100);
    movement.process();

    timer.delay_ms(500);

    movement.set(MOVEMENT_TURN_LEFT, 100);
    movement.process();

    timer.delay_ms(500);

    movement.set(MOVEMENT_TURN_LEFT, -100);
    movement.process();

    timer.delay_ms(500);
    */


    while (1)
    {
        timer.delay_ms(1000);
    }

}
