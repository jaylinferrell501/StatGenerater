// StatGenerater
// Jaylin Ferrell

#include "Character.h"

#include <stdlib.h>
#include <time.h>
#include <iostream>


int main()
{
    Character Knight;
    Character Healer;
    Character DarkMage;
    
    std::cout << "Pick a name for your Knight, Healer, and DarkMage" << std::endl;

    srand(time(nullptr));
    RandomStatGenerator(&Knight);
    RandomStatGenerator(&Healer);
    RandomStatGenerator(&DarkMage);

    std::cout << " " << std::endl;
    std::cout << "Heres There Stats!!" << std::endl;
    std::cout << " " << std::endl;

    RollStats(&Knight); 
    RollStats(&Healer); 
    RollStats(&DarkMage); 

    return (0);
}

