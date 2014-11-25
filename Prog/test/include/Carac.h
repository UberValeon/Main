#ifndef CARAC_H
#define CARAC_H

#include <iostream>
#include <string>
#include <windows.h>

#include "Weapon.h"

using namespace std;

class Carac
{
    public:
        Carac(string c_name);
        Carac(string c_name, string c_weapon, int c_damage);
        Carac(const Carac& c);
        virtual ~Carac();

        void receivedDamage(int c_damage);
        void attack(Carac &target);

        void changeWeapon(string c_weapon, int c_damage);

        void drinkHpPotion(int quantity);
        void drinkManaPotion(int quantity);

        void isAlive();
        void showStat();

        bool getAlive() const;
        int getHealth() const;
        int getMana() const;
        int getMaxHealth() const;
        int getMaxMana() const;
        string getJob() const;
        string getName() const;
        Weapon* getWeapon() const;
        Carac operator=(const Carac& c);

    protected:
        bool alive;
        int health;
        int mana;
        int maxHealth;
        int maxMana;
        string job;
        string name;
        Weapon *weap;

    private:


};
#endif
