/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: All characters located throughout the game - this includes the hero plus all of the enemies
*/

#ifndef CHARACTERS_HPP
#define CHARACTERS_HPP

#include <iostream>
#include <string>
#include <vector>

#include "Container.hpp"

using namespace std;

class Characters
{
	protected:
		int strength;
		int level;
		string name;
		bool isDead;
	public:
		Characters();
		~Characters();
		virtual int attack() = 0;
		virtual void defense(int) = 0;
		virtual bool fatalBlow() = 0;
		string getName();
		int getStrength();
		int getLevel();
		void levelUp();
};
#endif // !CHARACTERS_HPP

// Hero Class
class Hero : public Characters
{
	private:
		int strength;
		int level;
		string name;
		bool isDead;
	public:
		Hero();
		~Hero();
		int attack();
		void defense(int);
		bool fatalBlow();
		string getName();
		int getStrength();
		int getLevel();
		void levelUp();
};
