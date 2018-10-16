#include "Choice.h"

wxString choice_to_wxString(Choice choice) {

	switch(choice) {
	case ROCK: 			return "Rock";
	case PAPER:			return "Paper";
	case SCISSORS:		return "Scissors";
	default:			return none;
	}
}


wxString choicerandom_to_wxString(Choice choice) {
	choice = (rand() % 3) + 1;
	switch(choice) {
	case ROCK: 			return "Rock";
	case PAPER:			return "Paper";
	case SCISSORS:		return "Scissors";
	default:			return none;
	}
}
