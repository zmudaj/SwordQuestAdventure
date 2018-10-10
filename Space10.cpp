/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 10 of 25 in the game
*/

#include "Space10.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space10::Space10()
{
	name = "Space10";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 10;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space10::~Space10()
{}

string Space10::getName()
{
	return name;
}

string Space10::getShortForm()
{
	return shortForm;
}

string Space10::getLongForm()
{
	return longForm;
}

void Space10::printSpace()
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

int Space10::getId()
{
	return id;
}
