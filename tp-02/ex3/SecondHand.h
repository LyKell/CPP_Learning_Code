#pragma once

#include "MinuteHand.h"

class SecondHand {
    public:
        SecondHand(MinuteHand&);
        int get_seconds();
        void advance();

    private:
        int _seconds = 0;
        MinuteHand& _min_hand;
};