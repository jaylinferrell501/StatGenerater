#pragma once
#include <string>
struct Character {
	std::string mName = "";
	int mHealth = 0;
	int mStamnia = 0;
	int mStrength = 0;
	int mDexterity = 0;
	int mIntelligence = 0;
	int mFaith = 0;
	int mLuck = 0;
};

void RandomStatGenerator(Character* pCharacter);
void RollStats(Character* aCharacter);
