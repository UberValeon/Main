#ifndef MOTO_H
#define MOTO_H

#include <iostream>
#include <string>
#include <windows.h>

#include "Vehicle.h"

using namespace std;

class Moto : public Vehicle
{
    public:
        Moto();
        virtual ~Moto();
        virtual void showDesc() const;
        void showWheel() const;
    protected:
    private:
};

#endif // MOTO_H
