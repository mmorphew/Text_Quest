#include <iostream>
#include "hero.h"
#include "enemy.h"
#include "battle.h"
using namespace std;

int main()
{
    hero myHero;
    enemy myEnemy;
    battle sampleBattle(myHero, myEnemy);
    sampleBattle.battleLoop();
    return 0;
}
