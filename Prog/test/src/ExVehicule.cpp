#include "ExVehicule.h"

ExVehicule::ExVehicule()
{

}

ExVehicule::~ExVehicule()
{

}

void ExVehicule::present(const Vehicle& v)
{
    v.showDesc();
}

void ExVehicule::vehicleRun()
{
    Car *c;
    Moto m;

    c = new Car;

    c->showDesc();

    delete c;
}

int ExVehicule::att = 3;



