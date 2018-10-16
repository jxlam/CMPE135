#include <iostream>
#include <wx/wx.h>
using namespace std;

//class JanKenPo : public wxApp {
//	virtual bool Initialize();		//initialize the program
//};
//
//class Game_Frame : public wxFrame {	//event handlers
//public:
//	Game_Frame(const wxString &title, const wxPoint &point, const wxSize &size);
//private:
//	void About(wxCommand &event);
//};

wxBEGIN_EVENT_TABLE(Game_Frame, wxFrame)	//event table
	EVT_MENU(wxID_ABOUT, Game_Frame:About)		//about menu icon
	EVT_MENU(wxID_EXIT, Game_Frame:Exit)		//exit menu icon
	EVT_MENU(wxID_NEWGAME, Game_Frame:NewGame)	//newgame menu icon
wxEND_EVENT_TABLE()

const int SIDE_MARGINS = 40;

//wxImplement_APP(MyRPS);		//starts the program

//bool MyRPS::Initialize() { //title bar
//	Game_Frame *frame = new Game_Frame("Jan Ken Po", wxPoint(50,50), wxSize(450,340));
//	frame->Show(true);
//	return true;
//}

//Game_Frame::Game_Frame(const wxString &title, const wxPoint &point,const wxSize &size)
//	:wxFrame(NULL, wxID_ANY, title, point, size) {	//create menu items
Game_Frame::GameFrame(const wxString &title) : wxFrame(NULL, wxID_ANY, title),
		button_panel(new ButtonPanel(this)){
	initialize();		//initialize the program

	wxSize sz = GetSize();
	sz.SetWidth(sz.GetWidth()+ SIDE_MARGINS);
	SetSize(sz);
}

Game_Frame::~GameFrame() {		//delete button panel
	delete button_panel;
}
void Game_Frame::initialize() {	//initialize menubar and size
	init_menu_bar();
	init_sizer();

	wxSize sz = GetBestSize();
	SetMinClientSize(sz);
}
void Game_Frame::init_menu_bar() {
	wxMenu *myAbout = new wxMenu;		//create About menu icon
	myAbout->Append(JKP_About, "&About/tF1", "Welcome to Jan Ken Po");

	wxMenu *myExit = new wxMenu;		//create Exit menu icon
	myExit->Append(RPS_Quit, "E&xit\tAlt-X", "Quit Game");

	wxMenu *myNewGame = new wxMenu;		//create NewGame menu icon
	myNewGame->Append(RPS_NewGame, "NewGame\tF2", "Starting New Game");

	wxMenuBar *menuBar = new wxMenuBar;	//put the items onto the menu bar
	menuBar->Append(myAbout, "&About");
	menuBar->Append(myExit, "&Help");
	menuBar->Append(myNewGame, "&NewGame");

	SetMenuBar(menuBar);	//put the menu bar on the program
	SetStatusText("Welcome to Jan Ken Po!");	//status message
}

void Game_Frame::init_sizer() {	//add buttons and align them
	wxSizer *frame_sz = new wxBoxSizer(wxVERTICAL);

	frame_sz->AddSpacer(20);
	frame_sz->Add(button_panel, 0, wxALIGN_CENTER, 0);

	SetSizerAndFit(frame_sz);
}
void Game_Frame::About(wxCommandEvent &WXUNUSED(event)) {	//About message
	wxMessageBox(wxString::Format("This is Jan Ken Po \n. Enjoy the game!\n"),
		"About Jan Ken Po", wxOK | wxICON_INFORMATION, this);
	}

void Game_Frame::myExit(wxCommandEvent& WXUNUSED(event)) {	//exit the game if true
	Close(true);
}

