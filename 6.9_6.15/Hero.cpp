#include "Hero.h"

Hero::Hero(double hp, double power, int exp)
{
	this->hp = hp;
	this->power = power;
	this->exp = exp;
}

void Hero::AddExp(const int dropExp)
{
	this->exp += dropExp;
}

int Hero::GetExp()
{
	return exp;
}