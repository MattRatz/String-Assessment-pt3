#include <iostream>
#include <string> 
#include <cctype>
#include <fstream>
#include "function.h"

using namespace std; 


int StringUtil::getLength(string a)
{
	int length = a.length();
	cout << "Length is: " << length << endl; 
	return length; 
	
}
void StringUtil::charAt(string a)
{
	int charChoice;
	cout << "Enter a number for which character you'd like to grab from the string: " << a << endl;
	cout << "Choice: ";
	cin >> charChoice;
	
	cout << a[charChoice - 1] << endl;
	
}
void StringUtil::stringEqualTo(string a, string b)
{

	if (a == b)
	{
		cout << "These 2 strings are the same!" << endl;
	}
	else
	{
		cout << "These string are not equal!" << endl;
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
char StringUtil::constCharReturn(string a)
{
	int charChoice;
	char b; 
	cout << "Enter a number for which character you'd like to grab from the string: " << a << endl;
	cout << "Choice: ";
	cin >> charChoice;

	b = a[charChoice - 1]; 
	return b; 
}