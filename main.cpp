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
			cout << "Computer chose 'ROCK'... Tied!" << endl;
		}
		if (e==2){
			cout << "Computer chose 'ROCK'... You win!" << endl;
		}
		if (e==3){
			cout << "Computer chose 'ROCK'... You lose!" << endl;
		}
	}
	else if(a == 2) {
		if (e==1){
			cout << "Computer chose 'PAPER'... You lose!" << endl;
		}
		if (e==2){
			cout << "Computer chose 'PAPER'... Tied!" << endl;
		}
		if (e==3){
			cout << "Computer chose 'PAPER'... You win!" << endl;
		}
	}
	else if(a == 3){
		if (e==1){
			cout << "Computer chose 'SCISSORS'... You win!" << endl;
		}
		if (e==2){
			cout << "Computer chose 'SCISSORS'... You lose!" << endl;
		}
		if (e==3){
			cout << "Computer chose 'SCISSORS'... Tied!" << endl;
		}
	}
	else {
		cout << "Invalid choice" << endl;
		cout << a << endl;
	}
	}

	return 0;
}
