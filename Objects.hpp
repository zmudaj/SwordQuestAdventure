/* Program Name: Sword Quest
   Author: Centaurus Team 1
   Date: October 9, 2018
   Description: All objects used in Sword Quest, includes weapons and armor
   */

#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include <iostream>
#include <string>

using namespace std;


class Objects
{
	protected:
		string name;
		string description;
	public:
		Objects();
		~Objects();
		string getName();
		string getDescription();
		virtual void printObject();

};
#endif // !OBJECTS_HPP

