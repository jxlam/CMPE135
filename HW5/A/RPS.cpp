#include "RPS.h"
#include "demoframe.h"
#include <iostream>
using namespace std;

// Create a new application object.
wxIMPLEMENT_APP(MyRPS);

bool RPS::OnInit()
{
    if (!wxApp::OnInit()) return false;

    Game_Frame *frame = new Game_Frame("RPS");
    frame->Show(true);

    return true;
}

int makechoice(int userchoice) {
		cout << "Welcome to the game Jan Ken Po." << endl;
		cout << "Type 1 for Rock, 2 for Paper, or 3 for Scissors" << endl;
		cin >> userchoice;
		if(userchoice == 1) {
			cout << "The user choice is Rock." << endl;
			return userchoice;

		}
		else if(userchoice == 2) {
			cout << "The user choice is Paper." << endl;
			return userchoice;
		}
		else if(userchoice == 3){
			cout << "The user choice is Scissors." << endl;
			return userchoice;
		}
		if (!(userchoice==1 || userchoice==2 || userchoice==3)){
			cout << "Invalid Option! " << endl;
			exit(1);
			}
		}

int makecompchoice(int compchoice) {
		compchoice = (rand() % 3) + 1;
		if(compchoice == 1) {
				return compchoice;
			}
			else if(compchoice == 2) {
				return compchoice;
			}
			else if(compchoice == 3){
				return compchoice;
			}
}


int main(void) {
//	int n;
//	int a;
//	int b;
//	int tie = 0;
//	int user_wins = 0;
//	int comp_wins = 0;
//	int userchoice;
//	int myuserchoice;
//	int compchoice;
//	int mycompchoice;
//
//
//	cout << "How many rounds do you want to play?" << endl;
//	cin >> n;
//	for(a = 0; a < n; a++) {
//		myuserchoice = makechoice(userchoice);
//		mycompchoice = makecompchoice(compchoice);
//		cout << "The current round is: " << a + 1 << endl;
//
//			if(myuserchoice == 1) {
//		 				if (mycompchoice==1){
//		 					cout << "The computer's choice is ROCK. Tied!" << endl;
//		 					tie++;
//		 				}
//		 				if (mycompchoice==2){
//		 					cout << "The computer's choice is PAPER. You lose!" << endl;
//		 					comp_wins++;
//		 				}
//		 				if (mycompchoice==3){
//		 					cout << "The computer's choice is SCISSORS. You win!" << endl;
//		 					user_wins++;
//		 				}
//		 			}
//		 			else if(myuserchoice == 2) {
//		 				if (mycompchoice==1){
//		 					cout << "The computer's choice is ROCK. You win!" << endl;
//		 					user_wins++;
//		 				}
//		 				if (mycompchoice==2){
//		 					cout << "The computer's choice is PAPER. Tied!" << endl;
//		 					tie++;
//		 				}
//		 				if (mycompchoice==3){
//		 					cout << "The computer's choice is SCISSORS. You lose!" << endl;
//		 					comp_wins++;
//		 				}
//		 			}
//		 			else if(myuserchoice == 3){
//		 				if (mycompchoice==1){
//		 					cout << "The computer's choice is ROCK. You lose!" << endl;
//		 					comp_wins++;
//		 				}
//		 				if (mycompchoice==2){
//		 					cout << "The computer's choice is PAPER. You win!" << endl;
//		 					user_wins++;
//		 				}
//		 				if (mycompchoice==3){
//		 					cout << "The computer's choice is SCISSORS. Tied!" << endl;
//		 					tie++;
//		 				}
//		 			}
//		 			else {
//		 				cout << "Invalid choice" << endl;
//		 				cout << a << endl;
//		 			}
//
//
//	}
//	cout << "Ties: " << tie << endl;
//	cout << "Human Wins: " << user_wins << endl;
//	cout << "Computer Wins: " << comp_wins << endl;

	return 0;
}
