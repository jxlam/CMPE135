#include "ButtonPanel.h"

void ButtonPanel::initialize() {
	wxSizer *sz = = new wxBoxSizer(wxVERTICAL);
	wxPanel *bp = new wxPanel(this, wxID_ANY);
	wxSizer *bs = new wxBoxSizer(wxHOIRZONTAL);
	wxStaticText *choose = new wxStaticText(bp, wxID_any, "Choose:");
	wxButton *rock		= new wxButton(bp, wxID_ANY,choice_to_wxString(ROCK));
	wxButton *paper		= new wxButton(bp, wxID_ANY, choice_to_wxString(PAPER));
	wxButton *scissors	= new wxButton(bp, wxID_ANY, choice_to_wxString(SCISSORS));

	rock->Bind	(wxEVT_BUTTON, &ButtonPanel::rock, this);
	paper->Bind	(wxEVT_BUTTON, &ButtonPanel::paper, this);
	scissors->Bind	(wxEVT_BUTTON, &ButtonPanel::scissors, this);

    bs->Add(choose, 0, 0, 0);
    bs->AddSpacer(5);
    bs->Add(rock, 0, 0, 0);
    bs->AddSpacer(5);
    bs->Add(paper, 0, 0, 0);
    bs->AddSpacer(5);
    bs->Add(scissors, 0, 0, 0);
    bp->SetSizer(bs);

    wxPanel *my_panel = new wxPanel(this, wxID_ANY);
    wxSizer *my_sizer = new wxGridSizer(2, 0, 5);

    wxStaticText *my_text = new wxStaticText(my_panel, wxID_ANY, "Chosen object:");

    button_chosen_text = new wxStaticText(my_panel, wxID_ANY, "");
    button_chosen_text-> SetFont(button_chosen_text->GetFont().Larger());
    my_sizer->Add(my_text, 0, wxALIGN_RIGHT, 0);
    my_sizer->Add(button_chosen_text,0, 0, 0);
    my_panel->SetSizer(my_sizer);

    sz->Add(bp, 0, wxALIGN_CENTER, 0);
    sz->AddSpacer(20);
    sz->Add(my_panel, 0, wxALIGN_CENTER, 0);
    sz->AddSpacer(20);

    Set_Sizer(sz);
}

void ButtonPanel::rock(wxCommandEvent& event) {
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
