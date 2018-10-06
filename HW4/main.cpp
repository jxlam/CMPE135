#include "Computer.h"
#include "User.h"
#include "Winner.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <stdbool.h>
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
	int e;
	int userPoints=0;
	int compPoints=0;
	int tiePoints=0;
	//int g;
	Computer c;
	User u;
//	MachineLearning machine;
	//Winner w;

	cout << "Welcome to the game Jan Ken Po." << endl;
	cout << "Do you want the computer to make a random choice or a choice based on machine learning?" << endl;
	cout << "Press 7 for random choice or press 8 for machine learning choice" << endl;
	cin >> algorithm_choice;

	for (int n=20; n>0; n--){

 	if(algorithm_choice == 7) {

 		u.makechoice();
 		a = u.getUserChoice();

	 	if(n < 6) {
	 	 	cout <<"Testing n < 5, a = " << a << endl;
	 	 	fout << a;
	 	 }
	 	 if(n == 1) {
	 	 	fout << endl;
	 	 }

 		c.setRandomChoice();
 		e = c.getCompRandomChoice();

 		if(a == 1) {
 				if (e==1){
 					cout << "The computer's choice is ROCK. Tied!" << endl;
 					tiePoints++;
 				}
 				if (e==2){
 					cout << "The computer's choice is PAPER. You lose!" << endl;
 					compPoints++;
 				}
 				if (e==3){
 					cout << "The computer's choice is SCISSORS. You win!" << endl;
 					userPoints++;
 				}
 			}
 			else if(a == 2) {
 				if (e==1){
 					cout << "The computer's choice is ROCK. You win!" << endl;
 					userPoints++;
 				}
 				if (e==2){
 					cout << "The computer's choice is PAPER. Tied!" << endl;
 					tiePoints++;
 				}
 				if (e==3){
 					cout << "The computer's choice is SCISSORS. You lose!" << endl;
 					compPoints++;
 				}
 			}
 			else if(a == 3){
 				if (e==1){
 					cout << "The computer's choice is ROCK. You lose!" << endl;
 					compPoints++;
 				}
 				if (e==2){
 					cout << "The computer's choice is PAPER. You win!" << endl;
 					userPoints++;
 				}
 				if (e==3){
 					cout << "The computer's choice is SCISSORS. Tied!" << endl;
 					tiePoints++;
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
	 	 	if(n == 1) {
	 	 		fout << endl;
	 	 	}

 		c.setRandomChoice();
 		e = c.getCompRandomChoice();


 		if(a == 1) {
 		 				if (e==1){
 		 					cout << "The computer's choice is ROCK. Tied!" << endl;
 		 					tiePoints++;
 		 				}
 		 				if (e==2){
 		 					cout << "The computer's choice is PAPER. You lose!" << endl;
 		 					compPoints++;
 		 				}
 		 				if (e==3){
 		 					cout << "The computer's choice is SCISSORS. You win!" << endl;
 		 					userPoints++;
 		 				}
 		 			}
 		 			else if(a == 2) {
 		 				if (e==1){
 		 					cout << "The computer's choice is ROCK. You win!" << endl;
 		 					userPoints++;
 		 				}
 		 				if (e==2){
 		 					cout << "The computer's choice is PAPER. Tied!" << endl;
 		 					tiePoints++;
 		 				}
 		 				if (e==3){
 		 					cout << "The computer's choice is SCISSORS. You lose!" << endl;
 		 					compPoints++;
 		 				}
 		 			}
 		 			else if(a == 3){
 		 				if (e==1){
 		 					cout << "The computer's choice is ROCK. You lose!" << endl;
 		 					compPoints++;
 		 				}
 		 				if (e==2){
 		 					cout << "The computer's choice is PAPER. You win!" << endl;
 		 					userPoints++;
 		 				}
 		 				if (e==3){
 		 					cout << "The computer's choice is SCISSORS. Tied!" << endl;
 		 					tiePoints++;
 		 				}
 		 			}
 		 			else {
 		 				cout << "Invalid choice" << endl;
 		 				cout << a << endl;
 		 			}


 	}
 	else {
 		cout <<"Algorithm choice is invalid, now exiting" << endl;
 		//exit(1);
 	}



	}
	if (userPoints>compPoints)
	{
		cout << "Player got " << userPoints << " points and the Computer got " << compPoints << " points. Player wins!"<<endl;
		cout << "Draws: " << tiePoints << endl;
	}
	if (userPoints<compPoints)
	{
			cout << "Player got " << userPoints << " points and the Computer got " << compPoints << " points. Computer wins!"<<endl;
			cout << "Draws: " << tiePoints <<endl;
	}


	ifstream in("output.txt");
		int number;

		vector<int> outputs;

		while(in >> number) {
			outputs.push_back(number);
		}

		int userrequest;
		while(true) {
			int choose;
			cout << "Now entering frequency check" << endl;
			cout << "Press 1 to check frequency, Press 2 to exit" << endl;
			cin >> choose;
			if(choose == 1) {
				cout << "Please enter the number you want to check occurrences of" << endl;
				cin >> userrequest;
				int counter = 0;
				for(int k = 0; k < outputs.size(); k++) {
					if(userrequest == outputs[k]) {
						counter++;
					}

				}
				cout << "This number " << userrequest << " has occurred " << counter << " times" << endl;
				fout << counter;
			}
			else {
				in.close();
				fout.close();
				exit(0);
			}

		}



	return 0;
}

