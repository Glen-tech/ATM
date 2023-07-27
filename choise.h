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
    void give_input();

    short int* input_p;
    short int convert;
    string input ; 

};



