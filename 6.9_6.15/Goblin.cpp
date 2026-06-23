#include "Goblin.h"
#include <iostream>
using namespace std;
Goblin::Goblin(double maxHp, double hp, double power, int dropExp)
{
	this->maxHp = maxHp;
	this->hp = hp;
	this->power = power;
	this->dropExp = dropExp;
}

void Goblin::ExtraAttack(Character& target)
{
	double extraDamage = 0;
	// ƒSƒuƒŠƒ“‘¤‚Í‘Ì—Í‚ª30%ˆÈ‰º‚¾‚Á‚½‚çƒpƒ[‚ª‚Q”{
	if (this->hp <= this->maxHp * 0.3)
	{	
		double attackMultiplier = 2;
		// ’Ç‰Áƒ_ƒ[ƒW‚ÌŒvŽZ
		extraDamage = (this->power * attackMultiplier) - this->power;
		target.TakeDamage(extraDamage);
	}
	cout << this->power + extraDamage << " Damage" << endl;
}

Goblin::Goblin()
{
	this->maxHp = 45 + rand() % 11;
	this->hp = this->maxHp;
	this->power =  1 + rand() % 5;
	this->dropExp = 15 + rand() % 11;
}

int Goblin::GetDropExp()
{
	return dropExp;
}