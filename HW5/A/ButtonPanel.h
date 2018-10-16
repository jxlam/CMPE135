/*
 * ButtonPanel.h
 *
 *  Created on: Oct 15, 2018
 *      Author: aidenchan
 */

#ifndef BUTTONPANEL_H_
#define BUTTONPANEL_H_

#include "RPS.h"
#include "Choice.h"

class ButtonPanel : public wxPanel {
public:
	ButtonPanel(wxFrame *p_frame) : wxPanel(p_frame, wxID_ANY) {
		initialize();
	}
	void rock(wxCommandEvent& event);
	void paper(wxCommandEvent& event);
	void scissors(wxCommandEvent& event);
	void computer(wxCommandEvent& event);
	void human(wxCommandEvent& event);
	void c_rock(wxCommandEvent& event);
	void c_paper(wxCommandEvent& event);
	void c_scissors(wxCommandEvent& event);
private:
	wxStaticText *button_chosen_text;
	wxStaticText *comp_chosen_text;		//Therefore computer chooses:
	wxStaticText *win_chosen_text;
	wxStaticText *human_w_chosen;
	wxStaticText *computer_w_chosen;
	wxStaticText *ties_chosen;
	wxStaticText *round_chosen_text;
	void initialize();
	void update_button_choice_text(const Choice choice);
	void update_comp_choice_text(const Choice choice);
	void update_win_choice_text(const Choice choice);
	void update_human_w_chosen(const Choice choice);
	void update_computer_w_chosen(const Choice choice);
	void update_ties_chosen(const Choice choice);
	void update_rounds_chosen_text(const Choice choice);
};



#endif /* BUTTONPANEL_H_ */
