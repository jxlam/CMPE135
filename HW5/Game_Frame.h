#ifndef DEMOFRAME_H_
#define DEMOFRAME_H_

#include "ButtonPanel.h"

/**
 * The application frame.
 */
class Game_Frame : public wxFrame
{
public:
    Game_Frame(const wxString& title); //constructor
    virtual ~Game_Frame(); //destructor
    void About(wxCommandEvent& event); //event handler for About memu item
    void myExit(wxCommandEvent& event);

private:
    wxDECLARE_EVENT_TABLE(); // The event table that maps events to their handlers.
    ButtonPanel *button_panel;
    void init(); //initialize the content of the app frame
    void init_menu_bar(); //initialize the app frame's menu and status bar
    void init_sizer(); //initialize the app frame's sizer
};

// IDs for the menu commands.
enum
{
    RPS_Exit  = wxID_EXIT,
    RPS_About = wxID_ABOUT
	RPS_NewGame = wxID_NEWGAME
};

#endif /* DEMOFRAME_H_ */
