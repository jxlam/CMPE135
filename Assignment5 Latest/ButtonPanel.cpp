#include "ButtonPanel.h"


void ButtonPanel::init()
{

    wxSizer *sizer = new wxBoxSizer(wxVERTICAL);
    
    wxPanel *button_panel = new wxPanel(this, wxID_ANY);
    
    wxSizer *button_sizer = new wxBoxSizer(wxHORIZONTAL);
    
    wxStaticText *button_round_text = new wxStaticText(this, - 1, "ROUND:", wxPoint(120, 0), wxDefaultSize, wxALIGN_CENTER);
    
    sizer->AddSpacer(20);
   // wxStaticText *button_human_text = new wxStaticText(button_panel, wxID_ANY, "HUMAN");
    wxStaticText *button_human_text = new wxStaticText(this, - 1, "HUMAN", wxPoint(1, 61), wxDefaultSize, wxALIGN_CENTER);
    
    wxStaticText *choose_text = new wxStaticText(button_panel, wxID_ANY,
                                                 "Choose:");
    wxButton *rock_button     = new wxButton(button_panel, wxID_ANY,
                                             choice_to_wxString(ROCK));
    wxButton *paper_button    = new wxButton(button_panel, wxID_ANY,
                                             choice_to_wxString(PAPER));
    wxButton *scissors_button = new wxButton(button_panel, wxID_ANY,
                                             choice_to_wxString(SCISSORS));

    rock_button->Bind    (wxEVT_BUTTON, &ButtonPanel::on_rock, this);
    paper_button->Bind   (wxEVT_BUTTON, &ButtonPanel::on_paper, this);
    scissors_button->Bind(wxEVT_BUTTON, &ButtonPanel::on_scissors, this);

    button_sizer->Add(choose_text, 0, 0, 0);
    button_sizer->AddSpacer(5);
    button_sizer->Add(rock_button, 0, 0, 0);
    button_sizer->AddSpacer(5);
    button_sizer->Add(paper_button, 0, 0, 0);
    button_sizer->AddSpacer(5);
    button_sizer->Add(scissors_button, 0, 0, 0);
    button_panel->SetSizer(button_sizer);

    wxPanel *chosen_panel = new wxPanel(this, wxID_ANY);
    wxSizer *chosen_sizer = new wxGridSizer(2, 0, 5);

    wxStaticText *chosen_text = new wxStaticText(chosen_panel, wxID_ANY,
                                                 "Chosen object:");
    button_chosen_text = new wxStaticText(chosen_panel, wxID_ANY, "");
    button_chosen_text->SetFont(button_chosen_text->GetFont().Larger());
    chosen_sizer->Add(chosen_text, 0, wxALIGN_RIGHT, 0);
    chosen_sizer->Add(button_chosen_text, 0, 0, 0);
    chosen_panel->SetSizer(chosen_sizer);

    sizer->Add(button_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(20);
    sizer->Add(chosen_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(20);

    SetSizer(sizer);
    
    wxPanel *computer_panel = new wxPanel(this, wxID_ANY);
    wxSizer *computer_sizer = new wxGridSizer(2, 0, 5);
    
    wxStaticText *button_computer_text = new wxStaticText(this, - 1, "COMPUTER", wxPoint(105, 80), wxDefaultSize, wxALIGN_CENTER);
   
    sizer->AddSpacer(30);
    
    wxPanel *my_panel = new wxPanel(this, wxID_ANY);
    wxSizer *my_sizer = new wxGridSizer(2, 0, 5);
    
    wxStaticText *button_computer_chose_text = new wxStaticText(this, -1, "Computer chooses:", wxPoint(1, 100), wxDefaultSize, wxALIGN_CENTER);
    
    sizer ->AddSpacer(30);
    
    wxStaticText *button_winner_text = new wxStaticText(this, - 1, "Winner: ", wxPoint(100, 130), wxDefaultSize, wxALIGN_CENTER);
    
    sizer->AddSpacer(15);
    
    wxStaticText *button_HW_text = new wxStaticText(this, - 1, "Human Wins: ", wxPoint(120, 145), wxDefaultSize, wxALIGN_CENTER);
    
    sizer->AddSpacer(15);
    
     wxStaticText *button_CW_text = new wxStaticText(this, - 1, "Computer Wins: ", wxPoint(120, 160), wxDefaultSize, wxALIGN_CENTER);
    
    sizer->AddSpacer(15);
    
     wxStaticText *button_TW_text = new wxStaticText(this, - 1, "Ties: ", wxPoint(120, 175), wxDefaultSize, wxALIGN_CENTER);
    
    sizer->AddSpacer(20);
    
    
    
    
    
    
   // sizer->AddSpacer(250);
    
  //  wxStaticText *computer_text = new wxStaticText(chosen_panel, wxID_ANY, "COMPUTER");
//    button_computer_text = new wxStaticText(computer_panel, wxID_ANY, "");
//    button_computer_text->SetFont(button_computer_text->GetFont().Larger());
//    computer_sizer->Add(button_computer_text, 0, wxALIGN_RIGHT, 0);
//    computer_sizer->Add(button_computer_text, 0, 0, 0);
//    computer_panel->SetSizer(computer_sizer);
    
    
}

void ButtonPanel::on_rock(wxCommandEvent& event)
{
    update_button_choice_text(ROCK);
}

void ButtonPanel::on_paper(wxCommandEvent& event)
{
    update_button_choice_text(PAPER);
}

void ButtonPanel::on_scissors(wxCommandEvent& event)
{
    update_button_choice_text(SCISSORS);
}

void ButtonPanel::update_button_choice_text(const Choice choice)
{
    button_chosen_text->SetLabelText(choice_to_wxString(choice));
}

void ButtonPanel::update_round_choice_text(const Round round)
{
    button_round_text->SetLabelText(round_to_wxString(round));
}

