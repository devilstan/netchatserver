/***************************************************************
 * Name:      netchatserverApp.cpp
 * Purpose:   Code for Application Class
 * Author:    devilstan (devilstan@gmail.com)
 * Created:   2013-08-13
 * Copyright: devilstan ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "netchatserverApp.h"

//(*AppHeaders
#include "netchatserverMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(netchatserverApp);

bool netchatserverApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    netchatserverFrame* Frame = new netchatserverFrame(0);
    Frame->Show();
    SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
