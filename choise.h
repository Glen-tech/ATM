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

private :

    add_user *go_ad;
    void go_to_adduser();
    
   

};



