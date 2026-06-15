#pragma once
class Character
{
protected:
	double hp;
	double power;
	bool isDefence = false;
	bool isDead = false;

public:
	
	void Attack(Character& target);
	
	void TakeDamage(const double damage);
	void SetDefence(const bool mode);
	bool GetIsDefence();
	bool GetIsDead();
	double GetHp();
	double GetPower();
};