# pragma once
#include<iostream>
using namespace std;
class player
{
public:
    int hp,def,atk,dmg;
    string name;
    player(string name)
        :hp(100), def(10), atk(10), name(name)
    {
    }
};

class weapon
{
public:
    int ATK, DEF;
    void check()
    {
        if(this->name=="Sword")
        {
            ATK = 15;
            DEF = 0;
        }
        else if(this->name=="Shield")
        {
            DEF = 30;
            ATK = 0;
        }
    }

    string name;
    int atk, def;
    weapon(string name)
        :name(name)
    {
        check();
        atk = ATK;
        def = DEF;
    }
};


class enemy
{
public:
    int hp,def,atk,dmg;
    enemy()
    :hp(100),def(5),atk(9)
    {
    }
};

