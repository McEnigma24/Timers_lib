#pragma once
#include "__preprocessor__.h"
#include <chrono>

namespace Nano_Timer
{
    typedef std::chrono::high_resolution_clock::time_point chrono_clock;

    class Timer
    {
        chrono_clock m_start;
        u64 total_time;

    private:
        static tuple<u64, u64, u64, u64, u64> convert_nano_to_all_units_remainer(const u64& all_in_nano_seconds);
        static tuple<double, double, double, double, double>
        convert_nano_to_all_units_just_devisions(const u64& all_in_nano_seconds);
        tuple<u64, u64, u64, u64, u64> remaining_time();

        static void log_cout(tuple<u64, u64, u64, u64, u64> all, u64 all_nano);

    public:
        void log();
        static void log(u64 all_in_nano_seconds);

        Timer();

        u64 get_all_in_nano();

        void start();
        void stop();
        void reset();
    };
} // namespace Nano_Timer