#include "Human.h"

Human::Human(char* name, double height, double weight)
	: height(height), 
	weight(weight)
{
	if (name == nullptr)
	{
		this->name = new char[1];
		this->name[0] = '\0';
		return;
	}
	size_t nameLength = strlen(name);
	this->name = new char[nameLength + 1];
	strcpy_s(this->name, nameLength + 1, name);
}

Human::Human(const Human& other)
	: height(other.height),
	weight(other.weight)
{
	if (other.name == nullptr)
	{
		name = new char[1];
		name[0] = '\0';
		return;
	}
	size_t nameLength = strlen(other.name);
	name = new char[nameLength + 1];
	strcpy_s(name, nameLength + 1, other.name);
}

Human::~Human()
{
	delete[] name;
	name = nullptr;
}

void Human::operator=(const Human& other)
{
	delete[] name;
	name = nullptr;
	height = other.height;
	weight = other.weight;
	if (other.name == nullptr)
	{
		name = new char[1];
		name[0] = '\0';
		return;
	}
	size_t nameLength = strlen(other.name);
	name = new char[nameLength + 1];
	strcpy_s(this->name, nameLength + 1, other.name);
}


void Human::grow_fat(double fatWeight)
{
	weight += fatWeight;
}

void Human::slim_off(double slimWeight)
{
	weight -= slimWeight;
}

void Human::ShowInfo()
{
	cout << "name_" << name << endl;
	cout << "height_" << height << endl;
	cout << "weight_" << weight << endl;
	
}
