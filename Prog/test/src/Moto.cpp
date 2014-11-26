#include "Moto.h"

Moto::Moto() : Vehicle()
{

}

Moto::~Moto()
{

}

void Moto::showDesc() const
{
    cout << "This is a moto" << endl << endl;
    Sleep(2000);
}

void Moto::showWheel() const
{
    cout << "The moto has 2 wheels" << endl << endl;
    Sleep(2000);
}





