#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>

#include "Carac.h"
#include "Weapon.h"

using namespace std;

class Warrior : public Carac
{
    public:
        Warrior(string c_name);
        virtual ~Warrior();
    protected:
    private:
};

#endif // WARRIOR_H
