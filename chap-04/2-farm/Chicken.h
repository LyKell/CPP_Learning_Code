#pragma once

#include <iostream>

class Chicken : public Animal
{
public:
    ~Chicken() override {
        std::cout << "I'm died" << std::endl;
    }

    void sing(char end) const override { std::cout << "Cotcotcotcodet" << end; }
};
