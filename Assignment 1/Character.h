#pragma once
#include "Weapon.h"
#include <iostream>
using namespace std;
class Character 
{
private:
	int health;
	string name;
	Weapon weapon;

public:
	Character();
	Character(string name, int health, Weapon weapon);

	void SetName(string name)
	{
		this->name = name;
	}

	virtual string GetName() 
	{
		return name;
	}

	void SetHealth(int health)
	{
		this->health = health;
	}

	void SetWeapon(Weapon weapon)
	{
		this->weapon = weapon;
	}

	int GetHealth()
	{
		return health;
	}

	Weapon GetWeapon()
	{
		return weapon;
	}

	friend ostream& operator<<(ostream& out, Character character);
};


