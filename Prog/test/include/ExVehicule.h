#ifndef EXVEHICULE_H
#define EXVEHICULE_H

#include <iostream>
#include <string>

#include "Vehicle.h"
#include "Car.h"
#include "Moto.h"

using namespace std;

class ExVehicule
{
    public:
        ExVehicule();
        virtual ~ExVehicule();
        void present(const Vehicle& v);
        static void vehicleRun();
    protected:
    private:
        static int att;
};

#endif // EXVEHICULE_H
