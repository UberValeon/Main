#include "Weapon.h"

Weapon::Weapon(): name("Bare Hands"), damage(1)
{

}

Weapon::Weapon(string c_name, int c_damage): name(c_name), damage(c_damage)
{

}

Weapon::Weapon(const Weapon& w)
{
    name = w.getName();
    damage = w.getDamage();
}

Weapon::~Weapon()
{

}

void Weapon::show() const
{
    cout << "Weapon: " << name << endl << "Damage: " << damage << endl;
}

int Weapon::getDamage() const
{
    return damage;
}

string Weapon::getName() const
{
    return name;
}





