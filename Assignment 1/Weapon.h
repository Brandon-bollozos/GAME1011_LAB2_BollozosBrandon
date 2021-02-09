#pragma once
#include <iostream>

using namespace std;
class Weapon
{
private:
	string weaponName, description, weaponAbilities[3];
	int damage;
public:
	Weapon();

	Weapon(string weaponName, string description, string weaponAbilities[3], int damage);

	void SetWeaponName(string weaponName)
	{
		this->weaponName = weaponName;
	}

	void SetDescription(string description)
	{
		this->description = description;
	}

	void SetDamage(int damage)
	{
		this->damage = damage;
	}

	void SetWeaponAbilities(string weaponAbilities[3])
	{
		for (int i = 0; i < 3; i++)
		{
			this->weaponAbilities[i] = weaponAbilities[i];
		}
	}
	string GetWeaponName()
	{
		return weaponName;
	}
	string GetDescription()
	{
		return description;
	}
	string* GetWeaponAbilities()
	{
		return weaponAbilities;
	}
	int GetDamage()
	{
		return damage;
	}
	friend ostream& operator<<(ostream& out, Weapon weapon);
};

