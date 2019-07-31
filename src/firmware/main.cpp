#include <embedded_libs.h>
#include <drivers/drivers.h>
#include <robot.h>

#include <diagnostic.h>

#include <movement.h>

int main()
{
    drivers.init();
    auto res = key.read();

    //diagnostic();
    //brick_avoid_test();

    Robot robot;

    if (res == 1)
        robot.mapping_enable();
    else
        robot.fast_run_enable();

    robot.main();
}
