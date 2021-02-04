#pragma once

#include <array>

// Annuaire : std::set
// Téléphone : std::array

class PhoneNumber {
    public:
        PhoneNumber();
        PhoneNumber(const int p1, const int p2, const int p3, const int p4, const int p5);
        bool is_valid();

    private:
        std::array<int, 5> _number;
};