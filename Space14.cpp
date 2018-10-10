/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 14 of 25 in the game
*/

#include "Space14.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space14::Space14()
{
	name = "Space14";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 14;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space14::~Space14()
{}

string Space14::getName()
{
	return name;
}

string Space14::getShortForm()
{
	return shortForm;
}

string Space14::getLongForm()
{
	return longForm;
}

void Space14::printSpace()
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

int Space14::getId()
{
	return id;
}