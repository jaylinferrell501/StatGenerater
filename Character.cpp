#include "Character.h"

#include <stdlib.h>
#include <time.h>
#include <iostream>
void RandomStatGenerator(Character* pCharacter)
{
	std::string aAnswer;
	std::cin >> aAnswer;
	srand(time(nullptr));
	pCharacter->mName = aAnswer;
	pCharacter->mHealth = rand() & 10;
	pCharacter->mStamnia = rand() % 10;
	pCharacter->mDexterity = rand() % 10;
	pCharacter->mIntelligence = rand() % 10;
	pCharacter->mFaith = rand() % 10;
	pCharacter->mLuck = rand() % 10;
	if (pCharacter->mHealth == 0) {
		pCharacter->mHealth += 5;
	}
}

void RollStats(Character* aCharacter)
{
	std::cout << "Name: " << aCharacter->mName << std::endl;
	std::cout << "Health: " << aCharacter->mHealth << std::endl;
	std::cout << "Stamnia: " << aCharacter->mStamnia << std::endl;
	std::cout << "Dexterity: " << aCharacter->mDexterity << std::endl;
	std::cout << "Intelligence: " << aCharacter->mIntelligence << std::endl;
	std::cout << "Faith: " << aCharacter->mFaith << std::endl;
	std::cout << "Luck: " << aCharacter->mLuck << std::endl;
	std::cout << " " << std::endl;
}
