#pragma once

#include <nn/types.h>

namespace sead {
    class CalendarTime {
    public:
        class Year {
        public:
            s32 mValue;     // _0
        };

        class Month {
        public:
            s32 mValue;     // _0
        };

        class Day {
        public:
            u32 mValue;     // _0
        };

        enum Week : s8 {
            cWeek_Sunday =      0x0,
            cWeek_Monday =      0x1,
            cWeek_Tuesday =     0x2,
            cWeek_Wednesday =   0x3,
            cWeek_Thursday  =   0x4,
            cWeek_Friday =      0x5,
            cWeek_Saturday =    0x6,
            cWeek_Max =         0x7
        };

        class Hour {
        public:
            u32 mValue;     // _0
        };

        class Minute {
        public:
            u32 mValue;     // _0
        };

        class Second {
        public:
            u32 mValue;     // _0
        };

        class Date {
        public:
            Year mYear;     // _0
            Month mMonth;   // _4
            Day mDay;       // _8
            Week mWeek;     // _C
        };
    };

    class DateTime {
    public:
        DateTime(u32);

        u32 mRealTimeClock;     // _0
    };
};