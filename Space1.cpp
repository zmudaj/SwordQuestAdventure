/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 1 of 25 in the game
*/

#include "Space1.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space1::Space1()
{
	name = "Space1";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 1;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space1::~Space1()
{}

string Space1::getName()
{
	return name;
}

string Space1::getShortForm()
{
	return shortForm;
}

string Space1::getLongForm()
{
	return longForm;
}

void Space1::printSpace()
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

int Space1::getId()
{
	return id;
}