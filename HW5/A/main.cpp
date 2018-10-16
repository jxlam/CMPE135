#include <iostream>
#include <wx/wx.h>
using namespace std;

class JanKenPo : public wxApp {
	virtual bool Initialize();		//initialize the program
};

class Game_Frame : public wxFrame {	//event handlers
public:
	Game_Frame(const wxString &title, const wxPoint &point, const wxSize &size);
private:
	void About(wxComand &event);
};

wxBEGIN_EVENT_TABLE(Game_Frame, wxFrame)	//event table
	EVT_MENU(wxID_ABOUT, Game_Frame:About)		//about menu icon
	EVT_MENU(wxID_EXIT, Game_Frame:Exit)		//exit menu icon
	EVT_MENU(wxID_NEWGAME, Game_Frame:NewGame)	//newgame menu icon
wxEND_EVENT_TABLE()

wxImplement_APP(MyRPS);

bool MyRPS::Initialize() { //title bar
	Game_Frame *frame = new Game_Frame("Jan Ken Po", wxPoint(50,50), wxSize(450,340));
	frame->Show(true);
	return true;
}

Game_Frame::Game_Frame(const wxString &title, const wxPoint &point,const wxSize &size)
	:wxFrame(NULL, wxID_ANY, title, point, size) {	//create menu items
	wxMenu *myAbout = new wxMenu;		//create About menu icon
	myAbout->Append(wxID_ABOUT);

	wxMenu *myExit = new wxMenu;		//create Exit menu icon
	myExit->Append(wxID_EXIT);

	wxMenu *myNewGame = new wxMenu;		//create NewGame menu icon
	myNewGame->Append(wxID_NEWGAME);

	wxMenuBar *menuBar = new wxMenuBar;	//put the items onto the menu bar
	menuBar->Append(myAbout, "&About");
	menuBar->Append(myExit, "&Help");
}


