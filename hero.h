#ifndef HERO_H
#define HERO_H
#include <iostream>

class hero
{
    public:

        hero();
        virtual ~hero();
        static const int MAXNUMSKILLS = 5;

        int getEXP();
        int getLevel();
        int getHP();
        int getMP();
        int getStrength();
        int getDefence();
        int getSkills();

        void setEXP(int);
        void setLevel(int);
        void setHP(int);
        void setMP(int);
        void setStrength(int);
        void setDefence(int);
        void setSkills(int);

    protected:

    private:
        int EXP;
        int level;
        int HP;
        int MP;
        int strength;
        int defence;
        // int Skills[MAXNUMSKILLS];
};

#endif // HERO_H
