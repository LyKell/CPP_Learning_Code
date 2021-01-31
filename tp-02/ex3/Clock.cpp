#include "Clock.h"

Clock::Clock()
    : _seconds { new SecondHand(_minutes) }
{}

void Clock::tick() {
    _seconds.advance();
}