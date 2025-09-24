#pragma once
#include <iostream>
#include <string> 
#include <fstream>
#include "StringUtil.h"

using namespace std;

class Player
{
private:
	StringUtil spells[4];
	int spellCount; 
protected:

public:
	Player()
	{
		spells[0] = StringUtil("Firebolt");;
		spells[1] = StringUtil("Icebolt");
		spells[2] = StringUtil("Thunderbolt");
		spells[3] = StringUtil("Big Rock");
		spellCount = 4;
	}
};
