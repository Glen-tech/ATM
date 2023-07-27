#ifndef ATM_H
#define ATM_H

class atm {

public:

	atm();
	virtual ~atm() = 0;
	virtual void show_message()=0;
	
private:

	virtual void give_input() = 0;
	/*virtual char login() = 0;
	virtual char name()= 0;
	virtual int balance() = 0;*/

};

#endif

