/*
 * Computer.h
 *
 *  Created on: Sep 24, 2018
 *      Author: aidenchan
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#ifndef COMPUTER_H_
#define COMPUTER_H_
using namespace std;


class Computer {
private:
	int compchoice;
	int Rock;
	int Paper;
	int Scissors;
	int Upper_bound;
	int Lower_bound;


public:
		Computer() {
		compchoice = 0;
		Rock = 1;
		Paper = 2;
		Scissors = 3;
		Upper_bound = 3;
		Lower_bound = 1;

	}
	int setCompChoice(int rand_compchoice) {
		compchoice = (rand() % Upper_bound) + Lower_bound;

	}
	int getCompChoice() {
		compchoice = (rand() % Upper_bound) + Lower_bound;


		if(compchoice == 1) {
			return Rock;
		}
		else if(compchoice == 2) {
			return Paper;
		}
		else if(compchoice == 3){
			return Scissors;
		}

	}

};



#endif /* COMPUTER_H_ */
