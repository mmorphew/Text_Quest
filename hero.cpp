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

void hero::setEXP(int xp)
{
    EXP = xp;
}

void hero::setLevel(int lvl)
{
    level = lvl;
}

void hero::setHP(int health)
{
    HP = health;
}

void hero::setMP(int mana)
{
    MP = mana;
}

void hero::setStrength(int str)
{
    strength = str;
}

void hero::setDefence(int def)
{
    defence = def;
}




