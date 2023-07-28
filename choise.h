#pragma once

#include <iostream>
#include "atm.h"

using namespace std;

class choise : public atm
{

public:
    choise();
    ~choise();
    void show_message();
    int give_input(int);
    void process_input();

    int give;
    int convert;
    int toChoise;
    string input ; 
    

};



