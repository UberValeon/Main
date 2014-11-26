#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>

#include "Carac.h"
#include "Weapon.h"

using namespace std;

class Mage : public Carac
{
    public:
        Mage(string c_name);
        virtual ~Mage();
    protected:
    private:
};

#endif // MAGE_H
