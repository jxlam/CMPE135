#include "Computer.h"
#include "User.h"
#include "Winner.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

	int main() {

		ofstream fout;

		fout.open("output.txt", ofstream::app);
 	 	if(fout.fail()) {
 	 	cout << "Output file failed" << endl;
 	 	}

	int algorithm_choice;
	int computerchoice;
	int rand_compchoice;
	int userchoice;
	int a;
	int b;
	int d;
	int e;
	int m;
	//int f;
	//int g;
	Computer c;
	User u;
//	MachineLearning machine;
	//Winner w;


	for (int n=20; n>0; n--){
		cout << "Do you want the computer to make a random choice or a choice based on machine learning?" << endl;
		cout << "Press 7 for random choice or press 8 for machine learning choice" << endl;
		cin >> algorithm_choice;
 	if(algorithm_choice == 7) {

 		u.makechoice();
 		a = u.getUserChoice();

		cout << "You have chosen the computer to make a random choice" << endl;
 		cout << "The computer is going to make a choice..." << endl;

 		c.setRandomChoice();
 		e = c.getCompRandomChoice();

 		if(a == 1) {
 				if (e==1){
 					cout << "The computer's choice is ROCK. Tied!" << endl;
 				}
 				if (e==2){
 					cout << "The computer's choice is PAPER. You lose!" << endl;
 				}
 				if (e==3){
 					cout << "The computer's choice is SCISSORS. You win!" << endl;
 				}
 			}
 			else if(a == 2) {
 				if (e==1){
 					cout << "The computer's choice is ROCK. You win!" << endl;
 				}
 				if (e==2){
 					cout << "The computer's choice is PAPER. Tied!" << endl;
 				}
 				if (e==3){
 					cout << "The computer's choice is SCISSORS. You lose!" << endl;
 				}
 			}
 			else if(a == 3){
 				if (e==1){
 					cout << "The computer's choice is ROCK. You lose!" << endl;
 				}
 				if (e==2){
 					cout << "The computer's choice is PAPER. You win!" << endl;
 				}
 				if (e==3){
 					cout << "The computer's choice is SCISSORS. Tied!" << endl;
 				}
 			}
 			else {
 				cout << "Invalid choice" << endl;
 				cout << a << endl;
 			}


 //		f = w.setWinner(rand_compchoice);
 	 	//g = w.getWinner();


	}
 	else if(algorithm_choice == 8) {

 		u.makechoice();
 	 	a = u.getUserChoice();

	 	 	if(n < 6) {
	 	 		cout <<"Testing n < 5, a = " << a << endl;
	 	 		fout << a;
	 	 	}
	 	 	if(n == 0) {
	 	 		fout << endl;
	 	 	}

 		cout <<"You have chosen the computer to make a machine learning choice" << endl;
 		cout << "The computer is going to make a choice" << endl;

 		c.setRandomChoice();
 		e = c.getCompRandomChoice();


 			if(a == 1) {
 		 				if (e==1){
 		 					cout << "The computer's choice is ROCK. Tied!" << endl;
 		 				}
 		 				if (e==2){
 		 					cout << "The computer's choice is PAPER. You lose!" << endl;
 		 				}
 		 				if (e==3){
 		 					cout << "The computer's choice is SCISSORS. You win!" << endl;
 		 				}
 		 			}
 		 			else if(a == 2) {
 		 				if (e==1){
 		 					cout << "The computer's choice is ROCK. You win!" << endl;
 		 				}
 		 				if (e==2){
 		 					cout << "The computer's choice is PAPER. Tied!" << endl;
 		 				}
 		 				if (e==3){
 		 					cout << "The computer's choice is SCISSORS. You lose!" << endl;
 		 				}
 		 			}
 		 			else if(a == 3){
 		 				if (e==1){
 		 					cout << "The computer's choice is ROCK. You lose!" << endl;
 		 				}
 		 				if (e==2){
 		 					cout << "The computer's choice is PAPER. You win!" << endl;
 		 				}
 		 				if (e==3){
 		 					cout << "The computer's choice is SCISSORS. Tied!" << endl;
 		 				}
 		 			}
 		 			else {
 		 				cout << "Invalid choice" << endl;
 		 				cout << a << endl;
 		 			}


 	}
 	else {
 		cout <<"Algorithm choice is invalid, now exiting" << endl;
 	}



	}
	fout.close();
	cout << "Done writing to the file" << endl;
	return 0;
}

