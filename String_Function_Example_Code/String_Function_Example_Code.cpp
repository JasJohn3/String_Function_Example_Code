// String_Function_Example_Code.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>//used to access the function toupper

using namespace std;
string Upper_Case(string name);
int main()
{
	//declare two strings
	string user_name;
	string name_upper;


	cout << "Please enter your Name: ";
	//request the user_name and store as a string variable
	getline(cin, user_name);
	//call the function Upper_Case and assign the value to a new variable
	name_upper = Upper_Case(user_name);
	

	

		
	cout << "                             Welcome " << name_upper << "!                                         " << endl;


	system("pause");

    return 0;
}
string Upper_Case(string name)
{
	//using transform() function (#include <string> & #include <algorithm>) then perform (toupper function from #include<algorithm>)
	transform(name.begin(), name.end(), name.begin(), toupper);

	//generate a for loop that will iterate through the length of the string character name
	for (int i = 0; i < name.length(); i++)
	{
		//test if the ascii value of the name is contained within the range of <A to Z>
		if (name[i] >= 'A' && name[i] <= 'Z')
		{
			continue;
		}
		else
		{
			//If the name value contains characters outside of <A to Z>  as the user to enter a valid name.
			system("cls");
			cout << "Please enter a valid name with no special characters!"<<endl;
			main();

		}
	}
	//return the name
	return name;
}
