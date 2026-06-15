#include "Goblin.h"
#include <iostream>
Goblin::Goblin(double hp, double power, int dropExp)
{
	this->hp = hp;
	this->power = power;
	this->dropExp = dropExp;
}

Goblin::Goblin()
{
	this->hp = 45 + rand() % 11;
	this->power =  1 + rand() % 5;
	this->dropExp = 15 + rand() % 11;
}

int Goblin::GetDropExp()
{
	return dropExp;
}