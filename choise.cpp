#include "choise.h"
#include <iostream>
#include <istream>
#include <string>

using namespace std;
enum in_input {Add_User=1,Login,Delete_user,Easter_egg = 99 , Exit = 4};


choise::choise()
{
	convert = 0;
	input = "";
	give = 0;
	toChoise = 0;
	go_ad = nullptr;
	
}

void choise::show_message()
{
	cout << "Hello user" << endl;
	cout << "Press 1 to add user" << endl;
	cout << "Press 2 to login" << endl;
	cout << "Press 3 to delete user" << endl;
	cout << "Press 4 to end program" << endl;

	loop_input();
}

void choise::go_to_adduser()
{
	go_ad = new add_user();
	go_ad->show_message();

}

int choise::give_input(int convert)
{
	cin >> input; 
	convert = stoi(input); // convert to int
	return convert;
}


void choise::loop_input() 
{
	in_input i;

	while (toChoise != 4) // while loop stopt at number 112
	{
		toChoise = give_input(give);
		i = static_cast<in_input>(toChoise);

			switch (i)
			{
			case Add_User:
				cout << "Add user" << endl;
				go_to_adduser();
				break;

			case Delete_user:
				cout << "Delete user" << endl;
				break;

			case Login:
				cout << "Login" << endl;
				break;

			case Exit:
				cout << "End program" << endl;
				break;

			case Easter_egg:
				cout << "easter egg" << endl;
				break;

			default:
				cout << "Try Again" << endl;
			}
	}
}



choise::~choise()
{
	
}

