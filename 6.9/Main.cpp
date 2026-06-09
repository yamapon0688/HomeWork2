#include "Hero.h"
#include "Goblin.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	Hero hero(100, 10, 10);
	Goblin goblin(50, 5, 10 + rand() % 11);

	cout << "Hero" << endl
		<< "hp    : " << hero.GetHp() << endl
		<< "power : " << hero.GetPower() << endl
		<< "exp   : " << hero.GetExp() << endl << endl;

	cout << "Goblin" << endl
		<< "hp      : " << goblin.GetHp() << endl
		<< "power   : " << goblin.GetPower() << endl
		<< "dropExp : " << goblin.GetDropExp() << endl << endl;

	while (true)
	{
		char input;
		
		cout << "Hero.hp   : " << hero.GetHp() << endl;
		cout << "Goblin.hp : " << goblin.GetHp() << endl;
		cout << "Attack h:Hero, g:Goblin > " << flush;
		cin >> input;
		Character* attacker = nullptr;
		Character* target = nullptr;
		
		if (input == 'h')
		{
			attacker = &hero;
			target = &goblin;
		}
		else if (input == 'g')
		{
			attacker = &goblin;
			target = &hero;
		}

		if (attacker != nullptr && target != nullptr)
		{
			attacker->Attack(*target);
		}
		cout << endl;

		if (hero.GetHp() <= 0)
		{
			cout << "GameOver" << endl;
			break;
		}
		else if (goblin.GetHp() <= 0)
		{
			cout << "Win" << endl;
			hero.AddExp(goblin.GetDropExp());
			cout << "GetExp   : " << goblin.GetDropExp() << endl;
			cout << "Hero.Exp : " << hero.GetExp() << endl;
			break;
		}
	}
}