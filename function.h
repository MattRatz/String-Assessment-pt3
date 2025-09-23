#ifndef FUNCTION_CPP 
#define FUNCTION_CPP
#pragma once
#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

void testUtil(string a, bool b);
void testResults(int a, int b, int c);

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
	int indexFindString(StringUtil a, int b); 
	int findString(StringUtil a, StringUtil b); 
	int getLength();
	char charAt();
	void stringEqualTo();
	void appendString();
	void prependString();
	void toLower();
	void toUpper();

};

















#endif