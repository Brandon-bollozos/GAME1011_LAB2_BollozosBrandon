#include "Sorcerer.h"
Sorcerer::Sorcerer(string name)
{
	string abilities[3] = {"Float ", "Barrier ", "Connect "};
	string weaponAbilities[3] = {"Fira", "Thundaga", "Curaga"};
	Weapon weapon{"Wizards Staff", "Magic Staff - Staff given to you from your friendly neighbour Carl \nAbility 1: Fira - Shoots out a medium size Fireball \nAbility 2: Thundaga - Shoots out thunder at an area specified \nAbility 3: Curaga - Heals you and your teamates",
		   weaponAbilities, 5};
	SetName(name);
	SetHealth(75);
	SetWeapon(weapon);
	SetAbilities(abilities);
	SetTitle("Sorcerer");
}

ostream& operator<<(ostream& out, Sorcerer sorcerer)
{
	out << "Name: " << sorcerer.GetName() << "\n\nHealth: " << sorcerer.GetHealth() << "\n";
	for (int i = 0; i < 3; i++)
	{
		out << "\n" << "Unique Ability " << (i + 1) << ": " << sorcerer.GetAbilities()[i];
	}
	out << "\n\n" << sorcerer.GetWeapon();
	return out;
}
