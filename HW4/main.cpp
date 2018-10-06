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
 				}
 			}
