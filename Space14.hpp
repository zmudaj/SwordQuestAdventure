/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Space 14 of 25 in the game
*/

#ifndef SPACE14_HPP
#define SPACE14_HPP

#include <iostream>
#include <vector>
#include <string>

#include "Space.hpp"

using namespace std;

class Space14 : public Space
{
public:
	Space14();
	~Space14();
	string getName();
	string getShortForm();
	string getLongForm();
	void printSpace();
	int getId();

};
#endif // !SPACE14_HPP
