#include <embedded_libs.h>

#include <diagnostic.h>



int main()
{
    drivers.init();

    key.read();

    diagnostic();


    while (1)
    {
        timer.delay_ms(1000);
    }

}
