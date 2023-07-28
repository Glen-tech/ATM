#include "choise.h"
#include <iostream>
#include <istream>
#include <string>

using namespace std;
enum in_input {Add_User=1,Login,Delete_user,Easter_egg = 99 , Exit = 112};


choise::choise()
{
	convert = 0;
	input = "";
	give = 0;
	toChoise = 0;
}

void choise::show_message()
{
	cout << "Hello user" << endl;
	cout << "Press 1 to add user" << endl;
	cout << "Press 2 to login" << endl;
	cout << "Pres 3 to delete user" << endl;

	choise::process_input();
}


int choise::give_input(int convert)
{
	cin >> input; 
	convert = stoi(input); // convert to int
	cout << convert << endl;
	return convert;
}


void choise::process_input()
{
	in_input i;

	while (toChoise != 122)
	{
		toChoise = give_input(give);
		i = static_cast<in_input>(toChoise);

			switch (i)
			{
			case Add_User:
				cout << "Add user" << endl;
				break;

			case Delete_user:
				cout << "Login" << endl;
				break;

			case Login:
				cout << "Delete user" << endl;
				break;

			case Easter_egg:
				cout << "easter egg" << endl;
				break;

			case Exit:
				cout << "End program" << endl;

			default:
				cout << "o no" << endl;
			}
	}
}



choise::~choise()
{
	
}

