#include "Rogue.h"
Rogue::Rogue(string name)
{
	string weaponAbilities[3] = { "Slash", "Double Edge", "Teleport" };
	string abilities[3] = {"Dash", "Thieves' Cant", "Cunning Action"};
	Weapon weapon {"Dagger", 
		           "Small knife - Good for close combat and quick attacks \nAbility 1: Slash - Increases the attack range of the dagger \nAbility 2: Double Edge - Strike enemy twice \nAbility 3: Teleport - Transport to where your dager is", 
		           weaponAbilities, 5};
	SetName(name);
	SetHealth(80);
	SetWeapon(weapon);
	SetAbilities(abilities);
	SetTitle("Rogue");
}

ostream& operator<<(ostream& out, Rogue rogue)
{
	out << "Name" << rogue.GetName() << "\n\nHealth: " << rogue.GetHealth() << "\n";
	for (int i = 0; i < 3; i++)
	{
		out << "\nUnique Ability " << (i + 1) << ": " << rogue.GetAbilities()[i];
	}
	return out;
}
