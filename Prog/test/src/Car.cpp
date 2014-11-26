#include "Car.h"

Car::Car() : Vehicle()
{

}

Car::~Car()
{

}

void Car::showDesc() const
{
    cout << "This is a car." << endl << endl;
    Sleep(2000);
}

void Car::showWheel() const
{
    cout << "The car has 4 wheels" << endl << endl;
    Sleep(2000);
}




