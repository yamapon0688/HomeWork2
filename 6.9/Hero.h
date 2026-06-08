#pragma once
#include "Character.h"

class Hero : public Character
{
private:
	int exp;

public:
	Hero(int hp, int power, int exp);
	void AddExp(int dropExp);
	int GetExp();
};
