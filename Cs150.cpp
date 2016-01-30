// Cs150.cpp -- Cs150 Utility Function Implementation File
/********************************************
* AUTHOR: David Bernabe
* File: Cs150.cpp
* COURSE: CS 150 C++ Programming
* SECTION: TTh 11:10 - 1:05pm
* HOMEWORK #: 9
* PROJECT #:  1
* LAST MODIFIED: 11/3/2015
********************************************/
#include "Cs150.h"

void printHeader(int homework, int project, string lastModified)
{
	string bar;
	bar = getLine('*',40);
	cout << left;
	cout << bar << endl;
	cout << setw(15) << "Name:" << NAME << endl;
	cout << setw(15) << "Course:" << COURSE << endl;
	cout << setw(15) << "Section:" << SECTION << endl;
	cout << setw(15) << "Homework #:" << homework << endl;
	cout << setw(15) << "Project #:" << project << endl;
	cout << setw(15) << "Last Modified:" << lastModified << endl;
	cout << bar << endl;
	cout << right;
}

string getLine(char symbol, int width)
{
	string result;
	result = "";
	for(int i = 0; i < width; i++)
	{
		result += symbol;
	}
	return result;
}

void displayCentered(string text, int width)
{
	int centered;
	centered = (width + text.length() ) / 2;
	cout << setw(centered) << right << text << endl;
}

void pauseScreen()
{
	cout << endl << "Press ENTER to continue..." << endl;
	cin.ignore(1000,'\n');
}

void clearScreen(int height)
{
	for(int i = 0; i < height; i++)
	{
		cout << "\n";
	}
}

int readValue(string prompt, int lower, int upper)
{
	int input;
	bool isNotValid;
	
	do
	{
	     cout << prompt;
	     cin >> input;
      	 isNotValid = cin.fail() || input < lower || input > upper;
         if(isNotValid)
         {
              cin.clear();
              cin.ignore(1000,'\n');
              cout << "ERROR: Value must be between " << lower << " and " 
                   << upper << endl << endl;
                  
         }
    }while(isNotValid);
    
    cin.ignore(1000, '\n');
    
    return input;
}

double readValue(string prompt, double lower, double upper)
{
	double input;
	bool isNotValid;
	
	do
	{
	     cout << prompt;
	     cin >> input;
      	 isNotValid = cin.fail() || input < lower || input > upper;
         if(isNotValid)
         {
              cin.clear();
              cin.ignore(1000,'\n');
              cout << "ERROR: Value must be between " << lower << " and " 
                   << upper << endl << endl;
                  
         }
    }while(isNotValid);
    
    cin.ignore(1000, '\n');
    
    return input;
}


char readValue(string prompt, string validChars)
{
    char input;
    bool isNotValid;
    
    do
    {
         cout << prompt;
	     cin.get(input);
	     isNotValid =  validChars.find(input) == -1;
	     if(isNotValid)
         {
              
              cin.ignore(1000,'\n');
              cout << "ERROR: Char must be one of the following : " 
                   << validChars << endl << endl;
                   
                  
         }
     }while(isNotValid); 
         
   cin.ignore(1000,'\n');     
   
   return input;
	
	
}
string readString(string prompt, string validString)
{
    string input;
    bool isNotValid;

    do
    {
         cout << prompt;
	     getline(cin,input);
	     isNotValid =  validString.find(input) == -1;
	     if(isNotValid)
         {

              cout << "ERROR: Input must be one of the following : "
                   << validString << endl << endl;
         }
     }while(isNotValid);


   return input;


}
