#include "battle.h"
#include "hero.h"
#include <iostream>
battle::battle(hero protag, enemy antag)
{
    actorOne = protag;
    actorTwo = antag;

}

battle::~battle()
{
    //dtor
}

void battle::showBattleMenu()
{
   cout << "What will you do?" << endl;
   cout << "1 - Attack | 2 - Skill" << endl;
   cout << "3 - Item   | 4 - Flee" << endl;
}

void battle::battleLoop()
{
    bool flee = false;
    int choice;
    while(!flee){
        if(actorOne.getHP() <= 0)
        {
            cout << "You have died." << endl;
            return;
        }
        else if(actorTwo.getHP() <= 0)
        {
            cout << "You have defeated your enemy." << endl;
            return;
        }
        cout << "Hero's Health" << endl;
        showHealthBar(actorOne.getHP());
        cout << "Foe's Health" << endl;
        showHealthBar(actorTwo.getHP());
        showBattleMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "You strike at the enemy" << endl;
                int actorTwoHP = actorOne.attack(actorTwo);
                actorTwo.setHP(actorTwoHP);
        }
    }
}

void battle::showHealthBar(int health)
{
    cout << '[';
    for (int i = 0; i < 10; i++)
    {
        if(i<health)
        {
            cout << ':';
        }
        else
        {
            cout << ' ';
        }
    }
    cout << ']' << endl;
}
