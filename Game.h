#pragma once
#include <iostream>
#include <string> 
#include <fstream>
#include "StringUtil.h"


using namespace std;

class Game
{
	Game()
	{

	}
};


class Room 
{
private:
	StringUtil rooms[4];

public:
	Room(StringUtil description)
	{

	}
	const void description()
	{
		rooms[0] = StringUtil("You are in the middle of an open field, with 4 directions to choose from");
		rooms[1] = StringUtil("You found yourself in a house, with a lamp in the corner");
		rooms[2] = StringUtil("You walk up to an abandoned building, at the entrance there is a cat meowing at you."); 
		rooms[4] = StringUtil("Oh no... you found the mines...and there's a pickaxe in the corner. Do you yearn?");
		
	}
};

