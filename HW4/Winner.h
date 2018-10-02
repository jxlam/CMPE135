/*
 * Winner.h
 *
 *  Created on: Oct 1, 2018
 *      Author: aidenchan
 */
#include "User.h"
#include "Computer.h"
#ifndef WINNER_H_
#define WINNER_H_

class Winner : public User, Computer{
private:
	int Rock;
	int Paper;
	int Scissors;

public:
	Winner() {
		Rock = 1;
		Paper = 2;
		Scissors = 3;
	}
/*	int	getWinner() {
		if(compchoice == 1) {
			if (userchoice==1){
				return Rock;

			}
			if (userchoice==2){
				return Paper;

			}
			if (userchoice==3){
				return Scissors;
			}
		}
		else if(compchoice == 2) {
			if (userchoice==1){
				return Rock;
			}
			if (userchoice==2){
				return Paper;
			}
			if (userchoice==3){
				return Scissors;
			}
		}
		else if(compchoice == 3){
			if (userchoice==1){
				return Rock;
			}
			if (userchoice==2){
				return Paper;
			}
			if (userchoice==3){
				return Scissors;
			}
		}
		else {
			cout << "Computer choice is below:" << endl;
			return compchoice;
		}
	} */

	int setWinner(int cChoice) {
		compchoice = cChoice;
		if(cChoice == 1) {
			if (userchoice==1){
				cout << "The computer's choice is rock. Tied!" << endl;

			}
			if (userchoice==2){
				cout << "The computer's choice is rock. You win! " << endl;

			}
			if (userchoice==3){
				cout << "The computer's choice is rock. You lose! " << endl;
			}
		}
		else if(cChoice == 2) {
			if (userchoice==1){
				cout << "The computer's choice is paper. You lose!" << endl;
			}
			if (userchoice==2){
				cout << "The computer's choice is paper. Tied!" << endl;
			}
			if (userchoice==3){
				cout << "The computer's choice is paper! You win!" << endl;
			}
		}
		else if(cChoice == 3){
			if (userchoice==1){
				cout << "The computer's choice is scissors. You win!" << endl;
			}
			if (userchoice==2){
				cout << "The computer's choice is scissors. You lose!" << endl;
			}
			if (userchoice==3){
				cout << "The computer's choice is scissors. Tied!" << endl;
			}
		}
		else {
			cout << "Computer choice is: " << compchoice << endl;
		}


	}

};






#endif /* WINNER_H_ */
