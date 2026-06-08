#pragma once
#include "Character.h"

class Goblin : public Character
{
private:
	int dropExp;

public:
	Goblin(int hp, int power, int dropExp);
	int GetDropExp();
};

