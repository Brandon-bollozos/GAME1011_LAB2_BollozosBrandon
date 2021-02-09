#include "Character.h"

Character::Character()
{
	SetName(" ");
	SetHealth(0);
	string abilities[3] = { " "," "," " };
	Weapon weapon{" ", " ", abilities, 0};
	SetWeapon(weapon);
}

Character::Character(string name, int health, Weapon weapon)
{
	SetName(name);
	SetHealth(health);
	SetWeapon(weapon);
}

ostream& operator<<(ostream& out, Character character)
{
	out << "Name: " << character.GetName() << "\n\nHealth: " << character.GetHealth() << "\n\n" << character.GetWeapon();
	return out;
}



