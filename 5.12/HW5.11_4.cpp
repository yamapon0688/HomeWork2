#include "human.h"


Human::Human(const char* name, double height, double weight)
	: name(name), height(height), weight(weight)
{
}

int main()
{
	Human human("Miles", 170.0, 60.0);
	human.drawName();
	human.drawHeight();
	human.drawWeight();

	human.grow_fat(10.0);
	human.drawWeight();

	human.slim_off(7.5);
	human.drawWeight();
}

void Human::grow_fat(double fatWeight)
{
	weight += fatWeight;
}

void Human::slim_off(double slimWeight)
{
	weight -= slimWeight;
}

