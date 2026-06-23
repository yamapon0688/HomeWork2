#pragma once
#include "Character.h"

class Hero : public Character
{
private:
	int exp;

public:
	Hero(double maxHp, double hp, double power, int exp);
	void ExtraAttack(Character& target) override;
	void AddExp(const int dropExp);
	int GetExp();
};