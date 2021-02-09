#include "Weapon.h"
#include <iostream>

using namespace std; 

Weapon::Weapon()
{
	SetWeaponName(" ");
	SetDescription(" ");
	SetDamage(0);
}

Weapon::Weapon(string weaponName, string description, string weaponAbilities[3], int damage)
{
	SetWeaponName(weaponName);
	SetDescription(description);
	SetWeaponAbilities(weaponAbilities);
	SetDamage(damage);
}
ostream& operator<<(ostream& out, Weapon weapon)
{
	out << "Weapon Name: " << weapon.GetWeaponName() << "\n\n" << weapon.GetDescription() << "\n\n" << "Damage: " << weapon.GetDamage();
	return out;
}

