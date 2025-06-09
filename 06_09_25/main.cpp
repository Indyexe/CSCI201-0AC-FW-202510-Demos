#include <iostream>
#include "clock.h"

int main()
{
    clockType c;
    c.setTime(5, 41, 22);
    std::cout << c.printTime() << std::endl;

    std::string s;
    std::cout << "Enter a sentence: ";
    // std::cin >> s;
    std::cin >> std::ws;
    std::getline(std::cin, s);
}