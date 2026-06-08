#include "Character.h"
#include "Hero.h"
#include "Goblin.h"
#include <iostream>
using namespace std;

int main()
{
	Hero hero(100, 10, 0);
	Goblin goblin(50, 5, 10);

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
		if (input == 'h')
		{
			cout << "Attack Hero->Goblin" << endl;
			hero.Attack(goblin);
		}
		else if (input == 'g')
		{
			cout << "Attack Goblin->Hero" << endl;
			goblin.Attack(hero);
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