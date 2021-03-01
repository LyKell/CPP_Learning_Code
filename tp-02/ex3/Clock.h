#pragma once

#include "SecondHand.h"
#include "MinuteHand.h"

class Clock {
    public:
        Clock();
        void tick();

    private:
        MinuteHand _minutes;
        SecondHand _seconds;
};