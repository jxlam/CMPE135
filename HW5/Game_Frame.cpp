#include "Game_Frame.h"

// The event table.
wxBEGIN_EVENT_TABLE(Game_Frame, wxFrame)
	EVT_MENU(wxID_EXIT, Game_Frame:Exit)		//exit menu icon
	EVT_MENU(wxID_ABOUT, Game_Frame:About)		//about menu icon
	EVT_MENU(wxID_NEWGAME, Game_Frame:NewGame)	//newgame menu icon
wxEND_EVENT_TABLE()

const int SIDE_MARGINS = 40;

Game_Frame::Game_Frame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title),
      button_panel(new ButtonPanel(this))
{
    init();

    wxSize sz = GetSize();
    sz.SetWidth (sz.GetWidth() + SIDE_MARGINS);
    SetSize(sz);
}

Game_Frame::~Game_Frame()
{
    delete button_panel;
}

void Game_Frame::init()
{
    init_menu_bar();
    init_sizer();

    wxSize size = GetBestSize();
    SetMinClientSize(size);
}

void Game_Frame::init_menu_bar()
{
    wxMenu *myExit = new wxMenu;
    myExit->Append(RPS_Exit,  "E&xit\tAlt-X", "Quit program");

    wxMenu *myAbout = new wxMenu;
    myAbout->Append(RPS_About, "&About/tF1", "Welcome to Jan Ken Po");

    wxMenu *myNewGame = new wxMenu;		//create NewGame menu icon
    	myNewGame->Append(RPS_NewGame, "NewGame\tF2", "Starting New Game");
    
    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(myExit, "&File");
    menuBar->Append(myAbout, "&About");
    menuBar->Append(myNewGame, "&File");
    
    SetMenuBar(menuBar);
    SetStatusText("Welcome to Jan Ken Po!");	//status message
}

void Game_Frame::init_sizer()
{
	wxSizer *frame_sz = new wxBoxSizer(wxVERTICAL);

	frame_sz->AddSpacer(20);
	frame_sz->Add(button_panel, 0, wxALIGN_CENTER, 0);

	SetSizerAndFit(frame_sz);
}

void Game_Frame::About(wxCommandEvent& WXUNUSED(event))
{
	wxMessageBox(wxString::Format("This is Jan Ken Po \n. Enjoy the game!\n"),
			"About Jan Ken Po", wxOK | wxICON_INFORMATION, this);
	}
}

void Game_Frame::myExit(wxCommandEvent& WXUNUSED(event))
{
    Close(true);  // exit the game if true
}
