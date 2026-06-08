#include "Hero.h"
#include "Character.h"
#include <cstring>

Hero::Hero(int hp, int power, int exp)
{
	this->hp = hp;
	this->power = power;
	this->exp = exp;
}

void Hero::AddExp(int dropExp)
{
	this->exp += dropExp;
}

int Hero::GetExp()
{
	return exp;
}