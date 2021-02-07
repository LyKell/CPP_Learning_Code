#pragma once

#include <iostream>

class Animal
{
public:
    virtual ~Animal() {}
    virtual void sing(char end) const { std::cout << "..." << end; }
};
