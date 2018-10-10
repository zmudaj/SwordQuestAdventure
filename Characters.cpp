/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: All characters located throughout the game - this includes the hero plus all of the enemies
*/

#include "Characters.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Characters::Characters()
{
	strength = 5;
	level = 0;
	name = "NAME";
	isDead = false;
}

Characters::~Characters()
{}

string Characters::getName()
{
	return name;
}

int Characters::getStrength()
{
	return strength;
}

int Characters::getLevel()
{
	return level;
}

void Characters::levelUp()
{
	strength = strength + 2;
	level = level + 1;
}

// Hero***********************************
Hero::Hero()
{
	strength = 10;
	level = 1;
	name = "";
	isDead = false;
}

Hero::~Hero()
{};

int Hero::attack()
{
	int totalattack = (rand() % 4) + 1;

	return totalattack;
}

void Hero::defense(int damage)
{
	int totaldefense = (rand() % 3) + 1;

	int d = damage - totaldefense;

	if (d >= 1)
	{
		strength -= d;
		cout << "The hero was hit for " << d << " damage." << endl;

	}

}

bool Hero::fatalBlow()
{
	if (strength <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string Hero::getName()
{
	return name;
}

int Hero::getStrength()
{
	return strength;
}

int Hero::getLevel()
{
	return level;
}

void Hero::levelUp()
{
	strength += 2;
	level += 1;
}