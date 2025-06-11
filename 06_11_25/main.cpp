#include <iostream>
#include <cstdlib>
#include "clock.h"

const int NUM_ITEMS = 30;
const clockType THE_CLOCK;

int doubleNum(int x = 7);
void copyArray(int listFrom[], int numFrom, int listTo[], int numTo);
clockType inputClock();

int main()
{
    clockType clockList[10];
    int y = doubleNum();
    std::cout << y << std::endl;
    clockType c;
    c.setTime(5, 41, 22);
    std::cout << c.printTime() << std::endl;
    clockType c2;
    c2 = c;
    c.incrementSeconds();
    if (c.equalTime(c2))
    {
        std::cout << "The clocks ar the same" << std::endl;
    }
    int array1[NUM_ITEMS];
    int array2[NUM_ITEMS];
    for (int i = 0; i < 10; i++)
    {
        array1[i] = rand() % 100 + 1;
        doubleNum();
    }
    copyArray(array1, 10, array2, NUM_ITEMS);
    array1;
    array2;

    THE_CLOCK.getHour();
}

int doubleNum(int x)
{
    static int numCalls = 0;
    numCalls++;
    std::cout << "This function has run " << numCalls << " times" << std::endl;
    return 2 * x;
}

void copyArray(int listFrom[], int numFrom, int listTo[], int numTo)
{
    int copyNum;
    if (numFrom < numTo)
    {
        copyNum = numFrom;
    }
    else
    {
        copyNum = numTo;
    }
    for (int i = 0; i < copyNum; i++)
    {
        listTo[i] = listFrom[i];
    }
}