#include "__preprocessor__.h"
#include "__time_stamp__.h"

#include "Nano_Timer.h"

#ifdef BUILD_EXECUTABLE
int main(int argc, char* argv[])
{
    srand(time(NULL));
    UTILS::clear_terminal();
    time_stamp("It just works");

    Timer timer;

    for (int i{}; i < 25; i++)
    {
        int random = rand() % 3000;

        timer.start();
        sleep(random);
        timer.end();
        timer.log();
    }

    return 0;
}
#endif