#include "Goblin.h"
#include "Character.h"
#include <cstring>

Goblin::Goblin(int hp, int power, int dropExp)
{
	this->hp = hp;
	this->power = power;
	this->dropExp = dropExp;
}

int Goblin::GetDropExp()
{
	return dropExp;
}