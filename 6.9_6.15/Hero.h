#pragma once
#include "Character.h"

class Hero : public Character
{
private:
	int exp;

public:
	Hero(double hp, double power, int exp);
	void AddExp(const int dropExp);
	int GetExp();
};