/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 9 of 25 in the game
*/

#include "Space9.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space9::Space9()
{
	name = "Space9";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 9;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space9::~Space9()
{}

string Space9::getName()
{
	return name;
}

string Space9::getShortForm()
{
	return shortForm;
}

string Space9::getLongForm()
{
	return longForm;
}

void Space9::printSpace()
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

int Space9::getId()
{
	return id;
}
