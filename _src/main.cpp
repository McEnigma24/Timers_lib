#include "__preprocessor__.h"
#include "__time_stamp__.h"

#include "Nano_Timer.h"

#ifdef BUILD_EXECUTABLE
int main(int argc, char* argv[])
{
    srand(time(NULL));
    UTILS::clear_terminal();
    time_stamp("It just works");

    Nano_Timer::Timer timer;

    for (int i{}; i < 25; i++)
    {
        int random = rand() % 300;

        timer.start();
        sleep(random);
        timer.stop();
        timer.log();
    }

    timer.reset();
    timer.log();

    timer.start();
    sleep(2000);
    timer.stop();
    timer.log();

    timer.start();
    sleep(5000);
    timer.stop();
    timer.log();

    return 0;
}
#endif