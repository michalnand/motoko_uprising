#include <embedded_libs.h>

#include <diagnostic.h>
#include <movement.h>


int main()
{
    drivers.init();

    key.read();

    //diagnostic();

    Movement movement;

    //move forward 150mm
    movement.set(MOVEMENT_BACKWARD, -50);   

    //move backward 50mm
    //movement.set(MOVEMENT_BACKWARD, 50);

    while (movement.is_done() != true)
        movement.process();


    while (1)
    {
        timer.delay_ms(1000);
    }

}
