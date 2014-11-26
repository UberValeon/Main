#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include <windows.h>

#include "Vehicle.h"

using namespace std;

class Vehicle
{
    public:
        Vehicle();
        virtual ~Vehicle();
        virtual void showDesc() const;
        virtual void showWheel() const = 0;
    protected:
        int prix;
        int seatPlace;
        int maxSpeed;
        string name;
    private:
};

#endif // VEHICLE_H
