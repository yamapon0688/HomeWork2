#pragma once
#include "Character.h"

class Goblin : public Character
{
private:
	int dropExp;

public:
	Goblin(double hp, double power, int dropExp);
	Goblin();
	int GetDropExp();
};

