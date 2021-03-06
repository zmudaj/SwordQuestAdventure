/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 2 of 25 in the game
*/

#ifndef SPACE2_HPP
#define SPACE2_HPP

#include <iostream>
#include <vector>
#include <string>

#include "Space.hpp"

using namespace std;

class Space2 : public Space
{
public:
	Space2();
	~Space2();
	string getName();
	string getShortForm();
	string getLongForm();
	void printSpace();
	int getId();

};
#endif // !SPACE2_HPP
