#pragma once
#include "Character.h"

class Hero : public Character
{
private:
	int exp;

public:
	Hero(int hp, int power, int exp);
	void Attack(Character& target);
	void AddExp(int dropExp);
	int GetExp();
};