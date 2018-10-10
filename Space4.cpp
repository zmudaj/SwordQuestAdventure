/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 4 of 25 in the game
*/

#include "Space4.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space4::Space4()
{
	name = "Space4";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 4;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space4::~Space4()
{}

string Space4::getName()
{
	return name;
}

string Space4::getShortForm()
{
	return shortForm;
}

string Space4::getLongForm()
{
	return longForm;
}

void Space4::printSpace()
{
	if (visited == false)
	{
		cout << "Current Location: " << getName() << endl;
		cout << getLongForm() << endl;
	}
	else
	{
		cout << "Current Location: " << getName() << endl;
		cout << getShortForm() << endl;
	}
}

int Space4::getId()
{
	return id;
}
