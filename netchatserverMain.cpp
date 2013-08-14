﻿/***************************************************************
 * Name:      netchatserverMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    devilstan (devilstan@gmail.com)
 * Created:   2013-08-13
 * Copyright: devilstan ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "netchatserverMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(netchatserverFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)


//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(netchatserverFrame)
const long netchatserverFrame::ID_BUTTON2 = wxNewId();
const long netchatserverFrame::ID_TEXTCTRL1 = wxNewId();
const long netchatserverFrame::ID_TEXTCTRL2 = wxNewId();
const long netchatserverFrame::ID_BUTTON1 = wxNewId();
const long netchatserverFrame::ID_PANEL1 = wxNewId();
const long netchatserverFrame::ID_MENUITEM1 = wxNewId();
const long netchatserverFrame::idMenuAbout = wxNewId();
const long netchatserverFrame::ID_STATUSBAR1 = wxNewId();
//*)

const long netchatserverFrame::ID_SOCKET = wxNewId();
const long netchatserverFrame::ID_SERVER = wxNewId();

BEGIN_EVENT_TABLE(netchatserverFrame,wxFrame)
    //(*EventTable(netchatserverFrame)
    //*)
    EVT_SOCKET(ID_SERVER, netchatserverFrame::OnServerEvent)
    EVT_SOCKET(ID_SOCKET, netchatserverFrame::OnSocketEvent)
END_EVENT_TABLE()

netchatserverFrame::netchatserverFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(netchatserverFrame)
    wxBoxSizer* BoxSizer4;
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxStaticBoxSizer* StaticBoxSizer1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("ICQQ SERVER"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Label"));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("SERVER START"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticBoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(StaticBoxSizer1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(354,241), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer3->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(269,45), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    BoxSizer4->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("傳送你妹\n我還沒寫好"), wxDefaultPosition, wxSize(106,40), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer4->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer4, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&netchatserverFrame::OnButton2Click);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&netchatserverFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&netchatserverFrame::OnAbout);
    //*)
}

netchatserverFrame::~netchatserverFrame()
{
    //(*Destroy(netchatserverFrame)
    //*)
    delete m_server;
}

void netchatserverFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void netchatserverFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}


void netchatserverFrame::OnButton2Click(wxCommandEvent& event)
{
	wxIPV4address addr;
	addr.Service(3000);

	m_server = new wxSocketServer(addr);

	if ( !m_server->Ok() ) {
		return;
	}

	m_server->SetEventHandler(*this, ID_SERVER);
	m_server->SetNotify(wxSOCKET_CONNECTION_FLAG);
	m_server->Notify(true);
}

void netchatserverFrame::OnServerEvent(wxSocketEvent& event)
{
	wxSocketBase* sock = m_server->Accept(false);
//	.Add( server->Accept(false) );
	switch ( event.GetSocketEvent() )
	{
		case wxSOCKET_CONNECTION:
		{
			(*TextCtrl1) << _("new client connected.") << _("\n");
			break;
		}
		default: break;
	}
	sock->SetEventHandler(*this, ID_SOCKET);
	sock->SetNotify(wxSOCKET_INPUT_FLAG|wxSOCKET_LOST_FLAG);
	sock->Notify(true);
	m_SockArray.Add( sock );
//	m_ID.Add()
}


void netchatserverFrame::OnSocketEvent(wxSocketEvent& event)
{
	//get current incoming sock;
	wxSocketBase* sock = event.GetSocket();

	switch ( event.GetSocketEvent() )
	{
		case wxSOCKET_INPUT:
			(*TextCtrl1) << _("client input.") << _("\n");
			break;
		case wxSOCKET_LOST:
			(*TextCtrl1) << _("client disconnected.") << _("\n");
			break;
		default:
			break;
	}

	switch ( event.GetSocketEvent() )
	{
		case wxSOCKET_INPUT:
		{
			char buf[4096] = {0};

			sock->Read(buf, sizeof(buf));
            wxString str_read = wxString::FromUTF8(buf);  //收信陣列數值→字串
            *TextCtrl1 << str_read << _("\n");
            m_SockArray.Item(0)->Write( str_read.mb_str(wxConvUTF8), strlen(str_read.mb_str(wxConvUTF8)) );
            RequestUserAttention();
			//sock->Write(buf, sizeof(buf));
			//sock->Destroy();
			break;
		}
		case wxSOCKET_OUTPUT:
			break;
		case wxSOCKET_CONNECTION:
			break;
		case wxSOCKET_LOST:
		{
			sock->Destroy();
			break;
		}
		default:;
	}
}

