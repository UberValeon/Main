#include "ExCarac.h"

void ExCarac::caracRun()
{
    Mage player1("Amadeus");
    Warrior player2("Getan");

    player1.attack(player2);
    player2.drinkHpPotion(1);
    player2.attack(player1);
    player2.attack(player1);

    player1.showStat();
    player2.showStat();

}
