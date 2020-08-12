#include "enemy.h"

enemy::enemy()
{
    //
    HP = 10;
    strength = 1;
    defence = 0;
    //Skills[MAXNUMSKILLS]
}

enemy::~enemy()
{
    //dtor
}


int enemy::getHP()
{
    return HP;
}

int enemy::getStrength()
{
    return strength;
}

int enemy::getDefence()
{
    return defence;
}

void enemy::setHP(int health)
{
    HP = health;
}

void enemy::setStrength(int str)
{
    strength = str;
}

void enemy::setDefence(int def)
{
    defence = def;
}

int enemy::attack()
{
    return strength;
}
