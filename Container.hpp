/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: All containers used throughout the game
*/

#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Objects.hpp"

using namespace std;

class Container
{
	private:
		vector<Objects> tester;
	public:
		Container();
		~Container();
		void addToContainer(Objects& obj);
		void takeOutOfContainer();
		void printContainer();

};
#endif // !CONTAINER_HPP
