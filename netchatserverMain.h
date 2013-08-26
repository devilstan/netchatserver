/***************************************************************
 * Name:      netchatserverMain.h
 * Purpose:   Defines Application Frame
 * Author:    devilstan (devilstan@gmail.com)
 * Created:   2013-08-13
 * Copyright: devilstan ()
 * License:
 **************************************************************/

#ifndef NETCHATSERVERMAIN_H
#define NETCHATSERVERMAIN_H

//(*Headers(netchatserverFrame)
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

#include <wx/socket.h>
#include <wx/dynarray.h>

//class mywxSocketBase: public wxSocketBase
//{
//	public:
//		mywxSocketBase();
//		~mywxSocketBase();
//		wxString m_ID;
//};



WX_DEFINE_ARRAY_PTR(wxSocketBase *, ArrayOfSock);

class netchatserverFrame: public wxFrame
{
    public:

        netchatserverFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~netchatserverFrame();

    private:

        //(*Handlers(netchatserverFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        //*)

        void OnServerEvent(wxSocketEvent& event);
        void OnSocketEvent(wxSocketEvent& event);


        //(*Identifiers(netchatserverFrame)
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON1;
        static const long ID_PANEL1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)
        static const long ID_SOCKET;
        static const long ID_SERVER;


        //(*Declarations(netchatserverFrame)
        wxButton* Button1;
        wxPanel* Panel1;
        wxButton* Button2;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl1;
        //*)

        wxSocketServer* m_server;
        ArrayOfSock m_SockArray;
        wxArrayString m_ID;

        DECLARE_EVENT_TABLE()
};

#endif // NETCHATSERVERMAIN_H
