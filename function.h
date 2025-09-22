#ifndef FUNCTION_CPP 
#define FUNCTION_CPP
#pragma once
#include <iostream>
#include <string> 
#include <fstream>


using namespace std;

class StringUtil
{
private:

protected:

public:
	StringUtil()
	{
	
	}
	string starterString; 
	int getLength(string a);
	void charAt(string a);
	void stringEqualTo(string a, string b);
	void appendString(string a);
	void prependString(string a);
	string toLower(string a);
	string toUpper(string a);
	char constCharReturn(string a); 

};

















#endif