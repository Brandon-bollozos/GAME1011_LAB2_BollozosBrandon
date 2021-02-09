#pragma once
#include "Character.h"
class Rogue : public Character
{
private:

	string title, abilities[3];

public:

	Rogue(string name);
	void SetTitle(string title)
	{
		this->title = title;
	}
	string GetTitle()
	{
		return title;
	}
	void SetAbilities(string abilities[3])
	{
		for (int i = 0; i < 3; i++)
		{
			this->abilities[i] = abilities[i];
		}
	}
	string* GetAbilities()
	{
		return abilities;
	}
	string GetName()
	{
		return GetTitle() + " " + Character::GetName();
	}
	friend ostream& operator<<(ostream& out, Rogue rogue);
};

