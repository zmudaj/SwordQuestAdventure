/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: All objects used in Sword Quest, includes weapons and armor
*/

#include "Objects.hpp"
#include <iostream>
#include <string>

using namespace std;

// Objects****************************

// Constructor 
Objects::Objects()
{
	name = "No Name";
	description = "No Description";
}
// Destructor
Objects::~Objects()
{}

string Objects::getName()
{
	return name;
}

string Objects::getDescription()
{
	return description;
}

void Objects::printObject()
{
	cout << "Name: " << name << endl;
	cout << "Description: " << description << endl;

}
