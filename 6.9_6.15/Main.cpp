#include "Hero.h"
#include "Goblin.h"
#include <iostream>
using namespace std;

int main()
{
	Hero hero(100.0, 10.0, 25);
	Goblin goblin[2];

	cout << "Hero" << endl
		<< "hp    : " << hero.GetHp() << endl
		<< "power : " << hero.GetPower() << endl
		<< "exp   : " << hero.GetExp() << endl << endl;

	for (int i = 0; i < sizeof(goblin) / sizeof(Goblin); i++)
	{
		cout << "Goblin" << i + 1 << endl
			<< "hp      : " << goblin[i].GetHp() << endl
			<< "power   : " << goblin[i].GetPower() << endl
			<< "dropExp : " << goblin[i].GetDropExp() << endl << endl;
	}

	int goblinLength = sizeof(goblin) / sizeof(Goblin);

	while (true)
	{
		char actionInput;
		int goblinSelectInput;
		cout << "Hero.hp   : " << hero.GetHp() << endl;
		for (int i = 0; i < goblinLength; i++)
		{
			cout << "Goblin" << i + 1 << ".hp : " << goblin[i].GetHp() << endl;
		}

		cout << "PLAYER TURN" << endl;
		while (true)
		{
			cout << "a:Attack d:Defense > " << flush;
			cin >> actionInput;
			if (actionInput == 'a' || actionInput == 'd')
			{
				break;
			}
			else
			{
				cout << "–³Œø‚È•¶Žš‚Å‚·B" << endl;
			}
		}
		if (actionInput == 'a')
		{
			int index = 0;
			while (true)
			{
				for (int i = 0; i < goblinLength; i++)
				{
					if (goblin[i].GetIsDead())
					{
						continue;
					}
					cout << i + 1 << ":Goblin" << i + 1;
					if (i == goblinLength - 1)
					{
						cout << " > " << flush;
					}
					else
					{
						cout << " ";
					}
				}
				cin >> goblinSelectInput;
				index = goblinSelectInput - 1;
				if ((index < goblinLength && index >= 0) && goblin[index].GetIsDead() == false)
				{
					break;
				}
				else
				{
					cout << "–³Œø‚È”Žš‚Å‚·B" << endl;
				}
			}
			cout << "Attack Hero -> Goblin" << goblinSelectInput << endl;
			hero.Attack(goblin[index]);
		}
		else if (actionInput == 'd')
		{
			hero.SetDefence(true);
		}
		cout << endl;

		cout << "ENEMY TURN" << endl;
		for (int i = 0; i < goblinLength; i++)
		{
			if (goblin[i].GetIsDead() == false)
			{
				cout << "Attack Goblin" << i + 1 << " -> Hero" << endl;
				goblin[i].Attack(hero);
			}
		}

		cout << endl;

		if (hero.GetIsDead())
		{
			cout << "GameOver" << endl;
			break;
		}

		int goblinDeadCount = 0;
		for (int i = 0; i < goblinLength; i++)
		{
			if (goblin[i].GetIsDead())
			{
				goblinDeadCount++;
			}
		}

		if (goblinDeadCount == goblinLength)
		{
			int getExp = 0;
			cout << "Win" << endl;
			for (int i = 0; i < goblinLength; i++)
			{
				hero.AddExp(goblin[i].GetDropExp());
				getExp += goblin[i].GetDropExp();
			}
			cout << "GetExp   : " << getExp << endl;
			cout << "Hero.Exp : " << hero.GetExp() << endl;
			break;
		}

		goblinDeadCount = 0;
		hero.SetDefence(false);
	}
}