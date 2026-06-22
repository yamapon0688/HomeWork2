#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero(double maxHp, double hp, double power, int exp)
{
	this->maxHp = maxHp;
	this->hp = hp;
	this->power = power;
	this->exp = exp;
}

void Hero::Attack(Character& target)
{
	// 通常攻撃の処理
	Character::Attack(target);
	// ヒーロー側は確率でクリティカルを出す
	double criticalMultiplier = 2;
	double criticalChance = 50;
	double extraDamage = 0;
	if (rand() % 100 < criticalChance)
	{
		cout << "CRITICAL!" << endl;
		// 追加ダメージの計算
		extraDamage = (this->power * criticalMultiplier) - this->power;
		target.TakeDamage(extraDamage);
	}
	cout << this->power + extraDamage << " Damage" << endl;
}
void Hero::AddExp(const int dropExp)
{
	this->exp += dropExp;
}

int Hero::GetExp()
{
	return exp;
}