#pragma once

#include <iostream>
#include "atm.h"
#include "add_user.h"

using namespace std;

class choise : public atm
{

public:
    choise();
    ~choise();
    void show_message();
    int give_input(int);
    void loop_input();

    int give;
    int convert;
    int toChoise;
    string input ; 

private : // keeping it protected from now 

    add_user *go_ad;
    void check_excel_file();
    void go_to_adduser();
    void go_to_delete_user();
    void go_to_login();
    void go_to_exit();
    void go_to_easter_egg();

    
   

};



