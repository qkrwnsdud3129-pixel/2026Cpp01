#include "pikachu.h"
#include "squirtle.h"

int main()
{
    Pokemon p;
    //Pikachu pikachu;   // default
    //cout << pikachu.getHp() << endl;
    //cout << pikachu.getElectricAttack();

    Pikachu pikachu(500, 4000);  // parameter
    cout << pikachu.getHp() << endl;
    cout << pikachu.getElectricAttack() << endl;

    Pikachu pikachu2(pikachu);  // copy
    cout << pikachu2.getHp() << endl;
    cout << pikachu2.getElectricAttack() << endl;

    
    Squirtle squirtle(500, 4000);  // parameter
    cout << squirtle.getHp() << endl;
    cout << squirtle.getHydroAttack() << endl;

    Squirtle squirtle2(squirtle);  // copy
    cout << squirtle2.getHp() << endl;
    cout << squirtle2.getHydroAttack() << endl;
      
    return 0;
} 