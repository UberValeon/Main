#include "Warrior.h"

Warrior::Warrior(string c_name) : Carac(c_name)
{
    health = 150;
    mana = 25;
    maxHealth = 150;
    maxMana = 25;
    job = "Warrior";
    changeWeapon("Rusty Sword", 10);
}

Warrior::~Warrior()
{

}
