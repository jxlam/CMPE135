#include <iostream>
using namespace std;
#ifndef USER_H_
#define USER_H_

class User {
private:
	int Rock;
	int Paper;
	int Scissors;
public:
	int userchoice;
	User() {
		userchoice = 0;
		Rock = 1;
		Paper = 2;
		Scissors = 3;
	}
	void makechoice() {
			cout << "Welcome to the game Jan Ken Po." << endl;
			cout << "Type 1 for Rock, 2 for Paper, or 3 for Scissors" << endl;
			cin >> userchoice;
			if(userchoice == 1) {
				cout << "The user choice is Rock." << endl;
			}
			else if(userchoice == 2) {
				cout << "The user choice is Paper." << endl;
			}
			else if(userchoice == 3){
				cout << "The user choice is Scissors." << endl;
			}
			if (!(userchoice==1 || userchoice==2 || userchoice==3)){
				cout << "Invalid Option! " << endl;
				exit(1);
				}
			}

	int getUserChoice() {
		if(userchoice == 1) {
			return Rock;
		}
		else if(userchoice == 2) {
			return Paper;
		}
		else {
			return Scissors;
		}
	}
};







#endif /* USER_H_ */
