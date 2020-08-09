#include "hero.h"

hero::hero()
{
    //
    EXP = 0;
    level = 1;
    HP = 10;
    MP = 10;
    strength = 1;
    defence = 1;
    //Skills[MAXNUMSKILLS]
}

hero::~hero()
{
    //dtor
}

int hero::getEXP()
{
    return EXP;
}

int hero::getLevel()
{
    return level;
}


int hero::getHP()
{
    return HP;
}

int hero::getMP()
{
    return MP;
}

int hero::getStrength()
{
    return strength;
}

int hero::getDefence()
{
    return defence;
}

