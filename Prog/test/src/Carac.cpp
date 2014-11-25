#include "Carac.h"

Carac::Carac(string c_name): alive(1), health(25), mana(5), maxHealth(25), maxMana(5), job("Peasant"), name(c_name)
{
    weap = new Weapon();
}

Carac::Carac(string c_name, string c_weapon, int c_damage): alive(1), health(25), mana(5), maxHealth(25), maxMana(5), name(c_name)
{
    weap = new Weapon(c_weapon, c_damage);
}

Carac::Carac(const Carac& c)
{
    Weapon *w = new Weapon(*(c.getWeapon()));
    alive = c.getAlive();
    health = c.getHealth();
    mana = c.getMana();
    maxHealth = c.getMaxHealth();
    maxMana = c.getMaxMana();
    job = c.getJob();
    name = getName();
    weap = w;
}

Carac::~Carac()
{
    delete weap;
}

void Carac::receivedDamage(int c_damage)
{
    health = health - c_damage;
    isAlive();
}

void Carac::attack(Carac &target)
{
    if (target.alive)
    {
        cout << getName() << " attacks " << target.getName() << " for " << weap->getDamage() << " damage(s) with a " << weap->getName() << "." << endl;
        Sleep(2000);
        target.receivedDamage(weap->getDamage());
    }
    else
    {
        cout << getName() << " attacks " << target.getName() << " but (s)he is already dead!" << endl;
        Sleep(2000);
    }
}

void Carac::changeWeapon(string c_weapon, int c_damage)
{
    Weapon *w = weap;
    Weapon *w2 = new Weapon(c_weapon, c_damage);
    cout << getName() << " changes is " << weap->getName() << " for a " << c_weapon << "." << endl;
    weap = w2;
    delete w;
    Sleep(2000);
}

void Carac::drinkHpPotion(int quantity)
{
    int restor;

    restor = 25 * quantity;

    health += restor;
    if (health > maxHealth)
    {
        restor = restor - (health - maxHealth);
        health = maxHealth;
    }

    cout << getName() << " restores " << restor << " HP and have a total of " << health << " HP." << endl;
    Sleep(2000);
}

void Carac::drinkManaPotion(int quantity)
{
    int restor;

    restor = 25 * quantity;

    mana += restor;
    if (mana > maxMana)
    {
        restor = restor - (mana - maxMana);
        mana = maxMana;
    }
    cout << getName() << " restores " << restor << " MP and have a total of " << health << " MP." << endl;
    Sleep(2000);
}

void Carac::isAlive()
{
    if (health == 0)
    {
        alive = 0;
        health = 0;
        cout << getName() << " is dead!" << endl;
        Sleep(2000);
    }
    else
    {
        if (health < 0)
        {
            alive = 0;
            health = 0;
            cout << getName() << " is dead!" << endl;
            Sleep(2000);
        }
        else
        {
            alive = 1;
        }
    }
}

void Carac::showStat()
{
    string mes;
    if (alive)
    {
        mes = "Alive";
    }
    else
    {
        mes = "Dead";
    }

    cout << endl << "***********************" << endl;
    cout << "Name: " << "\t" << name << endl;
    cout << "Job: " << "\t" << job << endl;
    cout << "Stat: " << "\t" << mes << endl;
    cout << "Life: " << "\t" << health << "/" << maxHealth << " HP" << endl;
    cout << "Mana: " << "\t" << mana << "/" << maxMana << " MP" << endl;
    weap->show();
    cout << "***********************" << endl;
}

bool Carac::getAlive() const
{
    return alive;
}

int Carac::getHealth() const
{
    return health;
}

int Carac::getMana() const
{
    return mana;
}

int Carac::getMaxHealth() const
{
    return maxHealth;
}

int Carac::getMaxMana() const
{
    return maxMana;
}

string Carac::getJob() const
{
    return job;
}

string Carac::getName() const
{
    return name;
}

Weapon* Carac::getWeapon() const
{
    return weap;
}

Carac Carac::operator=(const Carac& c)
{
    Weapon *w = new Weapon(*(c.getWeapon()));
    alive = c.getAlive();
    health = c.getHealth();
    mana = c.getMana();
    maxHealth = c.getMaxHealth();
    maxMana = c.getMaxMana();
    job = c.getJob();
    name = c.getName();
    weap = w;
    return *this;
}












