#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{}

PhoneNumber::PhoneNumber(const int p1, const int p2, const int p3, const int p4, const int p5) :
    _number { {p1, p2, p3, p4, p5} }
{}

bool PhoneNumber::is_valid() {
    for (auto value : _number) {
        if (value < 0 || value > 99) {
            return false;
        }
    }
    return true;
}