//============================================================================
// Name        : CMPE135Assignment3.cpp
// Author      : aiden chan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Computer.h"
#include "User.h"
#include <iostream>
using namespace std;

int main() {
	int computerchoice;
	int rand_compchoice;
	int userchoice;
	int a;
	int b;
	int e;
	Computer c;
	User u;

	u.setUserChoice(userchoice);

	b = u.getUserChoice();

	cout << "The computer is going to make a choice" << endl;

	a = c.getCompChoice();

	if(a == 1) {
		cout << "Computer's choice is Rock." << endl;
	}
	else if(a == 2) {
		cout << "Computer's choice is Paper." << endl;
	}
	else if(a == 3){
		cout << "Computer's choice is Scissors." << endl;
	}
	else {
		cout << "Invalid choice" << endl;
		cout << a << endl;
	}


	return 0;
}

