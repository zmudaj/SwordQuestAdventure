/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 13 of 25 in the game
*/

#include "Space13.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space13::Space13()
{
	name = "Space13";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 13;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space13::~Space13()
{}

string Space13::getName()
{
	return name;
}

string Space13::getShortForm()
{
	return shortForm;
}

string Space13::getLongForm()
{
	return longForm;
}

void Space13::printSpace()
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

int Space13::getId()
{
	return id;
}
