#ifndef BATTLE_H
#define BATTLE_H
#include "hero.h"
#include "enemy.h"
using namespace std;
class battle
{
    public:
        battle(hero, enemy);

        virtual ~battle();

        void showBattleMenu();
        void battleLoop();
        void showHealthBar(int);

    protected:

    private:
        hero actorOne;
        enemy actorTwo;
};

#endif // BATTLE_H
