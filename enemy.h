# pragma once
#include"classes.h"
#include"player.h"
int monster(int*e_hp,int*e_atk,int*e_def,int*p_def,int*p_hp,string *pname)
{
    int e_dmg;
    e_dmg = (100 * (*e_atk))/((*p_def) + 100);
    cout<<"Enemy attacked "<<*pname<<endl;
    cout<<*pname<<" lost "<<e_dmg<<"hp"<<endl;
    *p_hp=*p_hp-e_dmg;
}