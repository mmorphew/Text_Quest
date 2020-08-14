#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include "hero.h"
class enemy
{
    public:

        enemy();
        virtual ~enemy();

        int getHP();
        int getStrength();
        int getDefence();

        void setHP(int);
        void setStrength(int);
        void setDefence(int);

        int attack();

    protected:

    private:
        int HP;
        int strength;
        int defence;

};

#endif // ENEMY_H
