#include "SecondHand.h"

SecondHand::SecondHand(MinuteHand& minute_hand)
    : _min_hand { minute_hand }
{}

int SecondHand::get_seconds() {
    return _seconds;
}

void SecondHand::advance() {
    _seconds++;
    if (_seconds == 60) {
        _seconds = 0;
        _min_hand.advance();
    }
}