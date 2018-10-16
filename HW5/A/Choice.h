/*
 * Choice.h
 *
 *  Created on: Oct 15, 2018
 *      Author: aidenchan
 */

#ifndef CHOICE_H_
#define CHOICE_H_

#include "wx/wx.h"

typedef int Choice;

enum {
	ROCK, PAPER, SCISSORS, NONE
};

wxString choice_to_wxString(Choice choice);
wxString choicerandom_to_wxString(Choice choice);


#endif /* CHOICE_H_ */
