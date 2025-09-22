
#include <iostream>
#include <string> 
#include <cctype>
#include <fstream>
#include "function.h"

using namespace std; 

int main()
{
	StringUtil startString; 
	string setString = "Apple";
	string compare = "Matthew";
	string gotInput; 
	int position; 
	char returnedChar;
	cout << "The starting word is, " << setString << endl; 
	startString.getLength(setString);  
	returnedChar = startString.charAt(setString); //finds character and returns it.
	cout << "Character is : " << returnedChar << endl; 
	cout << " " << endl; 
	startString.stringEqualTo(setString, compare); // comparing strings
	startString.appendString(setString);
	startString.prependString(setString); 
	startString.toLower(setString); 
	startString.toUpper(setString); 
	position = startString.findString(); //finds string and returns position to search with 
	startString.indexFindString(position); //searches for string at position
	startString.replaceString(); //replaces string with set word
	gotInput = startString.getInput(); 
	startString.writeInput(gotInput); //takes stored info and writes to console

	
}
