/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 17 of 25 in the game
*/

#include "Space17.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space17::Space17()
{
	name = "Space17";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 17;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space17::~Space17()
{}

string Space17::getName()
{
	return name;
}

string Space17::getShortForm()
{
	return shortForm;
}

string Space17::getLongForm()
{
	return longForm;
}

void Space17::printSpace()
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

int Space17::getId()
{
	return id;
}