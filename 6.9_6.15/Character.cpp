#include "Character.h"
using namespace std;

void Character::Attack(Character& target)
{
	double damage = this->power;
	if (target.GetIsDefence())
	{
		damage /= 2;
	}
	target.TakeDamage(damage);
}

void Character::TakeDamage(const double damage)
{
	this->hp -= damage;
	if (this->hp < 0)
	{
		this->hp = 0;
		this->isDead = true;
	}
}

void Character::SetDefence(const bool mode)
{
	isDefence = mode;
}
bool Character::GetIsDefence()
{
	return isDefence;
}

bool Character::GetIsDead()
{
	return isDead;
}

double Character::GetMaxHp()
{
	return maxHp;
}
double Character::GetHp()
{
	return hp;
}

double Character::GetPower()
{
	return power;
}