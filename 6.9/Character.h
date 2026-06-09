#pragma once
class Character
{
protected:
	int hp;
	int power;

public:
	
	virtual void Attack(Character& target);
	void TakeDamage(int damage);
	int GetHp();
	int GetPower();
};