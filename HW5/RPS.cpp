#include "RPS.h"

#include "Game_Frame.h"

// Create a new application object.
wxIMPLEMENT_APP(MyRPS);

bool RPS::OnInit()
{
    if (!wxApp::OnInit()) return false;

    Game_Frame *frame = new Game_Frame("RPS");
    frame->Show(true);

    return true;
}
