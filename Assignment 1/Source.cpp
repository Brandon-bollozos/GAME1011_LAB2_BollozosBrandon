/*
* Brandon Gomez Bollozos - 101314522
* Advanced Programming - GAME1011 - LAB 2
* This program will have the user create characters from either Rogue, Sorcerer, or Archer
*/
#include <iostream>
#include "Weapon.h"
#include "Character.h"
#include "Rogue.h"
#include "Sorcerer.h"
#include "Archer.h"

using namespace std;

void Welcome();
size_t GetNumCharacter();
Character* MakeCharacter(Character* character, size_t number, string name);
Archer MakeArcher(string name);
Rogue MakeRogue(string name);
Sorcerer MakeSorcerer(string name);
int WhichOption();
void DisplayAllCharacters(Character* character, size_t number);
void DisplayOneCharacter(Character* character, size_t number);
int main()
{
	int choose;
	string name;
	Welcome();
	Character* character;
	size_t number = GetNumCharacter();
	character = new(nothrow)Character[number];
	MakeCharacter(character, number, name);
	cout << endl;
	choose = WhichOption();
	if (choose == 1)
	{
		DisplayOneCharacter(character, number);
	}
	else if (choose == 2)
	{
		DisplayAllCharacters(character, number);
	}
	else if (choose == 3)
	{
		return 0;
	}
	return 0;
}

void Welcome()
{
	cout << "Welcome! This Program You'll be able to create a Character for who knows what." << endl;
	cout << "The Character types you'll get to choose from are Archer, Rogue, or Sorcerer." << endl;
	cout << "Each class will have different made weapons, pre sets and abilities" << endl << endl;
	cout << "Choose if you want to be a ranged character with the ARCHER" << endl;
	cout << "Choose if you want to do sick backflips with the ROGUE." << endl;
	cout << "Choose if you want to be a cool person who uses magic with the SORCERER" << endl << endl;
}

size_t GetNumCharacter()
{
	size_t number;
	do
	{
		cout << "Please enter the number of Characters you want to make (PLEASE MAKE IT AT LEAST GREATER THAN 0): ";
		cin >> number;
		cout << endl;
	} while (number < 1);
	cout << "__________________________________________________________________________________________________" << endl << endl << endl;
	return number;
}

Character* MakeCharacter(Character* character, size_t number, string name)
{
	int choose;
	for (int i = 0; i < number; i++)
	{
		do
		{
			cout << "Please enter which character type you want to make (PLEASE CHOOSE FROM 1 to 3)" << endl;
			cout << "\nPRESS 1: ARCHER \nPRESS 2: ROGUE \nPRESS 3: SORCERER" << endl;
			cin >> choose;
		} while (choose < 1 && choose > 3);
		cout << "Please enter in the name of Character " << (i + 1) << ": ";
		if (choose == 1)
		{
			character[i] = MakeArcher(name);
		}
		else if (choose == 2)
		{
			character[i] = MakeRogue(name);
		}
		else if (choose == 3)
		{
			character[i] = MakeSorcerer(name);
		}
		cout << "__________________________________________________________________________________________________" << endl << endl;
	}
	return character;
}

Archer MakeArcher(string name)
{
	cin >> name;
	return Archer(name);
}
Rogue MakeRogue(string name)
{
	cin >> name;
	return Rogue(name);
}
Sorcerer MakeSorcerer(string name)
{
	cin >> name;
	return Sorcerer(name);
}

int WhichOption()
{
	int choose;
	do
	{
		cout << "PRESS 1: A SPECIFIC Character \nPRESS 2: ALL your characters  \nPRESS 3: NONE (EXIT)" << endl;
		cin >> choose;
	} while (choose < 1 && choose > 3);
	return choose;
}

void DisplayOneCharacter(Character* character, size_t number)
{
	int choose;
	do
	{
		cout << "Please choose a number from 1 to " << number << ": ";
	    cin >> choose;
    } while (choose < 1 && choose > number);
	choose = (choose - 1);
	cout << endl;
	cout << character[choose];
}

void DisplayAllCharacters(Character *character, size_t number)
{
	for (int i = 0; i < number; i++)
	{
		cout << character[i] << endl << endl << "____________________________________" << endl << endl;
	}
}
