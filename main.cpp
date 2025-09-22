
#include <iostream>
#include <string> 
#include <cctype>
#include <fstream>
#include "function.h"

using namespace std; 

int main()
{
	StringUtil startString; 
	string setString; 
	string name = "Matthew"; 
	const string* stringPtr = &setString; 
	char returnedChar;
	int length; 
	cout << "Enter string: ";
	cin >> setString; 
	length = startString.getLength(setString);  
	startString.charAt(setString);
	startString.stringEqualTo(setString, name);
	startString.appendString(setString);
	startString.prependString(setString);
	returnedChar = startString.constCharReturn(*stringPtr);
	cout << "Returned character with pointer: " << returnedChar << endl; 
	startString.toLower(setString); 
	startString.toUpper(setString); 

	
}
