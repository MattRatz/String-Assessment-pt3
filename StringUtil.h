#ifndef STRINGUTIL_CPP 
#define STRINGUTIL_CPP
#pragma once
#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

void testUtil(string a, bool b);

class StringUtil
{
private:
	string aString;
protected:

public:
	StringUtil()
	{

	}
	StringUtil(string word)
	{
		aString = word; 
	}
	void runStringUtil();
	void writeInput(StringUtil a);
	string getInput(); 
	int replaceString(StringUtil a, StringUtil b);
	int indexFindString(StringUtil a, StringUtil b, int c); 
	int findString(StringUtil a, StringUtil b); 
	int getLength();
	char charAt();
	bool stringEqualTo(StringUtil a);
	string appendString(StringUtil a);
	string prependString(StringUtil a);
	void toLower();
	void toUpper();
};





#endif