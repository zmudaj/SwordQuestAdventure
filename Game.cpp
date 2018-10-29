/* Program Name: Sword Quest
Author: Centaurus Team 1
Date: October 9, 2018
Description: This controls the flow of the game and all of the interactions
*/

#include "Game.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <cstdlib>

using namespace std;

Game::Game()
{
	// Create game board
	spaceArr = new Space*[25];
	spaceArr[0] = new Space1();
	spaceArr[1] = new Space2();
	spaceArr[2] = new Space3();
	spaceArr[3] = new Space4();
	spaceArr[4] = new Space5();
	spaceArr[5] = new Space6();
	spaceArr[6] = new Space7();
	spaceArr[7] = new Space8();
	spaceArr[8] = new Space9();
	spaceArr[9] = new Space10();
	spaceArr[10] = new Space11();
	spaceArr[11] = new Space12();
	spaceArr[12] = new Space13();
	spaceArr[13] = new Space14();
	spaceArr[14] = new Space15();
	spaceArr[15] = new Space16();
	spaceArr[16] = new Space17();
	spaceArr[17] = new Space18();
	spaceArr[18] = new Space19();
	spaceArr[19] = new Space20();
	spaceArr[20] = new Space21();
	spaceArr[21] = new Space22();
	spaceArr[22] = new Space23();
	spaceArr[23] = new Space24();
	spaceArr[24] = new Space25();

	// Create Connections
	// Space 1
	spaceArr[0]->setDirections(NULL, spaceArr[1], spaceArr[5], NULL);
	// Space 2
	spaceArr[1]->setDirections(NULL, NULL, NULL, spaceArr[0]);
	// Space 3
	spaceArr[2]->setDirections(NULL, spaceArr[3], spaceArr[7], NULL);
	// Space 4
	spaceArr[3]->setDirections(NULL, spaceArr[4], NULL, spaceArr[2]);
	// Space 5
	spaceArr[4]->setDirections(NULL, NULL, spaceArr[9], spaceArr[3]);
	// Space 6
	spaceArr[5]->setDirections(spaceArr[0], spaceArr[6], spaceArr[10], NULL);
	// Space 7
	spaceArr[6]->setDirections(NULL, NULL, spaceArr[11], spaceArr[5]);
	// Space 8
	spaceArr[7]->setDirections(spaceArr[2], spaceArr[8], spaceArr[12], NULL);
	// Space 9
	spaceArr[8]->setDirections(spaceArr[3], spaceArr[9], NULL, spaceArr[7]);
	// Space 10
	spaceArr[9]->setDirections(spaceArr[4], NULL, NULL, spaceArr[8]);
	// Space 11
	spaceArr[10]->setDirections(spaceArr[5], NULL, NULL, NULL);
	// Space 12
	spaceArr[11]->setDirections(spaceArr[6], spaceArr[12], spaceArr[16], NULL);
	// Space 13
	spaceArr[12]->setDirections(spaceArr[7], spaceArr[13], spaceArr[17], spaceArr[11]);
	// Space 14
	spaceArr[13]->setDirections(NULL, spaceArr[14], NULL, spaceArr[12]);
	// Space 15
	spaceArr[14]->setDirections(NULL, NULL, NULL, spaceArr[13]);
	// Space 16
	spaceArr[15]->setDirections(NULL, spaceArr[16], spaceArr[20], NULL);
	// Space 17
	spaceArr[16]->setDirections(spaceArr[11], NULL, NULL, spaceArr[15]);
	// Space 18
	spaceArr[17]->setDirections(NULL, NULL, NULL, NULL);
	// Space 19
	spaceArr[18]->setDirections(NULL, spaceArr[19], NULL, NULL);
	// Space 20
	spaceArr[19]->setDirections(NULL, NULL, spaceArr[24], NULL);
	// Space 21
	spaceArr[20]->setDirections(NULL, spaceArr[21], NULL, NULL);
	// Space 22
	spaceArr[21]->setDirections(NULL, spaceArr[22], NULL, NULL);
	// Space 23
	spaceArr[22]->setDirections(NULL, spaceArr[23], NULL, NULL);
	// Space 24
	spaceArr[23]->setDirections(spaceArr[18], NULL, NULL, NULL);
	// Space 25
	spaceArr[24]->setDirections(spaceArr[19], NULL, NULL, NULL);



	// Player starting location - Sancuary 
	playerLoc = spaceArr[12];
	int maxInputLength = 50;

}
//  Delete board memory 
Game::~Game()
{
/*
	// Hard coded deletion
	delete spaceArr[0];
	delete spaceArr[1];
	delete spaceArr[2];
	delete spaceArr[3];
	delete spaceArr[4];
	delete spaceArr[5];
	delete spaceArr[6];
	delete spaceArr[7];
	delete spaceArr[8];
	delete spaceArr[9];
	delete spaceArr[10];
	delete spaceArr[11];
	delete spaceArr[12];
	delete spaceArr[13];
	delete spaceArr[14];
	delete spaceArr[15];
	delete spaceArr[16];
	delete spaceArr[17];
	delete spaceArr[18];
	delete spaceArr[19];
	delete spaceArr[20];
	delete spaceArr[21];
	delete spaceArr[22];
	delete spaceArr[23];
	delete spaceArr[24];
*/
	// Loop deletion - buggy when used last time
	for (int i = 0; i < 25; i++)
	{
		delete spaceArr[i];
	}
	// Delete array
	delete[] spaceArr;

}
//  Moves hero from space to space
int Game::move(string input)
{
	// Input validation: break out into separate function
	if (input.length() > maxInputLength)
	{
		cout << "Input must be 50 characters or less" << endl << endl;
		return -1;
	}
	if (input.find("don't") < maxInputLength || input.find("Don't") < maxInputLength)
	{
		cout << "Please don't say don't. It confuses me." << endl << endl;
		return -1;
	}
	// end of input validation 
	// Logic for moving different directions. Maybe refactor this down to a small function passing in the direction?
	if (input.find("North") < maxInputLength || input.find("north") < maxInputLength)
	{
		if (playerLoc->getNorth() == NULL)
		{
			return -1;
		}
		else
		{
			playerLoc = playerLoc->getNorth();
			return 0;
		}
	}
	else if (input.find("East") < maxInputLength || input.find("east") < maxInputLength)
	{
		if (playerLoc->getEast() == NULL)
		{
			return -1;
		}
		else
		{
			playerLoc = playerLoc->getEast();
			return 0;
		}
	}
	else if (input.find("South") < maxInputLength || input.find("south") < maxInputLength)
	{
		if (playerLoc->getSouth() == NULL)
		{
			return -1;
		}
		else
		{
			playerLoc = playerLoc->getSouth();
			return 0;
		}
	}
	else if (input.find("West") < maxInputLength || input.find("west") < maxInputLength)
	{
		if (playerLoc->getWest() == NULL)
		{
			return -1;
		}
		else
		{
			playerLoc = playerLoc->getWest();
			return 0;
		}
	}
	else
	{
		cout << "Sorry, I did not understand your input" << endl << endl;
		return -1;
	}
}

