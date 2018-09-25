/*
 * Points.h
 *
 *  Created on: Sep 24, 2018
 *      Author: aidenchan
 */

#include <iostream>
using namespace std;
#ifndef POINTS_H_
#define POINTS_H_

class Points {
private:
	int userscore;
	int userchoice;
	int computerscore;
	int compchoice;
	int Rock;
	int Paper;
	int Scissors;


public:
	Points() {
		userscore = 0;
		computerscore = 0;
		compchoice = 0;
		userchoice = 0;
		Rock = 1;
		Paper = 2;
		Scissors = 3;
	}
	void setPoints() {
		if(userchoice == compchoice) {
			cout << "Game is a tie, no points added to each player" << endl;
		}
		else if(userchoice == Rock && compchoice == Scissors) {
			cout << "User is the winner" << endl;
			userscore = userscore + 1;
		}
		else if(userchoice == Rock && compchoice == Paper) {
			cout << "Computer is the winner" << endl;
			computerscore = computerscore + 1;
		}
		else if(userchoice == Paper && compchoice == Scissors) {
			cout << "Computer is the winner" << endl;
			computerscore = computerscore + 1;
		}
		else if(userchoice == Paper && compchoice == Rock) {
			cout << "User is the winner" << endl;
			userscore = userscore + 1;
		}
		else if(userchoice == Scissors && compchoice == Paper) {
			cout << "User is the winner" << endl;
			userscore = userscore + 1;
		}
		else if(userchoice == Scissors && compchoice == Rock) {
			cout << "Computer is the winner" << endl;
			computerscore = computerscore + 1;
		}
	}

};




#endif /* POINTS_H_ */
