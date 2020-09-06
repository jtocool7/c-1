#include <iostream>

using namespace std;

class STACK {
public:
    int attack;

};

int main()
{
   string monName;
 int monHealth = 60;
 int health = 50;
 string chara;

   cout << "welcome to the battle simulator by codeMyster\n";
   cout << "Enter the monsters name (only four digits please):\n";
   cin >> monName;
   cout << "please type characters name\n";
   cin >> chara;
  // if(monNamae.length > )
   cout << "                                                                     ______________________________________";
   cout << "                                                                                                          \n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |   " <<monName<< "'s" <<"        health is" << "[" << monHealth  << "]"  <<"       |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     ______________________________________\n\n\n\n\n\n\n\n\n";



  STACK atk;




   cout << "______________________________________";
   cout << "                                     \n";
   cout << "|                                    |\n";
   cout << "|    sword[1]       bow & arrow[2]   |\n";
   cout << "|                                    |\n";
   cout << "|                                    |\n";
   cout << "|    " << chara <<"'s  health is " << "[" << health << "]" << "    axe[3]" <<"  |\n";
   cout << "|                                    |\n";
   cout << "|                                    |\n";
   cout << "|                                    |\n";
   cout << "______________________________________\n";

   // this is battle logic

while(monHealth > 0 || health > 0){
    cin >> atk.attack;
    if(atk.attack == 1){
        monHealth -= 15;
       if(monHealth < 60){
            health -= 10;
        }
    }else if(atk.attack == 2){
    monHealth -= 17;
   if(monHealth < 60){
            health -= 10;
        }
    }
    else if(atk.attack == 3){
    monHealth -= 20;
    if(monHealth < 60){
            health -= 10;
        }
    }


    cout << "                                                                     ______________________________________";
   cout << "                                                                                                          \n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |   " <<monName<< "'s" <<"        health is" << "[" << monHealth  << "]"  <<"      |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     |                                    |\n";
   cout << "                                                                     ______________________________________\n\n\n\n\n\n\n\n\n";



  STACK atk;




   cout << "______________________________________";
   cout << "                                     \n";
   cout << "|                                    |\n";
   cout << "|    sword[1]       bow & arrow[2]   |\n";
   cout << "|                                    |\n";
   cout << "|                                    |\n";
   cout << "|    " <<chara<<"'s health is " << "[" << health << "]" << "    axe[3]" <<"  |\n";
   cout << "|                                    |\n";
   cout << "|                                    |\n";
   cout << "|                                    |\n";
   cout << "______________________________________\n";

}
// \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n

    return 0;
}
