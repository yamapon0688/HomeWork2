#pragma once
#include "Character.h"

class Goblin : public Character
{
private:
	int dropExp;

public:
	Goblin(double maxHp, double hp, double power, int dropExp);
	void Attack(Character& target) override;
	Goblin();
	int GetDropExp();
};

