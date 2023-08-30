#pragma once
#include "atm.h"
class add_user :
    private atm
{
public:
    add_user();
    ~add_user();
    void show_message();


private:
    void check_CSV_file();
    
};

