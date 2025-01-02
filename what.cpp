#include<bits/stdc++.h>
#include<cstdlib>
#include"player.h"
#include"enemy.h"
#include"classes.h"
using namespace std;


int main()
{
    
    char choice('n');
    string begin, weapon1("Sword"), weapon2("Shield");
    

    
   
    cout<<"Begin Game?"<<endl;
    cout<<"Y or N"<<endl;
    cin>>begin;

    cout << "Enter your name" << endl;
    cin >> P1.name;

    if (Weap.name != weapon1 || Weap.name != weapon2)
    {
        cout << "Choose your starting weapon" << endl;
        cout << weapon1 << " or " << weapon2 << endl;
        cin >> Weap.name;
    }
    player(P1.name);
    weapon(Weap.name);
    Weap.check();

   if(choice == 'y' || choice == 'Y')
   {
   play:
       e = enemy();
       P1.hp = 100;
   }


   //=================
   // Player Stats
   int Player_atk = P1.atk + Weap.atk;
   int Player_def = P1.def + Weap.def;
   int Player_hp = P1.hp;
   //====================



   //Game Loop
    while (Player_hp>=0 && e.hp>=0 && ((begin=="Y"||begin=="y") || (choice=='y'||choice=='Y')))
    {
        playerf(&Player_hp,&Player_atk,&Player_def,&e.hp,&e.def); 
    }

    if (Player_hp<=0 && (begin=="Y"||begin=="y"))
    {
        cout<<"You Lose!"<<endl;
        cout << "Play Again Y or N?" << endl;
        cin >> choice;
    }
    else if(Player_hp>0 && (begin=="Y"||begin=="y"))
    {
        cout<<"You Win!"<<endl;
        cout << "Play Again Y or N?" << endl;
        cin >> choice;
    }
    

    
    if (choice=='Y' || choice=='y')
    {
        goto play;
    }
    else
    {
        cout << "Thanks for playing!" << endl;
    }
}