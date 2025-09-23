#include <iostream>
#include <string> 
#include <cctype>
#include <fstream>
#include "function.h"

using namespace std; 


int StringUtil::getLength() //finding length
{
	bool testBool;
	string testName = "Length"; 
	int length = aString.length();
	cout << "Length is: " << length << endl; 
	if (length < 0)
	{
		testBool = false;
	}
	else
	{
		testBool = true; 
	}
	testUtil(testName, testBool);
	return length; 
}
char StringUtil::charAt() //finding character
{
	bool testBool;
	string testName = "CharAt"; 
	int charChoice = 4;
	char returnChar;
	cout << "Pulling character in position 4..." << endl; 
	returnChar = aString[charChoice - 1];
	cout << "Character is : " << returnChar << endl; 
	if (returnChar >= 'A' && returnChar <= 'Z' || returnChar >= 'a' && returnChar <= 'z')
	{
		testBool = true; 
	}
	else
	{
		testBool = false;
	}
	testUtil(testName, testBool);
	return returnChar; 
}
void StringUtil::stringEqualTo() 
{
	string testName = "EqualTo"; 
	bool testBool;
	string compareString = "Apple"; //manually setting a string to be compared
	if (compareString == aString)
	{
		cout << "These 2 strings (" << compareString << ", " << aString << ") are the same!" << endl;
		cout << endl;
		testBool = true;
	}
	else
	{
		cout << "These strings (" << compareString << ", " << aString <<") are not equal!" << endl;
		cout << endl; 
		testBool = false; 
	}
	testUtil(testName, testBool);
}
void StringUtil::appendString()
{
	bool testBool;
	string testName = "Append"; 
	string append = "appending!"; // manually setting a string to be appended
	string appendedString;
	cout << "Current string before appending : " << aString << endl;
	cout << "String to add: " << append << endl; 
	appendedString = aString + append;
	cout << appendedString << endl;
	cout << " " << endl;
	if (appendedString != aString + append)
	{
		testBool = false;
	}
	else
	{
		testBool = true; 
	}
	testUtil(testName, testBool);
}
void StringUtil::prependString()
{
	bool testBool;
	string testName = "Prepend"; 
	string prepend = "Prepended!";
	string prependedString;
	cout << "Current string before prepend: " << aString << endl;
	cout << "String to be added: " << prepend << endl; 
	prependedString = prepend + aString; 
	cout << prependedString << endl; 
	cout << " " << endl;
	if (prependedString != prepend + aString)
	{
		testBool = false; 
	}
	else
	{
		testBool = true; 
	}
	testUtil(testName, testBool);
}
void StringUtil::toLower()
{
	cout << "Converting String to Lowercase" << endl; 
	bool testBool;
	string testName = "ToLower"; 
	int length = aString.length();
	for (int i = 0; aString[i] > length; i++)
	{
		aString[i] = tolower(aString[i]);
	}
	for (int i = 0; aString[i] > length; i++)
	{
		if (aString[i] >= 'A' && aString[i] <= 'Z')
		{
			testBool = false;
		}
		else
		{
			testBool = true; 
		}
	}
	cout << aString << endl;
	cout << endl; 
	testUtil(testName, testBool);
}
void StringUtil::toUpper()
{
	cout << "Converting string to uppercase" << endl; 
	bool testBool;
	string testName = "ToUpper";
	int length = aString.length();
	for (int i = 0; aString[i] > length; i++)
	{
		aString[i] = toupper(aString[i]);
	}
	for (int i = 0; aString[i] > length; i++)
	{
		if (aString[i] >= 'a' && aString[i] <= 'z')
		{
			testBool = false;
		}
		else
		{
			testBool = true;
		}
	}
	cout << aString << endl;
	cout << endl; 
	testUtil(testName, testBool); 
}
int StringUtil::findString(StringUtil a, StringUtil b)
{
	cout << "Searching for the string " << b.aString << " in the string " << a.aString << endl; 
	bool testBool;
	string testName = "FindString"; 
	size_t findPosition = a.aString.find(b.aString);
	if (findPosition != string::npos)
	{
		cout << "The string '" << b.aString << "' was found at " << findPosition << endl; 
		testBool = true;
		
	}
	else
	{
		cout << "The string '" << b.aString << "' was not found." << endl; 
		testBool = false;
		return -1;
	}
	cout << endl; 
	testUtil(testName, testBool);
	return findPosition;
	
}
int StringUtil::indexFindString(StringUtil a, int b)
{
	cout << "Searching for the string " << a.aString << " in the string " << aString << endl;
	bool testBool;
	string testName = "FindWithIndex";
	size_t findPosition = aString.find(a.aString, b); //searching for "weepwoopweep" in "WORD" (now changed to uppercase) 
	
	if (findPosition != string::npos)
	{
		cout << "The string '" << a.aString << "' was found at " << findPosition << endl;
		testBool = true;
		testUtil(testName, testBool);
		cout << endl;
		return findPosition; 
	}
	else
	{
		cout << "The string '" << a.aString << "' was not found." << endl;
		testBool = false;
		testUtil(testName, testBool);
		cout << endl;
		return -1; 
	}
	
	 
}

