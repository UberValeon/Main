#include "Time.h"

Time::Time(): hour(0), minute(0), second(0)
{

}

Time::Time(Time const& autre) : hour(autre.hour), minute(autre.minute), second(autre.second)
{

}

Time::~Time()
{

}

void Time::setTime(int c_hour)
{
    hour = c_hour;
}

void Time::setTime(int c_hour, int c_minute)
{
    int retenu;

    retenu = excedant(c_minute);

    if (retenu)
    {
        c_hour += retenu;
        minute = c_minute - (60 * retenu);
    }
    hour = c_hour;
}

void Time::setTime(int c_hour, int c_minute, int c_second)
{
    int retenu;

    retenu = excedant(c_second);

    if (retenu)
    {
        c_minute += retenu;
        second = c_second - (60 * retenu);
        retenu = excedant(c_minute);
        if (retenu)
        {
             c_hour += retenu;
             minute = c_minute - (60 * retenu);
        }
        else
        {
            minute = c_minute;
        }
    }
    else
    {
        second = c_second;
        retenu = excedant(c_minute);
        if (retenu)
        {
             c_hour += retenu;
             minute = c_minute - (60 * retenu);
        }
        else
        {
            minute = c_minute;
        }

    }
    hour = c_hour;
}

void Time::setTime(Time const& autre)
{
    hour = autre.getHour();
    minute = autre.getMinute();
    second = autre.getSecond();
}

void Time::setHour(int c_hour)
{
    hour = c_hour;
}

void Time::setMinute(int c_minute)
{
    if (c_minute == 60)
    {
        setHour(hour++);
        minute = 0;
    }
    else
    {
        if (c_minute > 60)
        {
            setHour(hour + (c_minute / 60));
            minute = c_minute % 60;
        }
        else
        {
            minute = c_minute;
        }
    }
}

void Time::setSecond(int c_second)
{
    if (c_second == 60)
    {
        setMinute(minute++);
        second = 0;
    }
    else
    {
        if (c_second > 60)
        {
            setMinute(minute + (c_second / 60));
            second = c_second % 60;
        }
        else
        {
            second = c_second;
        }
    }
}

int Time::excedant(int comp)
{
    if (comp >= 60)
    {
        if (comp > 60)
        {
            return (comp / 60);
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}

int Time::getTotalSec() const
{
    return(second + (((hour * 60) + minute) * 60));
}

string Time::conver(int num) const
{
    ostringstream con;
    string ret;
    con << num;
    if (num<10)
    {
        ret = "0" + con.str();
    }
    else
    {
        ret = con.str();
    }
    return ret;

}

string Time::getTime() const
{
    string o_str;
    o_str = conver(hour) + "h" + conver(minute) + "m" + conver(second)+ "s" ;
    return o_str;
}

bool Time::operator==(const Time& b)
{
    if (getHour() == b.getHour() && getMinute() == b.getMinute() && getSecond() == b.getSecond())
    {
        return 1;
    }
    return 0;
}

bool Time::operator!=(const Time& b)
{
    return !(*this == b);
}

bool Time::operator<(const Time& b)
{
    if (getTotalSec() < b.getTotalSec())
    {
        return 1;
    }
    return 0;
}

bool Time::operator>(const Time& b)
{
    return !(*this < b);
}

bool Time::operator<=(const Time& b)
{
    if (*this == b)
    {
        return 1;
    }
    else
    {
        if(*this < b)
        {
            return 1;
        }
        return 0;
    }
}

bool Time::operator>=(const Time& b)
{
    if (*this == b)
    {
        return 1;
    }
    else
    {
        if (*this > b)
        {
            return 1;
        }
        return 0;
    }
}

Time Time::operator+(const Time& b)
{
    Time t;
    t.setSecond(getTotalSec() + b.getTotalSec());
    return t;
}

Time Time::operator-(const Time& b)
{
    Time t;
    int total;

    total = getTotalSec() - b.getTotalSec();

    if (total < 0)
    {
        t.setTime(0, 0, 0);
    }
    else
    {
        t.setSecond(total);
    }

    return t;
}

Time Time::operator/(const Time& b)
{
    Time t;
    t.setSecond(getTotalSec() / b.getTotalSec());
    return t;
}

Time Time::operator*(const Time& b)
{
    Time t;
    t.setSecond(getTotalSec() * b.getTotalSec());
    return t;
}

Time Time::operator%(const Time& b)
{
    Time t;
    t.setSecond(getTotalSec() % b.getTotalSec());
    return t;
}

void Time::operator+=(const Time& b)
{
    int total;
    total = getTotalSec() + b.getTotalSec();
    setSecond(total);
}

void Time::operator-=(const Time& b)
{
    int total;
    total = getTotalSec() - b.getTotalSec();
    if (total < 0)
    {
        total = 0;
    }
    setSecond(total);
}

void Time::operator/=(const Time& b)
{
    int total;
    total = getTotalSec() / b.getTotalSec();
    setSecond(total);
}

void Time::operator*=(const Time& b)
{
    int total;
    total = getTotalSec() * b.getTotalSec();
    setSecond(total);
}

void Time::operator%=(const Time& b)
{
    int total;
    total = getTotalSec() % b.getTotalSec();
    setSecond(total);
}

//###################################################

ostream& operator<<(ostream &flux, const Time& b)
{
    flux << b.getTime();
    return flux;
}







