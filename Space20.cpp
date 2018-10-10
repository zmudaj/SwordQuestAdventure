/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 20 of 25 in the game
*/

#include "Space20.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space20::Space20()
{
	name = "Space20";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 20;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space20::~Space20()
{}

string Space20::getName()
{
	return name;
}

string Space20::getShortForm()
{
	return shortForm;
}

string Space20::getLongForm()
{
	return longForm;
}

void Space20::printSpace()
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

int Space20::getId()
{
	return id;
}