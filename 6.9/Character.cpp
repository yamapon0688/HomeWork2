#include "Character.h"
#include <cstring>
#include <iostream>
using namespace std;

void Character::Attack(Character& target)
{
	target.TakeDamage(this->power);
}

void Character::TakeDamage(int damage)
{
	this->hp -= damage;
}

int Character::GetHp()
{
	return hp;
}

int Character::GetPower()
{
	return power;
}