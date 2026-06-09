#pragma once
#include "Character.h"

class Goblin : public Character
{
private:
	int dropExp;

public:
	Goblin(int hp, int power, int dropExp);
	void Attack(Character& target);
	int GetDropExp();
};

