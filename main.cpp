#include <iostream>
#include "hero.h"
using namespace std;

int main()
{
    hero myHero;
    cout << myHero.getDefence() << endl;
    myHero.setDefence(5);
    cout << myHero.getDefence() << endl;
    return 0;
}
