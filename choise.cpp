#include "choise.h"
#include <iostream>
#include <istream>
#include <string>

using namespace std;

choise::choise()
{
	input_p = nullptr;
	convert = 0;
	input = "";
}

void choise::show_message()
{
	cout << "Hello user" << endl;
	cout << "Press 1 to add user" << endl;
	cout << "Press 2 to login" << endl;
	cout << "Pres 3 to delete user" << endl;

	give_input();
}


void choise::give_input()
{
	cin >> input; 

	convert = stoi(input);

	input_p = &convert;

	cout << *(input_p) << endl;
	cout << input_p << endl;
	cout << &input_p << endl;

}



choise::~choise()
{
	delete input_p;
}

