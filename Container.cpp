/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: All containers used throughout the game
*/

#include "Container.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Constructor
Container::Container()
{}
// Destructor
Container::~Container()
{}

void Container::addToContainer(Objects &obj)
{
	tester.push_back(obj);
}

void Container::takeOutOfContainer()
{}

void Container::printContainer()
{
	for (int i = 0; i < tester.size(); i++)
	{
		cout << tester[i].getName() << endl;
	}
}
