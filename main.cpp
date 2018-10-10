/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: Main source code that runs the game
*/

#include "Game.hpp"
#include <iostream>
#include <string>

int main()
{
	string choice;
	bool ifError = false;


	while (1)
	{
		cout << "1. Play Sword Quest" << endl;
		cout << "2. Exit" << endl;
		getline(cin, choice);

		// Start game
		if (choice == "1")
		{
			Game *game = new Game();
			game->play();
			delete game;
		}
		else if (choice == "2")
		{
			return 0;
		}
		else
		{
			cout << "Invalid - Please enter 1 or 2" << endl;
			ifError = true;
		}

		if (ifError)
		{
			ifError = false;
		}

	}

	return 0;
}