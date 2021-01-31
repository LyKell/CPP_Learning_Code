#include "MinuteHand.h"

MinuteHand::MinuteHand()
{}

int MinuteHand::get_minutes() {
    return _minutes;
}

void MinuteHand::advance() {
    _minutes++;
}