#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

using namespace std;

class Weapon
{
    public:
        Weapon();
        Weapon(string c_name, int c_damage);
        Weapon(const Weapon& w);
        virtual ~Weapon();
        void show() const;
        int getDamage() const;
        string getName() const;
    protected:
    private:
        string name;
        int damage;
};
#endif
