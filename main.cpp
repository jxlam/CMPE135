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

	for (int n=20; n>0; n--){
	u.setUserChoice(userchoice);

	b = u.getUserChoice();

	cout << "The computer is going to make a choice" << endl;

	a = c.getCompChoice();
	e = u.getUserChoice();
	if(a == 1) {
		if (e==1){
			cout << "The computer's choice is rock. Tied!" << endl;
		}
		if (e==2){
			cout << "The computer's choice is rock. You win!" << endl;
		}
		if (e==3){
			cout << "The computer's choice is rock. You lose!" << endl;
		}
	}
	else if(a == 2) {
		if (e==1){
			cout << "The computer's choice is paper. You lose!" << endl;
		}
		if (e==2){
			cout << "The computer's choice is paper. Tied!" << endl;
		}
		if (e==3){
			cout << "The computer's choice is paper. You win!" << endl;
		}
	}
	else if(a == 3){
		if (e==1){
			cout << "The computer's choice is scissors. You win!" << endl;
		}
		if (e==2){
			cout << "The computer's choice is scissors. You lose!" << endl;
		}
		if (e==3){
			cout << "The computer's choice is scissors. Tied!" << endl;
		}
	}
	else {
		cout << "Invalid choice" << endl;
		cout << a << endl;
	}
	}

	return 0;
}
