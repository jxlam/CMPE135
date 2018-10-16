#include "ButtonPanel.h"

void ButtonPanel::initialize() {

	wxSizer *sz = new wxBoxSizer(wxVERTICAL);
	wxSizer *round_sz = new wxBoxSizer(wxVERTICAL);
	wzSizer *comp_sz = new wxBoxSizer(wxVERTICAL);
	wxSizer *win_sz = new wxBoxSizer(wxVERTICAL);
	wxSizer *stat_sz = new wxBoxSizer(wxVERTICAL);
	wxSizer *human_sz = new wxBoxSizer(wxVERTICAL);
	wxSizer *computer_sz = new wxBoxSizer(wxVERTICAL);
	wxSizer *ties_sz = new wxBoxSizer(wxVERTICAL);
	wxSizer *round_sz = new wxBoxSizer(wxVERTICAL);

	wxPanel *bp = new wxPanel(this, wxID_ANY);
	wxPanel *round_bp = new wxPanel(this, wxID_ANY);
	wxPanel *comp_bp = new wxPanel(this, wxID_ANY);
	wxPanel *win_bp = new wxPanel(this, wxID_ANY);
	wxPanel *stat_bp = new wxPanel(this, wxID_ANY);
	wxPanel *human_bp = new wxPanel(this, wxID_ANY);
	wxPanel *computer_sz = new wxPanel(this, wxID_ANY);
	wxPanel *tie_sz = new wxPanel(this, wxID_ANY);
	wxPanel *round_sz = new wxPanel(this, wxID_ANY);

	wxSizer *bs = new wxBoxSizer(wxHOIRZONTAL);
	wxStaticText *choose = new wxStaticText(bp, wxID_any, "Choose:");

	wxButton *rock		= new wxButton(bp, wxID_ANY,choice_to_wxString(ROCK));
	wxButton *paper		= new wxButton(bp, wxID_ANY, choice_to_wxString(PAPER));
	wxButton *scissors	= new wxButton(bp, wxID_ANY, choice_to_wxString(SCISSORS));
	wxButton *c_rock		= new wxButton(comp_bp, wxID_ANY,choicerandom_to_wxString(ROCK));
	wxButton *c_paper		= new wxButton(comp_bp, wxID_ANY, choicerandom_to_wxString(PAPER));
	wxButton *c_scissors	= new wxButton(comp_bp, wxID_ANY, choicerandom_to_wxString(SCISSORS));
	wxButton *computer	= new wxButton(win_bp, wxID_ANY, choicerandom_to_wxString(COMPUTER));
	wxButton *human		= new wxButton(win_bp, wxID_ANY, choice_to_wxString(HUMAN));

	rock->Bind	(wxEVT_BUTTON, &ButtonPanel::rock, this);		//Rock
	paper->Bind	(wxEVT_BUTTON, &ButtonPanel::paper, this);		//Paper
	scissors->Bind	(wxEVT_BUTTON, &ButtonPanel::scissors, this);	//Scissors

    bs->Add(choose, 0, 0, 0);
    bs->AddSpacer(5);
    bs->Add(rock, 0, 0, 0);
    bs->AddSpacer(5);
    bs->Add(paper, 0, 0, 0);
    bs->AddSpacer(5);
    bs->Add(scissors, 0, 0, 0);
    bp->SetSizer(bs);

    wxPanel *round_panel = new wxPanel(this, wxID_ANY);
        wxSizer *round_sizer = new wxGridSizer(2, 0, 5);

        wxStaticText *round_text = new wxStaticText(round_panel, wxID_ANY, "Rounds:"); //Rounds:

        round_chosen_text = new wxStaticText(round_panel, wxID_ANY, "");
        round_chosen_text-> SetFont(round_chosen_text->GetFont().Larger());
        round_sizer->Add(round_text, 0, wxALIGN_RIGHT, 0);
        round_sizer->Add(round_chosen_text,0, 0, 0);
        round_panel->SetRoundSizer(round_sizer);

        sz->Add(bp, 0, wxALIGN_CENTER, 0);
        sz->AddSpacer(20);
        sz->Add(my_panel, 0, wxALIGN_CENTER, 0);
        sz->AddSpacer(20);

        SetRoundSizer(round_sz);


    wxPanel *my_panel = new wxPanel(this, wxID_ANY);
    wxSizer *my_sizer = new wxGridSizer(2, 0, 5);

    wxStaticText *my_text = new wxStaticText(my_panel, wxID_ANY, "Human chooses:"); //Human Chooses

    button_chosen_text = new wxStaticText(my_panel, wxID_ANY, "");
    button_chosen_text-> SetFont(button_chosen_text->GetFont().Larger());
    my_sizer->Add(my_text, 0, wxALIGN_RIGHT, 0);
    my_sizer->Add(button_chosen_text,0, 0, 0);
    my_panel->SetSizer(my_sizer);

    sz->Add(bp, 0, wxALIGN_CENTER, 0);
    sz->AddSpacer(20);
    sz->Add(my_panel, 0, wxALIGN_CENTER, 0);
    sz->AddSpacer(20);

    SetSizer(sz);

    wxPanel *comp_panel = new wxPanel(this, wxID_ANY);	//putting in computer choosing
    wxSizer	*comp_sizer = new wxGridSizer(2, 0, 5);

    wxStaticText *comp_text = new wxStaticText(comp_panel, wxID_ANY, "Therefore computer chooses:"); //Therefore computer chooses
    comp_chosen_text = new wxStaticText(comp_panel, wxID_ANY, "");
    comp_sizer->Add(comp_text, 0, wxALIGN_RIGHT, 0);
    comp_sizer->Add(comp_chosen_text, 0, 0, 0);
    comp_panel->SetCompSizer(comp_sizer);

    comp_sz->Add(comp_bp, 0, wxALIGN_CENTER, 0);
    comp_sz->AddSpacer(20);
    comp_sz->Add(comp_panel, 0, wxALIGN_CENTER, 0);
    comp_sz->AddSpacer(20);
    SetCompSizer(comp_sz);

    wxPanel *win_panel = new wxPanel(this, wxID_ANY); //putting in "The winner:"
    wxSizer *win_sizer = new wxGridSizer(2, 0, 5);

    wxStaticText *win_text = new wxStaticText(win_panel, wxID_ANY, "The winner:");
    win_chosen_text = new wxStaticText(win_panel, wxID_ANY, "");
    win_sizer->Add(win_text, 0, wxALIGN_RIGHT, 0);
    win_sizer->Add(win_chosen_text, 0, 0, 0);
    win_panel->SetWinSizer(win_sizer);
    win_sz->Add(win_bp, 0, wxALIGN_CENTER, 0);
    win_sz->AddSpacer(20);
    win_sz->Add(win_panel, 0, wxALIGN_CENTER, 0);
    win_sz->AddSpacer(20);
    SetWinSizer(win_sz);

    wxPanel *stat_panel = new wxPanel(this, wxID_ANY);	//putting in "Statistics"
    wxSizer *stat_sizer = new wxGridSizer(2, 0 , 5);

    wsStaticText *stat_text = new wxStaticText(win_panel, wxID_ANY, "Statistics");
    stat_sizer->Add(stat_text, 0, wxALIGN_RIGHT, 0);
    stat_panel->SetStatSizer(stat_sizer);
    stat_sz->Add(stat_bp, 0, wxALIGN_CENTER, 0);
    stat_sz->AddSpacer(20);
    stat_sz->Add(stat_panel, 0, wxALIGN_CENTER, 0)
    stat_sz->AddSpacer(20);
    SetStatSizer(stat_sz);

    wxPanel *human_panel = new wxPanel(this, wxID_ANY); //putting in "Human wins:"
    wxSizer *human_sizer = new wxGridSizer(2, 0, 5);
       wxStaticText *human_text = new wxStaticText(human_panel, wxID_ANY, "Human wins:");
       human_w_chosen = new wxStaticText(human_panel, wxID_ANY, "");
       human_sizer->Add(human_text, 0, wxALIGN_RIGHT, 0);
       human_sizer->Add(human_w_chosen, 0, 0, 0);
       human_panel->SetHumanSizer(human_sizer);
       human_sz->Add(human_bp, 0, wxALIGN_CENTER, 0);
       human_sz->AddSpacer(20);
       human_sz->Add(human_panel, 0, wxALIGN_CENTER, 0);
       human_sz->AddSpacer(20);
       SetHumanSizer(human_sz);

    wxPanel *computer_panel = new wxPanel(this, wxID_ANY); //putting in "Computer wins:"
    wxSizer *computer_sizer = new wxGridSizer(2, 0, 5);
         wxStaticText *computer_text = new wxStaticText(computer_panel, wxID_ANY, "Computer wins:");
         computer_w_chosen = new wxStaticText(human_panel, wxID_ANY, "");
         computer_sizer->Add(computer_text, 0, wxALIGN_RIGHT, 0);
         computer_sizer->Add(computer_w_chosen, 0, 0, 0);
         computer_panel->SetComputerSizer(computer_sizer);
         computer_sz->Add(computer_bp, 0, wxALIGN_CENTER, 0);
         computer_sz->AddSpacer(20);
         computer_sz->Add(computer_panel, 0, wxALIGN_CENTER, 0);
         computer_sz->AddSpacer(20);
         SetComputerSizer(computer_sz);

     wxPanel *ties_panel = new wxPanel(this, wxID_ANY); //putting in "Ties:"
     wxSizer *ties_sizer = new wxGridSizer(2, 0, 5);
          wxStaticText *ties_text = new wxStaticText(ties_panel, wxID_ANY, "Ties:");
          ties_chosen = new wxStaticText(ties_panel, wxID_ANY, "");
           ties_sizer->Add(ties_text, 0, wxALIGN_RIGHT, 0);
           ties_sizer->Add(ties_chosen, 0, 0, 0);
           ties_panel->SetTiesSizer(ties_sizer);
           ties_sz->Add(ties_bp, 0, wxALIGN_CENTER, 0);
           ties_sz->AddSpacer(20);
           ties_sz->Add(ties_panel, 0, wxALIGN_CENTER, 0);
           ties_sz->AddSpacer(20);
           SetTiesSizer(ties_sz);

	}


