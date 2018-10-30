#ifndef BUTTONPANEL_H_
#define BUTTONPANEL_H_

#include "ButtonDemo.h"
#include "Choice.h"

/**
 * The button panel of the application frame.
 */
class ButtonPanel : public wxPanel
{
public:
    /**
     * Constructor.
     * @param parent the parent frame.
     */
    ButtonPanel(wxFrame *parent) : wxPanel(parent, wxID_ANY)
    {
        init();
    }

    /**
     * Event handler for the rock button.
     * @param event the button click event.
     */
    void on_rock(wxCommandEvent& event);

    /**
     * Event handler for the paper button.
     * @param event the button click event.
     */
    void on_paper(wxCommandEvent& event);

    /**
     * Event handler for the scissors button.
     * @param event the button click event.
     */
    void on_scissors(wxCommandEvent& event);

private:
    wxStaticText *button_chosen_text;
    wxStaticText *button_computer_text;
    wxStaticText *button_human_text;
    wxStaticText *button_computer_chose_text;
    wxStaticText *button_winner_text;
    wxStaticText *button_round_text;
    wxStaticText *button_HW_text;
    wxStaticText *button_CW_text;
    wxStaticText *button_TW_text;

    /**
     * Initialize the panel contents.
     */
    void init();

    /**
     * Update the displayed button choice object.
     * @param choice the chosen object.
     */
    void update_button_choice_text(const Choice choice);
    void update_round_choice_text(const Round round);
};

#endif /* BUTTONPANEL_H_ */
