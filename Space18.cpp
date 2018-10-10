/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 18 of 25 in the game
*/

#include "Space18.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space18::Space18()
{
	name = "Space18";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 18;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space18::~Space18()
{}

string Space18::getName()
{
	return name;
}

string Space18::getShortForm()
{
	return shortForm;
}

string Space18::getLongForm()
{
	return longForm;
}

void Space18::printSpace()
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

int Space18::getId()
{
	return id;
}