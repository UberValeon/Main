#include <iostream>
#include <string>
#include <cstdlib>
#include "Time.h"

using namespace std;

int main()
{
    string aff;

    Time temps1;
    Time temps2;

    temps1.setTime(1,61, 1);
    temps2.setTime(2,2,2);
    aff = temps1.getTime();
    cout << aff << endl;
    system("PAUSE");
    return 0;
}