void Game::play()
{
	// Create Space objects
	Space1 s1;
	Space2 s2;
	Space3 s3;
	Space4 s4;
	Space5 s5;
	Space6 s6;
	Space7 s7;
	Space8 s8;
	Space9 s9;
	Space10 s10;
	Space11 s11;
	Space12 s12;
	Space13 s13;
	Space14 s14;
	Space15 s15;
	Space16 s16;
	Space17 s17;
	Space18 s18;
	Space19 s19;
	Space20 s20;
	Space21 s21;
	Space22 s22;
	Space23 s23;
	Space24 s24;
	Space25 s25;

	int turns = 0;

	char choice;
	
	while (turns < 25)
	{
		cout << endl;
		// Shows locations
		if (playerLoc->getNorth() == NULL)
		{
			cout << "There is nothing there" << endl;
		}
		else
		{
			cout << "North: " << playerLoc->getNorth()->getName() << endl;
 		}
		if (playerLoc->getEast() == NULL)
		{
			cout << "There is nothing there" << endl;
		}
		else
		{
			cout << "East: " << playerLoc->getEast()->getName() << endl;
		}
		if (playerLoc->getSouth() == NULL)
		{
			cout << "There is nothing there" << endl;
		}
		else
		{
			cout << "South: " << playerLoc->getSouth()->getName() << endl;
		}
		if (playerLoc->getWest() == NULL)
		{
			cout << "There is nothing there" << endl;
		}
		else
		{
			cout << "West: " << playerLoc->getWest()->getName() << endl;
		}

		// Error handling
		while (1)
		{
			string input;
			
			cout << "Where do you want to go?" << endl;
			getline(cin, input);
			int res = move(input);
			if (res == -1)
			{
				cout << "It is forbidden to go there" << endl;

			}
			else
			{
				break;
			}
		/*
			else
			{
				cout << "Invalid input - Please enter N, E, S or W." << endl;

			}
		*/	
		
		// All the magic happens here - interaction with objects, fighting, etc.
		if (playerLoc == spaceArr[0])
		{
			s1.printSpace();
		}
		else if (playerLoc == spaceArr[1])
		{
			s2.printSpace();
		}
		else if (playerLoc == spaceArr[2])
		{
			s3.printSpace();
		}
		else if (playerLoc == spaceArr[3])
		{
			s4.printSpace();
		}
		else if (playerLoc == spaceArr[4])
		{
			s5.printSpace();
		}
		else if (playerLoc == spaceArr[5])
		{
			s6.printSpace();
		}
		else if (playerLoc == spaceArr[6])
		{
			s7.printSpace();
		}
		else if (playerLoc == spaceArr[7])
		{
			s8.printSpace();
		}
		else if (playerLoc == spaceArr[8])
		{
			s9.printSpace();
		}
		else if (playerLoc == spaceArr[9])
		{
			s10.printSpace();
		}
		else if (playerLoc == spaceArr[10])
		{
			s11.printSpace();
		}
		else if (playerLoc == spaceArr[11])
		{
			s12.printSpace();
		}
		else if (playerLoc == spaceArr[12])
		{
			s13.printSpace();
		}
		else if (playerLoc == spaceArr[13])
		{
			s14.printSpace();
		}
		else if (playerLoc == spaceArr[14])
		{
			s15.printSpace();
		}
		else if (playerLoc == spaceArr[15])
		{
			s16.printSpace();
		}
		else if (playerLoc == spaceArr[16])
		{
			s17.printSpace();
		}
		else if (playerLoc == spaceArr[17])
		{
			s18.printSpace();
		}
		else if (playerLoc == spaceArr[18])
		{
			s19.printSpace();
		}
		else if (playerLoc == spaceArr[19])
		{
			s20.printSpace();
		}
		else if (playerLoc == spaceArr[20])
		{
			s21.printSpace();
		}
		else if (playerLoc == spaceArr[21])
		{
			s22.printSpace();
		}
		else if (playerLoc == spaceArr[22])
		{
			s23.printSpace();
		}
		else if (playerLoc == spaceArr[23])
		{
			s24.printSpace();
		}
		else if (playerLoc == spaceArr[24])
		{
			s25.printSpace();
		}
		else
		{ }

		turns++;
	}
}
