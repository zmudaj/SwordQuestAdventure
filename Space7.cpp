/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 7 of 25 in the game
*/

#include "Space7.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space7::Space7()
{
	name = "Space7";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 7;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space7::~Space7()
{}

string Space7::getName()
{
	return name;
}

string Space7::getShortForm()
{
	return shortForm;
}

string Space7::getLongForm()
{
	return longForm;
}

void Space7::printSpace()
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

int Space7::getId()
{
	return id;
}
