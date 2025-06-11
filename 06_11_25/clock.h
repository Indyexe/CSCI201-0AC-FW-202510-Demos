#ifndef CLOCK_H
#define CLOCK_H
#include <string>
#include <sstream>
#include <iomanip>
class clockType
{
public:
    clockType(int h = 0, int m = 0, int s = 0);
    void setTime(int hour, int minute, int second);
    void getTime(int &hour, int &minute, int &second) const;
    std::string printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    bool equalTime(const clockType &) const;

private:
    int hr;
    int min;
    int sec;
};
#endif