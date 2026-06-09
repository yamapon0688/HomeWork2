#include "Goblin.h"
#include <iostream>
using namespace std;

Goblin::Goblin(int hp, int power, int dropExp)
{
	this->hp = hp;
	this->power = power;
	this->dropExp = dropExp;
}

void Goblin::Attack(Character& target)
{
	cout << "Attack Hero->Goblin" << endl;
	target.TakeDamage(this->power);
}

int Goblin::GetDropExp()
{
	return dropExp;
}