int StringUtil::replaceString(StringUtil a, StringUtil b)
{
	cout << "Searching and replacing for the string " << b.aString << " in the string " << a.aString << endl;
	bool testBool = true;
	bool loopBool = true; //bool to control loop 
	string testName = "ReplaceString";
	string replacement = "woop";
	size_t findPosition = a.aString.find(b.aString);
	do
	{
		size_t findPosition = a.aString.find(b.aString); //searching for "weep" in "weepwoopweep"
		if (findPosition == string::npos) 
		{
			loopBool = false; 
			break; // manually break out of loop here so that we do not hit the else statement and set the test to fail. 
		}
		if (findPosition != string::npos) 
		{
			cout << "The word '" << b.aString << "' was found." << endl;
			cout << "Changing word..." << endl;
			a.aString.replace(findPosition, 4, replacement);
			cout << "The word is now changed to, " << a.aString << endl;
			testBool = true;
		}
		else 
		{
			cout << "The string '" << b.aString << "' was not found. " << endl;
			testBool = false;
			return -1;
		}
	} while (loopBool == true); // this loop stops whenever we find "findPosition" = npos (line 206 handles bool logic) 
	testUtil(testName, testBool); 
	return 0; 
	cout << endl; 
}
string StringUtil::getInput()
{
	bool testBool;
	string testName = "GetInput"; 
	string input; 
	cout << "Input a word for the console to read and write" << endl;
	//cin.ignore(); //commented it out because it was not grabbing the first character of the input. now it works properly??
	getline(cin, input );  // before it would not let me input anything without "cin ignore" first
	if (cin.fail())
	{
		testBool = false; 
	}
	else
	{
		testBool = true; 
	}
	testUtil(testName, testBool);
	return input; 
	
}
void StringUtil::writeInput(StringUtil a)
{
	bool testBool;
	string testName = "WriteInput"; 
	cout << a.aString << endl; 
	if (cout.fail())
	{
		testBool = false;
	}
	else
	{
		testBool = true; 
	}
	testUtil(testName, testBool);
}
void StringUtil::runStringUtil()
{
	StringUtil HelloWorld("Hello World");
	StringUtil stringToSearch("weepwoopweep"); // this and "finding" are used for the find and find/replace functions
	StringUtil finding("weep");
	StringUtil startString("Word"); //This word is used for most of functions
	int position; 
	string gotInput; 
	startString.getLength();
	startString.charAt(); //finds character and returns it.
	startString.stringEqualTo(); // comparing strings
	startString.appendString();
	startString.prependString();
	startString.toLower();
	startString.toUpper();
	position = startString.findString(stringToSearch, finding); //finds string and returns position to search with 
	startString.indexFindString(stringToSearch, position); //searches for string at position
	startString.replaceString(stringToSearch, finding); //replaces string with set word
	gotInput = startString.getInput();
	startString.writeInput(HelloWorld); //takes stored info and writes to console
}
void testUtil(string a, bool b) //This is the test and log file function. Each of the functions has a "Test Name" and "test bool" 
{          
	float percPass = 0;         //string variables get passed through to grab name of the test. bool variable is passed through to decide if test failed
	static float testFail = 0;    //Had to use "static" so that "testNumber" wouldn't be reset to 0 each time function is called.
	static float testNumber = 0;  //Total tests. 
	static float testPass = 0;    
	ofstream testFile("TestFile.txt", ios::app);
	if (testFile.is_open())
	{
		
		if (b == true)
		{
			testPass++; //counting number of passes
			testNumber++; 
			testFile << "Test #" << testNumber << ": " << a << " was successful." << endl;
			cout << "Test #" << testNumber << ": " << a << " was successful." << endl;
			cout << endl;
			
		}
		else
		{
			testFail++; //counting # of fails
			testNumber++;
			testFile << "Test #" << testNumber << ": " << a << " failed." << endl;
			cout << "Test #" << testNumber << ": " << a << " failed." << endl;
			cout << endl; 
		}
		while (testNumber == 12)// made the do while to only work when we hit our max number of tests(There are 11 tests.) 
		{
			float percPass = (testPass / testNumber) *100;
			testFile << "Success rate: " << percPass << "%" << endl;
			cout << "Success rate: " << percPass << "%" << endl;
			testNumber++; //using testNumber++ here to break out of the do while. 
			testFile.close(); 
		}

	}
	else
	{
		cout << "ERROR: File could not be written to!" << endl; 
	}

}