void ButtonPanel::rock(wxCommandEvent& event) {		//Human chooses:
	update_button_choice_text(ROCK);
}
void ButtonPanel::paper(wxCommandEvent& event) {
	update_button_choice_text(PAPER);
}
void ButtonPanel::scissors(wxCommandEvent& event) {
	update_button_choice_text(SCISSORS);
}
void ButtonPanel::update_button_choice_text(const Choice choice) {
	button_chosen_text->SetLabelText(choice_to_wxString(choice));
}
void ButtonPanel::c_rock(wxCommandEvent& event) {		//Therefore computer chooses:
	update_comp_choice_text(ROCK);
}
void ButtonPanel::c_paper(wxCommandEvent& event) {
	update_comp_choice_text(PAPER);
}
void ButtonPanel::c_scissors(wxCommandEvent& event) {
	update_comp_choice_text(SCISSORS);
}
void ButtonPanel::update_comp_choice_text(const Choice choice) {
	comp_chosen_text->SetLabelText(choicerandom_to_wxString(choice));
}
void ButtonPanel::computer(wxCommandEvent &event) {		//Winner event
	update_win_choice_text(COMPUTER);
}
void ButtonPanel::human(wxCommandEvent &event) {
	update_win_choice_text(HUMAN);
}
void ButtonPanel::update_win_choice_text(const Choice choice) {
	win_chosen_text->SetLabelText(choice_to_wxString(choice));
}
void ButtonPanel::update_human_w_chosen(const Choice choice) {
	human_w_chosen->SetLabelText(choice_to_wxString(choice));
}
void ButtonPanel::update_computer_w_chosen(const Choice choice) {
	computer_w_chosen->SetLabelText(choice_to_wxString(choice));
}
void ButtonPanel::update_ties_chosen(const Choice choice) {
	ties_chosen->SetLabelText(choice_to_wxString(choice));
}
void ButtonPanel::update_round_w_chosen(const Choice choice) {
	round_chosen_text->SetLabelText(choice_to_wxString(choice));
}
