/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 16 of 25 in the game
*/

#include "Space16.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

Space16::Space16()
{
	name = "Space16";
	shortForm = "This is the short form";
	longForm = "This is the long form";
	id = 16;
	obj = NULL;
	combatEncounter = false;
	visited = false;
}

Space16::~Space16()
{}

string Space16::getName()
{
	return name;
}

string Space16::getShortForm()
{
	return shortForm;
}

string Space16::getLongForm()
{
	return longForm;
}

void Space16::printSpace()
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

int Space16::getId()
{
	return id;
}