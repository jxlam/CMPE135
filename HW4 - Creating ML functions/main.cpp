#include "Computer.h"
#include "User.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <stdbool.h>
using namespace std;


int Combine(int first, int second,int third,int fourth, int fifth) {
	int usernumber;
	int addme1;
	int addme2;
	int addme3;
	int addme4;
	int addme5;

	addme1 = (first*10000);
	addme2 = (second*1000);
	addme3 = (third*100);
	addme4 = (fourth*10);
	addme5 = (fifth*1);
	usernumber = addme1 + addme2 + addme3 + addme4 + addme5;

	return usernumber;
}

int Frequency(int usernumber) {
	ifstream in("output.txt");
	int number;	//variable to push to the vector

	vector<int> outputs;

	while(in >> number) { //reading from the stream
		outputs.push_back(number);	//adding a new element to the vector each time a new integer
	}								//is read
	//now the vector contains the numbers from the output.txt
	int frequency = std::count(outputs.begin(), outputs.end(), usernumber);

	return frequency;

}
int Divide1(int mostoccuring, int digit1) {
	int mod1;

	mod1 = (10000 % 10);

	digit1 = (mostoccuring/mod1);

	return digit1;
}

int Divide2(int mostoccuring, int digit2) {
	int mod2;

	mod2 = (1000 % 10);

	digit2 = (mostoccuring/mod2);

	return digit2;
}

int Divide3(int mostoccuring, int digit3) {
	int mod3;

	mod3 = (100 % 10);

	digit3 = (mostoccuring/mod3);

	return digit3;
}

int Divide4(int mostoccuring, int digit4) {
	int mod4;

	mod4 = (10 % 10);

	digit4 = (mostoccuring/mod4);

	return digit4;
}
int Divide5(int mostoccuring, int digit5) {

	digit5 = (mostoccuring % 10);

	return digit5;
}
int getMLChoice(int n, int digit1, int digit2, int digit3, int digit4, int digit5) {
	int mlchoice;
	if(n == 20 || n == 15 || n == 10 || n == 5) {
		mlchoice = digit1;
	}
	else if(n == 19 || n == 14 || n == 9 || n == 4) {
		mlchoice = digit2;
	}
	else if(n == 18 || n == 13 || n == 8 || n == 3) {
		mlchoice = digit3;
	}
	else if(n == 17 || n == 12 || n == 7 || n == 2) {
		mlchoice = digit4;
	}
	else {
		mlchoice = digit5;
	}
	return mlchoice;
}

int getMostOccuring() {
	int mostoccuring;
	ifstream in("output.txt");
		int number;	//variable to push to the vector
		vector<int> outputs;

		while(in >> number) { //reading from the stream
			outputs.push_back(number);	//adding a new element to the vector each time a new integer
		}								//is read
		//now the vector contains the numbers from the output.txt

		//need some way to find the mode of the vectors

	return mostoccuring;
}
	int main() {


		ofstream fout;

		fout.open("output.txt", ofstream::app);
 	 	if(fout.fail()) {
 	 	cout << "Output file failed" << endl;
 	 	}

	int usernumber;
	int algorithm_choice;
 	int frequency;
 	int mostoccuring;
	//int computerchoice;
	//int rand_compchoice;
	//int userchoice;
	int a;
	//int b;
	//int d;
	int e;
	//int m;
	int mlchoice;
	//int f;
	//int g;
	Computer c;
	User u;
//	MachineLearning machine;


	for (int n=20; n>0; n--){

		cout << "Do you want the computer to make a random choice or a choice based on machine learning?" << endl;
		cout << "Press 7 for machine learning or press 8 for random" << endl;
		cin >> algorithm_choice;
 	if(algorithm_choice == 7) {			//MACHINE LEARNING CHOICE
 		int one;
 		int two;
 		int three;
 		int four;
 		int five;

 		int digit1;
 		int digit2;
 		int digit3;
 		int digit4;
 		int digit5;

 		u.makechoice();
 		a = u.getUserChoice();

 	 			if(n < 6) {

 	 			if(n == 5) {
 	 				one = a;
 	 			}
 	 			if(n == 4) {
 	 				two = a;
 	 			}
 	 			if(n == 3) {
 	 				three = a;
 	 			}
 	 			if(n == 2) {
 	 				four = a;
 	 			}
 	 			if(n == 1) {
 	 				five = a;
 	 			}

 		 	 		fout << a;
 		 	 	}
 		 	 	if(n == 1) {
 		 	 		fout << "   ";
 		 	 	}

 		//mostoccuring = getMostOccuring();			//functions for ML choice
// 		digit1 = Divide1(mostoccuring, digit1);		//get first digit from userchoice
// 		digit2 = Divide2(mostoccuring, digit2);		//get second digit from userchoice
// 		digit3 = Divide3(mostoccuring, digit3);		//get third digit from userchoice
// 		digit4 = Divide4(mostoccuring, digit4);		//get fourth digit from userchoice
// 		digit5 = Divide5(mostoccuring, digit5);		//get fifth digit from userchoice
// 		mlchoice = getMLChoice(n, digit1, digit2, digit3, digit4, digit5); //returns mlchoice based on current round
// 																	//mlchoice = one of the digits based on round


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

 	else if(algorithm_choice == 8) {		//MACHINE LEARNING CHOICE

 		u.makechoice();
 	 	a = u.getUserChoice();
		int first;
	 	int second;
	 	int third;
	 	int fourth;
	 	int fifth;




	 		if(n < 6) {

	 		 		if(n == 5) {
	 		 			first = a;
	 		 		}
	 	 			if(n == 4) {
	 	 				second = a;
	 	 			}
	 	 			if(n == 3) {
	 	 				third = a;
	 	 			}
	 	 			if (n == 2) {
	 	 				fourth = a;
	 	 			}
	 	 			if (n == 1){
	 	 				fifth = a;
	 	 			}
	 	 				fout << a;
	 	 	}

	 		if(n == 1) {

		 		fout << "  ";
	  	}

	 	usernumber = Combine(first, second, third, fourth, fifth);



 		cout <<"You have chosen the computer to make a random choice" << endl;
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
	frequency = Frequency(usernumber);
 	cout << "The last 5 combinations of user choices are: " << usernumber << endl;
 	cout << "The frequency of that combination is: " << frequency << endl;
	fout << frequency << endl;
	fout.close();

//	ifstream in("output.txt");
//	int number;	//variable to push to the vector
//
//	vector<int> outputs;
//
//	while(in >> number) { //reading from the stream
//		outputs.push_back(number);	//adding a new element to the vector each time a new integer
//	}								//is read
//	//now the vector contains the numbers from the output.txt
//	int frequency = std::count(outputs.begin(), outputs.end(), usernumber);
//
//


//	int userrequest;
//	while(true) {
//		int choose;
//		cout << "Now entering frequency check" << endl;
//		cout << "Press 1 to check frequency, Press 2 to exit" << endl;
//		cin >> choose;
//		if(choose == 1) {
//			cout << "Please enter the number you want to check occurrences of" << endl;
//			cin >> userrequest;
//			int counter = 0;
//			for(int k = 0; k < outputs.size(); k++) {
//				if(userrequest == outputs[k]) {
//					counter++;
//				}
//
//			}
//			cout << "This number " << userrequest << " has occurred " << counter << " times" << endl;
//		}
//		else {
//			in.close();
//			exit(0);
//		}
//
//	}




	return 0;
}

