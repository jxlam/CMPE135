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

	cout << "Welcome to the game Jan Ken Po." << endl;
	cout << "Type 1 for Rock, 2 for Paper, or 3 for Scissors" << endl;
	cin >> userchoice;
	u.setUserChoice(userchoice);

	b = u.getUserChoice();

	if(userchoice == 1) {
		cout << "The user choice is " << b << " which is Rock." << endl;
	}
	else if(userchoice == 2) {
		cout << "The user choice is " << b << " which is Paper." << endl;
	}
	else {
		cout << "The user choice is " << b << " which is Scissors." << endl;
	}


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

