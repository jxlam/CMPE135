/*
 * ButtonPanel.h
 *
 *  Created on: Oct 15, 2018
 *      Author: aidenchan
 */

#ifndef BUTTONPANEL_H_
#define BUTTONPANEL_H_

#include "ButtonDemo.h"
#include "Choice.h"

class ButtonPanel : public wxPanel {
public:
	ButtonPanel(wxFrame *p_frame) : wxPanel(p_frame, wxID_ANY) {
		initialize();
	}
	void rock(wxCommandEvent& event);
	void paper(wxCommandEvent& event);
	void scissors(wxCommandEvent& event);
private:
	wxStaticText *button_chosen_text;
	void initialize();
	void update_button_choice_text(const Choice choice);
};



#endif /* BUTTONPANEL_H_ */
