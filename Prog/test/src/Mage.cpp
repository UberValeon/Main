#include "Mage.h"

Mage::Mage(string c_name) : Carac(c_name)
{
    health = 75;
    mana = 100;
    maxHealth = 75;
    maxMana = 100;
    job = "Mage";
    changeWeapon("Depleted Wand", 2);
}

Mage::~Mage()
{

}
