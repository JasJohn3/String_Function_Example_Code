// String_Function_Example_Code.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
string Upper_Case(string name);
int main()
{
	string user_name;
	string name_upper;


	cout << "Please enter your Name: ";
	getline(cin, user_name);
	name_upper = Upper_Case(user_name);
	

	

		
	cout << "                             Welcome " << name_upper << "!                                         " << endl;


	system("pause");

    return 0;
}
string Upper_Case(string name)
{
	transform(name.begin(), name.end(), name.begin(), toupper);

	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
		{
			continue;
		}
		else
		{
			system("cls");
			cout << "Please enter a valid name with no special characters!"<<endl;
			main();

		}
	}
	return name;
}
