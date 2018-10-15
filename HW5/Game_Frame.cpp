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

    wxSize size = GetSize();
    size.SetWidth (size.GetWidth() + SIDE_MARGINS);
    SetSize(size);
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
    myExit->Append(RPS_Quit,  "E&xit\tAlt-X", "Quit program");

    wxMenu *myAbout = new wxMenu;
    myAbout->Append(RPS_About, "&About\tF1",   "Show about dialog");

    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(myExit, "&File");
    menuBar->Append(helpMenu, "&Help");
    SetMenuBar(menuBar);
}

void Game_Frame::init_sizer()
{
    wxSizer *frame_sizer = new wxBoxSizer(wxVERTICAL);

    frame_sizer->AddSpacer(20);
    frame_sizer->Add(button_panel, 0, wxALIGN_CENTER, 0);

    SetSizerAndFit(frame_sizer);
}

void Game_Frame::on_about(wxCommandEvent& WXUNUSED(event))
{
    wxMessageBox(wxString::Format(
                    "This is a button demo\n"
                    "built with %s\n"
                    "and running under %s.",
                    wxVERSION_STRING,
                    wxGetOsDescription()
                ),
                "About the button demo",
                wxOK | wxICON_INFORMATION,
                this);
}

void Game_Frame::on_quit(wxCommandEvent& WXUNUSED(event))
{
    Close(true);  // true is to force the frame to close
}
