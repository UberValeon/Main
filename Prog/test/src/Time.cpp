#include "Time.h"

Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

Time::~Time()
{
    //dtor
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

string Time::conver(int num)
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

string Time::getTime()
{
    string o_str;
    o_str = conver(hour) + "h" + conver(minute) + "m" + conver(second)+ "s" ;
    return o_str;
}
