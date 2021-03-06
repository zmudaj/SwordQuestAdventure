/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 9 of 25 in the game
*/

#ifndef SPACE9_HPP
#define SPACE9_HPP

#include <iostream>
#include <vector>
#include <string>

#include "Space.hpp"

using namespace std;

class Space9 : public Space
{
public:
	Space9();
	~Space9();
	string getName();
	string getShortForm();
	string getLongForm();
	void printSpace();
	int getId();

};
#endif // !SPACE9_HPP
