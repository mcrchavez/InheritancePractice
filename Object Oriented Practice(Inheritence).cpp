
#include <iostream>
#include <string>
#include "Enemy.h"
#include "Combat.h"



int main()
{
    Enemy Boogieman("Test1", 200, 69);
    Soldier Knight("Test2", 800, 20, 25);

    std::cout << "Stats of each character: " << std::endl;
    Boogieman.print_stats();
    Knight.print_stats();
    
    Combat Battle(Boogieman, Knight);
    Battle.clash();
    
   
}