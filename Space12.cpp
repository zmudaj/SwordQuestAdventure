/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 12 of 25 in the game
*/

#include "Space12.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space12::Space12()
{
	name = "Space12";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 12;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space12::~Space12()
{}

string Space12::getName()
{
	return name;
}

string Space12::getShortForm()
{
	return shortForm;
}

string Space12::getLongForm()
{
	return longForm;
}

void Space12::printSpace()
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

int Space12::getId()
{
	return id;
}
