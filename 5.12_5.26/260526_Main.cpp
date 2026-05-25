#include "Human.h"
void HumanShowInfo(Human human);

int main()
{
	char name[] = "human";
	char name2[] = "human2";
	Human human(name, 170.0, 60.0);
	Human human2(name2, 180.0, 70.0);
	HumanShowInfo(human);
	HumanShowInfo(human2);
	human.grow_fat(10.0);
	human.drawWeight();

	human.slim_off(7.5);
	human.drawWeight();

	HumanShowInfo(human);

	human = human2;
	HumanShowInfo(human);

}

void HumanShowInfo(Human human)
{
	human.ShowInfo();
}


