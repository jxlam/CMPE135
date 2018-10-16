#ifndef RPS_H_
#define RPS_H_

#include "wx/wx.h"

/**
 * The main application class.
 */
class RPS : public wxApp
{
public:
    /**
     * Initialization function that is called when the application opens.
     * @returns true if the app opened successfully, else returns false.
     */
    virtual bool OnInit() wxOVERRIDE;
};

#endif /* BUTTONDEMO_H_ */
