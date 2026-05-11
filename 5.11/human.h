#pragma once
#include <iostream>
using namespace std;

class Human
{
private:
	const char* name;
	double height;
	double weight;
public:
	Human(const char* name, double height, double weight);
	void drawName() 
	{ 
		cout << name << endl;
	}

	// height•\Ž¦(‰¼)
	void drawHeight()
	{
		cout << height << endl;
	}
	// weight•\Ž¦(‰¼)
	void drawWeight()
	{
		cout << weight << endl;
	}

	double get_height()
	{
		return height;
	}
	double get_weight()
	{
		return weight;
	}

	void grow_fat(double fatWeight);
	void slim_off(double slimWeight);
};
