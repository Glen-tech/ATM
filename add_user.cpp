#include "add_user.h"
#include <iostream>
#include <fstream>

using namespace std;

add_user::add_user()
{

}

void add_user::show_message()
{
	cout << "add_user class" << endl;
	check_CSV_file();
}

void add_user::check_CSV_file()
{
	fstream file;

	file.open("C:\\Users\\glen_\\OneDrive\\Desktop\\users.csv");

	if (!file)
	{
		file.open("C:\\Users\\glen_\\OneDrive\\Desktop\\users.csv", ios::out);
		// in out(write) mode ios::out Open for output operations.
		file << "Name;password;\n"; // first row
		file.close(); // close the file
		cout << "File created";
	}

	else
	{
		cout << "File exist";
	}

}



add_user::~add_user()
{

}
