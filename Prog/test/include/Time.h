#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Time
{
    public:
        Time();
        Time(Time const& autre);
        virtual ~Time();

        void setTime(int c_hour);
        void setTime(int c_hour, int c_minute);
        void setTime(int c_hour, int c_minute, int c_second);
        void setTime(Time const& autre);
        void setHour(int c_hour);
        void setMinute(int c_minute);
        void setSecond(int c_second);

        int excedant(int comp);

        int getHour() const;
        int getMinute() const;
        int getSecond() const;
        int getTotalSec() const;

        string conver(int num) const;
        string getTime() const;

        bool operator==(const Time& b);
        bool operator!=(const Time& b);
        bool operator<(const Time& b);
        bool operator>(const Time& b);
        bool operator<=(const Time& b);
        bool operator>=(const Time& b);

        Time operator+(const Time& b);
        Time operator-(const Time& b);
        Time operator/(const Time& b);
        Time operator*(const Time& b);
        Time operator%(const Time& b);

        void operator+=(const Time& b);
        void operator-=(const Time& b);
        void operator/=(const Time& b);
        void operator*=(const Time& b);
        void operator%=(const Time& b);

    private:
        int hour;
        int minute;
        int second;

        friend ostream& operator<<(ostream &flux, const Time& b);
};




