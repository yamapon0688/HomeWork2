#pragma once
class Character
{
protected:
	double maxHp;
	double hp;
	double power;
	bool isDefence = false;
	bool isDead = false;

public:

	virtual ~Character() {}
	virtual void ExtraAttack(Character& target) = 0;
	void Attack(Character& target);
	
	void TakeDamage(const double damage);
	void SetDefence(const bool mode);
	bool GetIsDefence();
	bool GetIsDead();
	double GetMaxHp();
	double GetHp();
	double GetPower();
};