#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero(int hp, int power, int exp)
{
	this->hp = hp;
	this->power = power;
	this->exp = exp;
}

void Hero::Attack(Character& target)
{
	cout << "Attack Hero->Goblin" << endl;
	target.TakeDamage(this->power);
}

void Hero::AddExp(int dropExp)
{
	this->exp += dropExp;
}

int Hero::GetExp()
{
	return exp;
}