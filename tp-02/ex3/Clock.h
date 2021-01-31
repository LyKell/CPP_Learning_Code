#pragma once

#include "SecondHand.h"
#include "MinuteHand.h"

class Clock {
    public:
        Clock();
        void tick();

    private:
        SecondHand& _seconds;
        MinuteHand& _minutes;
};