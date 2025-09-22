#include <iostream>
#include <string> 
#include <cctype>
#include <fstream>
#include "function.h"

using namespace std; 


int StringUtil::getLength(string a) //finding length
{
	int length = a.length();
	cout << "Length is: " << length << endl; 
	return length; 
	
}
char StringUtil::charAt(string a) //finding character
{
	int charChoice;
	char returnChar;
	cout << "Enter a number for which character you'd like to grab from the string: " << a << endl;
	cout << "Choice: ";
	cin >> charChoice;
	
	returnChar = a[charChoice - 1]; 
	return returnChar; 
}
void StringUtil::stringEqualTo(string a, string b) //compare strings
{

	if (a == b)
	{
		cout << "These 2 strings (" << a << ", " << b << ") are the same!" << endl;
		cout << endl; 
	}
	else
	{
		cout << "These strings (" << a << ", " << b <<") are not equal!" << endl;
		cout << endl; 
	}
}
void StringUtil::appendString(string a)
{
	string b;
	cout << "Choose something to add to end of the string. " << endl;
	cout << "Current string : " << a << endl;
	cout << "String to add: ";
	cin >> b;
	cout << " " << endl;
	a += b;
	cout << a << endl;

}
void StringUtil::prependString(string a)
{
	string b;
	cout << "Choose something to add to beginning of the string. " << endl;
	cout << "Current string : " << a << endl;
	cout << "String to add: ";
	cin >> b;
	cout << " " << endl;
	cout << b + a << endl;  
}
string StringUtil::toLower(string a)
{
	int i = 0;
	int length = a.length();
	for (i = 0; a[i] > length; i++)
	{
		a[i] = tolower(a[i]);
	}
	cout << a << endl;
	return a; 
}
string StringUtil::toUpper(string a)
{
	int length = a.length();
	int i = 0;
	for (i = 0; a[i] > length; i++)
	{
		a[i] = toupper(a[i]);
		
	}
	cout << a << endl;
	return a; 
}
int StringUtil::findString()
{
	string sentence = "This is a short sentence.";
	string wordToFind = "short";
	size_t findPosition = sentence.find(wordToFind); //finding the word "short" in the sentence
	
	if (findPosition != string::npos)
	{
		cout << "The string '" << wordToFind << "' was found at " << findPosition << endl; 
	}
	else
	{
		cout << "The string '" << wordToFind << "' was not found.(-1)" << endl; 
	}
	return findPosition; 
}
void StringUtil::indexFindString(int a)
{
	string sentence = "This is a short setence.";
	string wordToFind = "short";
	size_t findPosition = sentence.find(wordToFind, a);
	
	if (findPosition != string::npos)
	{
		cout << "The string '" << wordToFind << "' was found at " << findPosition << endl;
	}
	else
	{
		cout << "The string '" << wordToFind << "' was not found.(-1)" << endl;
	}

}

void StringUtil::replaceString()
{
	string sentence = "This is a short setence.";
	string wordToFind = "short";
	size_t findPosition = sentence.find(wordToFind);

	if (findPosition != string::npos)
	{
		cout << "The word '" << wordToFind << "' was found." << endl;
		cout << "Changing word..." << endl; 
		wordToFind = "Changed!";   //manually changing the variable once found 
		cout << "The word is now changed to, " << wordToFind << endl;
	}
	else
	{
		cout << "The string '" << wordToFind << "' was not found.(-1)" << endl;
	}
}
string StringUtil::getInput()
{
	string input; 
	cout << "Input a word for the console to read and write" << endl;
	cin.ignore(); 
	getline(cin, input ); 
	return input; 
	
}
void StringUtil::writeInput(string a)
{
	cout << "You entered: " << a << endl; 
}