#include <iostream>
#include <cstdlib>
#include <ctime>
#ifndef COMPUTER_H_
#define COMPUTER_H_
using namespace std;


class Computer {
private:
	int Rock;
	int Paper;
	int Scissors;

public:
		int compchoice;
		Computer() {
		compchoice = 0;
		Rock = 1;
		Paper = 2;
		Scissors = 3;
		}
	void setRandomChoice() {
		compchoice = (rand() % 3) + 1;
	}


	int getCompRandomChoice() {
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
