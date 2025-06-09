#include <iostream>
#include "clock.h"

int main()
{
    clockType c;
    c.setTime(5, 41, 22);
    std::cout << c.printTime() << std::endl;
}