#include "Archer.h"

Archer::Archer(string name)
{
	string abilities[3] = {"Arrow", "Roll-n-Shoot", "Ultimate Focus"};
	string weaponAbilities[3] = {"Make-It-Rain", "Recon Dart", "Triple-Arrow"};
	Weapon weapon{"Bow", "Bow - That's right you only get a bow no arrows \nAbility 1: Make-It-Rain - shoot multiple arrows in the air \nAbility 2: Recon Dart - Shoot arrow to an area to get the location of the enemies around \nAbility 3: Triple-Arrow - shoot 3 arrows", 
		   weaponAbilities, 8};
	SetName(name);
	SetHealth(85);
	SetWeapon(weapon);
	SetAbilities(abilities);
	SetTitle("Archer");
}

ostream& operator<<(ostream& out, Archer archer)
{
	out << "Name" << archer.GetName() << "\n\nHealth: " << archer.GetHealth() << "\n";
	for (int i = 0; i < 3; i++)
	{
		out << "\nUnique Ability " << (i + 1) << ": " << archer.GetAbilities()[i];
	}
	out << "\n\n" << archer.GetWeapon();
	return out;
}