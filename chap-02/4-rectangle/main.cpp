#include "Rectangle.h"

#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << rect << std::endl;

    rect.scale(3);
    std::cout << rect << std::endl;

    Rectangle square(2.5f);

    Rectangle r0;

    Rectangle::set_default_size(3.f);
    Rectangle r1;
    Rectangle r2;

    Rectangle::set_default_size(5.f);
    Rectangle r3;
    Rectangle r4;
    Rectangle r5();


    return 0;
}
