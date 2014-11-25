#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <windows.h>

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
    public:
        Car();
        virtual ~Car();
        virtual void showDesc() const;
        void showWheel() const;
    protected:
        int nbrDoor;
    private:
};

#endif // CAR_H
