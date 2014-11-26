#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
#include <sstream>

#include "conversion.h"

using namespace std;


class Time
{
    public:
        Time();
        virtual ~Time();
        void setTime(int c_hour);
        void setTime(int c_hour, int c_minute);
        void setTime(int c_hour, int c_minute, int c_second);
        int excedant(int comp);
        string conver(int num);
        string getTime();

    protected:

    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H
