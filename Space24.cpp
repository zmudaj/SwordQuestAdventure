/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 24 of 25 in the game
*/

#include "Space24.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space24::Space24()
{
	name = "Space24";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 24;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space24::~Space24()
{}

string Space24::getName()
{
	return name;
}

string Space24::getShortForm()
{
	return shortForm;
}

string Space24::getLongForm()
{
	return longForm;
}

void Space24::printSpace()
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

int Space24::getId()
{
	return id;
}

