
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <stdbool.h>
using namespace std;

class LotteryTypes {
public:
	virtual ~LotteryTypes() {}
	virtual void LotteryAlgorithm() = 0;
};

class RandStrategy : public LotteryTypes {
public:
	~RandStrategy() {}

	void LotteryAlgorithm () {
		int lotto_number;
		int winning_number;
		int frequency;
		int retry;
		cout << "You have chosen the random number lottery" << endl;
		RandStrat(lotto_number, winning_number, frequency, retry);

	}

	void process (){
		int lotto_number;
		int winning_number;
		int frequency;
		int retry;
		ofstream fout;
		fout.open("output.txt", ofstream::app); //opens frequency of winning number output file
		if(fout.fail()) {
			cout << "Output file failed" << endl;
		}
		ifstream in("output.txt");
		int number;	//variable to push to the vector

		int choice;
		cout << "Would you like to choose your own number or use the Quick-Pick ticket option where your number is chosen for you randomly?" << endl;
		cout << "Press 1 to choose your own or press 2 for the Quick-Pick option." << endl;
		cin >> choice;
		if (choice==1){
			cout << "What number would you like to choose from 1 - 100?"<<endl;
			cin >> lotto_number;
			cout << "You chose " << lotto_number << endl;
			if (lotto_number > 100){
				cout << "Sorry, your number is not a valid and out of the range." << endl;
			}
		}

		if (choice==2){
			lotto_number = rand() % 100 + 1;
			cout << "Your lotto number is " << lotto_number << endl;
		}

		vector<int> outputs;

		//Selecting the winning number
		winning_number = rand() % 100 + 1;

		while(in >> number) { //reading from the stream
			outputs.push_back(number);	//adding a new element to the vector each time a new integer
		}								//is read
		//now the vector contains the numbers from the output.txt
		frequency = std::count(outputs.begin(), outputs.end(), winning_number);

		fout << winning_number << " ";
		fout << frequency << endl;

		cout << "The winning number is " << winning_number << endl;

		if(lotto_number == winning_number) {
			cout << "You won $8 billion!" << endl;
		}
		else {
			cout << "You are not a winner." << endl;
		}
	}

	int RandStrat(int lotto_number, int winning_number, int frequency, int retry) {
		//Playing the Lottery: Random number between 1-100
		process();

		retry = rand() % 10 + 1;
		cout << "You get another chance of a free retry. You need a retry value of 1 to play again! Good luck!" << endl;
		cout << "Your retry value is: " << retry << endl;

		if(retry == 1) {
			cout << "Congrats! You got another chance." << endl;
			process();

		}

		if(retry!=1){
			cout << "Sorry! Better luck next time..." << endl;
		}
	}


};

class AddStrategy : public LotteryTypes {	//Triple 10 game
public:
	~AddStrategy() {}

	void LotteryAlgorithm() {
		int first;
		int second;
		int third;
		cout << "Doing Triple Tens algorithm for lottery" << endl;
		TripleTensStrat(first, second, third);
		//choose 3 numbers, if adds up to winning number.. then win
	}
	int TripleTensStrat(int first, int second, int third) {
		//Playing the Lottery: Each of the three digit must be 7 in order to win
		first = rand() % 10 + 1;
		if(first == 10) {
			cout << "Your first number is " << first << "!" << endl;
			second = rand() % 10 + 1;
			if(second == 10) {
				cout << "Your second number is " << second << "!" << endl;
				third = rand() % 10 + 1;
				if(third == 10) {
					cout << "Your third number is " << third << "!" << endl;
					cout << "You won $8 billion! Congratulations!" << endl;
				}
				else {
					cout << "Your third number is " << third << endl;
					cout << "Better luck next time..." << endl;
				}
			}
		else {
			cout << "Your second number is " << second << endl;
			cout << "Better luck next time..." << endl;
		}
		}
		else {
			cout << "Your first number is " << first << endl;
			cout << "Better luck next time..." << endl;
		}



	}
};

class Context {
	LotteryTypes *strategy;
public:
	void setLottery(LotteryTypes *set) {
		*strategy = *set;
	}
	LotteryTypes *getLottery() {
		return strategy;
	}
	void LotteryInterface() {
		strategy->LotteryAlgorithm();
	}


};



int main() {
		srand(time(NULL));

		int valid_age;
		int ticket_purchase;
		int lottery_game;

		//Age Confirmation
		cout << "Welcome to the Mega Billions Lottery with the current jackpot of $8 billion!" << endl;
		cout << "You must be 18 or over to play." << endl;
		cout << "Press 1 if you are 18 or over. Otherwise, please press any other key to exit the game." << endl;
		cin >> valid_age;
			if(valid_age == 1) {
				cout << "You are eligible to play!" << endl;

			}
			else {
				cout << "You are not eligible to play! Sorry!" << endl;
				exit(0);
			}

		//Ticket Purchase
		cout << "Lottery tickets are $500 each. Would you like to purchase one?" << endl;
		cout << "Press 1 if you would like to purchase one. Otherwise, press any other key" << endl;
		cin >> ticket_purchase;
			if(ticket_purchase == 1) {
				cout << "You have purchased one lottery ticket." << endl;
			}
			else {
				cout << "You have decided against purchasing a ticket. Goodbye!" << endl;
				exit(0);
			}

		Context *context = new Context();
		cout << "There are two types of Lottery games available. Which one would you like?" << endl;
		cout << "Press 1 for Random Number or press 2 for Triple Tens." << endl;
		cin >> lottery_game;


		//random number
		if(lottery_game == 1) {
			RandStrategy *rand = new RandStrategy();
			rand->LotteryAlgorithm();

		}

		//triple tens
		else if(lottery_game == 2) {
			AddStrategy *add = new AddStrategy();
			add->LotteryAlgorithm();
		}
		else {
			cout << "Invalid Choice, your $500 will be refunded and you can play again" << endl;
			exit(0);
		}




		return 0;
	}
