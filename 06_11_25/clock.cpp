#include "clock.h"

clockType::clockType(int h, int m, int s)
{
    setTime(h, m, s);
}
void clockType::setTime(int hour, int minute, int second)
{
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}
void clockType::getTime(int &hour, int &minute, int &second) const
{
    hour = hr;
    minute = min;
    second = sec;
}
std::string clockType::printTime() const
{
    std::ostringstream out;
    out << std::setfill('0');
    out << std::setw(2) << hr << ":" << std::setw(2) << min << ":" << std::setw(2) << sec;
    return out.str();
}
void clockType::incrementSeconds()
{
    sec++;
    if (sec > 59)
    {
        sec = 0;
        incrementMinutes();
    }
}
void clockType::incrementMinutes()
{
    min++;
    if (min > 59)
    {
        min = 0;
        incrementHours();
    }
}
void clockType::incrementHours()
{
    hr++;
    if (hr > 23)
    {
        hr = 0;
    }
}
void clockType::setHour(int hour)
{
    if (hour >= 0 && hour <= 23)
    {
        hr = hour;
    }
    else
    {
        hr = 0;
    }
}
void clockType::setMinute(int minute)
{
    if (minute >= 0 && minute <= 59)
    {
        min = minute;
    }
    else
    {
        min = 0;
    }
}
void clockType::setSecond(int second)
{
    if (second >= 0 && second <= 59)
    {
        sec = second;
    }
    else
    {
        sec = 0;
    }
}
int clockType::getHour() const
{
    return hr;
}
int clockType::getMinute() const
{
    return min;
}
int clockType::getSecond() const
{
    return sec;
}
bool clockType::equalTime(const clockType &otherClock) const
{
    return hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec;
}