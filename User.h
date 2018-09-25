/*
 * User.h
 *
 *  Created on: Sep 24, 2018
 *      Author: aidenchan
 */
#include <iostream>
using namespace std;
#ifndef USER_H_
#define USER_H_

class User {
private:
	int userchoice;
	int Rock;
	int Paper;
	int Scissors;
public:
	User() {
		userchoice = 0;
		Rock = 1;
		Paper = 2;
		Scissors = 3;
	}
	void setUserChoice(int uChoice) {
			userchoice = uChoice;
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
