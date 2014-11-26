#include "ExTime.h"

ExTime::ExTime()
{

}

ExTime::~ExTime()
{

}

void ExTime::timeRun()
{
    Time temps1;
    Time temps2;
    Time temps3;

    temps1.setTime(0, 0, 1);
    temps2.setTime(1, 2, 3);
    temps3.setTime(51, 50, 1000);

    cout << temps1 << endl << endl;
    cout << temps2 << endl << endl;
    cout << temps3 << endl << endl;

    temps1 += temps2;

    cout << temps1 << endl << endl;
    cout << temps2 << endl << endl;
    cout << temps3 << endl << endl;
}
