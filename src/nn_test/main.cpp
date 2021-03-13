#include <embedded_libs.h>

#include <MagnetometetNetwork.h>


int main()
{
    drivers.init();

    key.read();

    timer.delay_ms(1000);

    MagnetometetNetwork model;
  
    while (1)
    {
        auto time_start  = timer.get_time();
        model.forward();
        auto time_stop  = timer.get_time();

        int32_t computing_time = time_stop - time_start;
        int32_t performance    = (model.total_macs/(0.001*computing_time))/1000000;

        terminal << "inference time = " << computing_time << "[ms]\n";
        terminal << "inferences/s   = " << int(1.0/(0.001*computing_time)) << "[Hz]\n";
        terminal << "performance    = " << performance << "Mega MACs/s\n";
        terminal << "\n\n\n";

        timer.delay_ms(200);
    }

}
