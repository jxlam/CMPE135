#ifndef GAME_FRAME_H_
#define GAME_FRAME_H_

#include "ButtonPanel.h"

class Game_Frame: public wxFrame {
public:
	Game_Frame(const wxString &title);
	virtual ~Game_Frame();
	void About(wxCommandEvent &event);
	void myExit(wxCommandEvent &event);
	void NewGame(wxCommandEvent &event);
private:
	wxDECLARE_EVENT_TABLE();
	ButtonPanel *button_panel;

	void initialize();
	void init_menu_bar();
	void init_sizer();
};
enum {
	RPS_Quit = wxID_EXIT,
	RPS_ABOUT = wxID_ABOUT
};


#endif /* GAME_FRAME_H_ */
