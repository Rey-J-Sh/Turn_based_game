# pragma once
#include<iostream>
#include"classes.h"
#include"enemy.h"
using namespace std;



player P1("Unknown");
weapon Weap("Unknown");
enemy e;

/*Displays the name of player and enemy
  Also displays the current hp of player and enemy
  No parameter*/
int  display()
{
    cout<<"============\n";
    cout<<P1.name<<"       Enemy\n";
    cout<<P1.hp<<"           "<<e.hp<<endl;
    cout<<"============"<<endl;
}


/* playerf is used operating the choices chosen  
   by the player and calling the monster function
   responsible for calculating enemy damage
*/
int  playerf(int* p_hp,int* p_atk,int*p_def,int*e_hp,int*e_def)
{
    again:
    int p_dmg,sp_multiplier=2.5;
    p_dmg = (100 * (*p_atk))/((*e_def) + 100);
    display();
    
    string input;
    string option1("Basic"),option2("Special"),option3("Items");
    
    cout<<"Type one of the options"<<endl;
    cout<<"Basic    Special"<<endl;
    cout<<"Items    Stats"<<endl;
    cin>>input;
    
    if (input==option1)
    {
        cout<<"Enemy lost "<<p_dmg<<"hp"<<endl;
        *e_hp=*e_hp - p_dmg;
            
    }
    else if(input==option2)
    {
        if (rand()%2==0)
        {
            
            cout<<"Enemy lost "<< p_dmg*sp_multiplier<<endl;
            *e_hp=*e_hp-(p_dmg * sp_multiplier);
        }
        else
        {
            cout<<"Your attack missed"<<endl;
        }  
    }
    else if(input=="Items")
    {
        string option,item1("Atk_potion"),item2("Def_potion"),item3("Sp.atk_potion");
        cout<<"What do you want to do?"<<endl;
        cout<<item1<<endl;
        cout<<item2<<endl;
        cout<<item3<<endl;

        cin>>option;
        if(option==item1)
        {
            *p_atk= *p_atk + 10;
        }
        else if(option==item2)
        {
            *p_def= *p_def + 10;
        }
        else if(option==item3)
        {
            
        }
    }
    else if(input=="Stats")
    {
        cout<<"Health: "<<*p_hp<<endl;
        cout<<"Attack: "<<*p_atk<<endl;
        cout<<"Defense: "<<*p_def<<endl;
        goto again;
    }
    else
    {
        cout<<"Choose a valid option."<<endl;
        goto again;
    }
    if ((*e_hp>=0 &&*p_hp>=0) && input!="Stats")
    {
       monster(&e.hp,&e.atk,&e.def,&P1.def,&P1.hp,&P1.name);
    }

 
}



