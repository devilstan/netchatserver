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
    //EVT_SOCKET(ID_SERVER, netchatserverFrame::OnServerEvent)
    //EVT_SOCKET(ID_SOCKET, netchatserverFrame::OnSocketEvent)
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
    int __wxStatusBarWidths_1[2] = { -1, -10 };
    int __wxStatusBarStyles_1[2] = { wxSB_NORMAL, wxSB_NORMAL };
    StatusBar1->SetFieldsCount(2,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(2,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&netchatserverFrame::OnButton2Click);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&netchatserverFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&netchatserverFrame::OnAbout);
    //*)
    Connect( ID_SERVER, wxEVT_SOCKET, (wxObjectEventFunction)&netchatserverFrame::OnServerEvent );
    Connect( ID_SOCKET, wxEVT_SOCKET, (wxObjectEventFunction)&netchatserverFrame::OnSocketEvent );

    m_numClients = 0;
    UpdateStatusBar();
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
	Button2->Enable(false);
}

void netchatserverFrame::OnServerEvent(wxSocketEvent& event)
{
	wxSocketBase* sock = m_server->Accept(false);
	switch ( event.GetSocketEvent() )
	{
		case wxSOCKET_CONNECTION:
		{
			(*TextCtrl1) << _("new connection") << _("\n");
			break;
		}
		default: break;
	}
	m_SockArray.Add(sock);
	m_UserArray.Add(wxString(_("dummy")));
//	wxString dd;
//	dd.Printf( _("%d"), event.GetId() );
//	wxMessageBox(dd);
	sock->SetEventHandler(*this, ID_SOCKET);
	sock->SetNotify(wxSOCKET_INPUT_FLAG|wxSOCKET_LOST_FLAG);
	sock->Notify(true);

	MsgPackage msgpkg_tmp;
	if ( m_numClients )
		msgpkg_tmp.set_m_nindex(m_numClients);		//pass the index of sock & user array to client.
	msgpkg_tmp.set_m_nsock_id( (uintptr_t)sock );	//pass sock ID to client.
	msgpkg_tmp.set_m_login_stage(1);				//pass login stage 1 to client.
	SendPackage( sock, &msgpkg_tmp );				//send package.
	m_numClients++;
	UpdateStatusBar();
}


void netchatserverFrame::OnSocketEvent(wxSocketEvent& event)
{
	//get current incoming sock;
	wxSocketBase* sock =  event.GetSocket();

	switch ( event.GetSocketEvent() )
	{
		case wxSOCKET_INPUT:
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
			//讀取封包
			MsgPackage package_r = ReadPackage( sock );
			package_s = package_r;	//接收封包副本
			bool login_flag = package_r.m_login_flag();
			if ( !login_flag ) {
				//登入階段的封包處理
				if ( (uintptr_t)sock == package_r.m_nsock_id() ) {
					long id_tmp = (uintptr_t)sock;
					(*TextCtrl1) << _("sock id 確認: OK, id = ") << id_tmp << _("\n");
					if ( package_r.m_login_stage() == 2 ) {
						//登入階段確認OK
						(*TextCtrl1) << _("stage 2 確認: OK") << _("\n");
						(*TextCtrl1) << _("登入帳號/密碼: ")
									 << StringTowxString( package_r.m_susername() ) + _("/")
									 << StringTowxString( package_r.m_spassword() ) << _("\n");
						if ( true ) {
							//假設登入成功
							package_s.clear_m_spassword();	//清除封包密碼
							int curr_idx_of_sock = m_SockArray.Index(sock);
							if ( curr_idx_of_sock == package_r.m_nindex() ) {	//sock index與client封包所記錄的index是否相同
								if ( m_UserArray.Item(curr_idx_of_sock) == _("dummy") ) {	//確認是不是dummy封包
									wxString* tmpstr = &m_UserArray[curr_idx_of_sock];
									tmpstr->assign(StringTowxString(package_r.m_susername()));
									(*TextCtrl1) << _("dummy → ") << m_UserArray.Item(curr_idx_of_sock) << _("\n");
									package_s.set_m_login_flag(true);	//設定登入狀態(成功)

									//登入成功, sock_id, username登錄成功
									package_s.clear_m_starget_user();
									package_s.add_m_starget_user( package_r.m_susername() );
									package_s.set_m_update_user_flag(true);
									package_s.set_m_login_stage(6);
									/**
									向所有已登入使用者送出封包
									登入者列表
									update_user_flag = true
									*/
									for ( unsigned int i = 0; i < (m_SockArray.size() - 1); i++ ) {
										SendPackage(m_SockArray.Item(i),&package_s);
									}
									package_r.clear_m_update_user_flag();

								}
								else {
									package_s.set_m_err_code(1);
								}

								package_s.set_m_login_stage(3);		//設定封包登入階段=3
								SendPackage(sock,&package_s);
							}
							else {
								(*TextCtrl1) << _("index差太多了我不行了.") << _("\n");
								package_s.set_m_err_code(2);
							}
						}
					}
					else {
						//登入階段確認NG
						(*TextCtrl1) << _("stage 2 確認: NG") << _("\n");
						package_s.clear_m_login_stage();	//重設封包登入階段=0
						package_s.clear_m_spassword();		//清除封包密碼
						package_s.set_m_err_code(4);
						package_s.set_m_login_flag(false);	//設定登入狀態(false)
					}
				}
				else {
					(*TextCtrl1) << _("sock id 確認: NG") << _("\n");
					package_s.clear_m_spassword();		//清除封包密碼
					package_s.set_m_err_code(3);
					package_s.set_m_login_flag(false);	//設定登入狀態(false)
				}
			}
			else {
				if ( package_r.m_update_user_flag() && (package_r.m_login_stage() == 4 ) ) {
					(*TextCtrl1) << _(">> login stage must be 4: ") << static_cast<long>(package_s.m_login_stage()) << _("\n");
					(*TextCtrl1) << _(">> update user flag must be true: ") << (package_s.m_update_user_flag()?_("true"):_("false")) << _("\n");
					package_s.clear_m_starget_user();
					for ( unsigned int i = 0; i < m_UserArray.Count(); i++ ) {
						package_s.add_m_starget_user( wxStringToString( m_UserArray.Item(i) ) );
					}
					package_s.set_m_login_stage(5);
					/**
					送出封包
					login_stage = 5
					target user list
					*/
					SendPackage(sock,&package_s);
				}
				else {

					(*TextCtrl1) << _("<<") + StringTowxString( package_r.m_susername() )
								 << _("\n")
								 << _("says: ") + StringTowxString( package_r.msg() )
								 << _("\n");
					/**
					清除 update user flag 與 user list 後再傳送
					*/
					package_s.clear_m_update_user_flag();
					package_s.clear_m_starget_user();
					for ( int i = 0; i < package_r.m_starget_user_size(); i++ ) {
						wxString str_tmp = StringTowxString( package_r.m_starget_user(i) );
						size_t idx_t = m_UserArray.Index( str_tmp.c_str() );
						SendPackage( m_SockArray.Item(idx_t) ,&package_s);
					}
					//SendPackage(sock,&package_s);
				}
			}
//			(*TextCtrl1) << StringTowxString( package_r.m_susername() )
//						 << _("\n")
//						 << StringTowxString( package_r.msg() )
//						 << _("\n");
//			SendPackage( sock, &package_r );
			break;
		}
		case wxSOCKET_OUTPUT:
			break;
		case wxSOCKET_CONNECTION:
			break;
		case wxSOCKET_LOST:
		{
			MsgPackage package_del = package_s;
			package_del.clear_m_susername();
			package_del.clear_m_spassword();
			package_del.set_m_susername("DEL0x99H");
			package_del.set_m_spassword("DEL0x99H");
			int idx = m_SockArray.Index(sock);
			package_del.set_m_err_code(idx);
			for ( unsigned int i = 0; i < (m_SockArray.size() - 1); i++ ) {
				if ( m_SockArray.Item(i) != sock )
					SendPackage(m_SockArray.Item(i),&package_s);
			}
			m_SockArray.Remove(sock);
			m_UserArray.RemoveAt(idx);
			m_numClients--;
			sock->Destroy();
			break;
		}
		default:;
	}
	UpdateStatusBar();
}

void netchatserverFrame::UpdateStatusBar()
{
	wxString s;
	s.Printf(_("%d clients connected"), m_numClients);
	SetStatusText(s, 1);
}

void netchatserverFrame::SendPackage(wxSocketBase* sock, MsgPackage* package_tmp)
{
	std::string sbuffer;
	package_tmp->SerializeToString( &sbuffer );
	sock->Write( sbuffer.c_str(), package_tmp->ByteSize() );
}

MsgPackage netchatserverFrame::ReadPackage(wxSocketBase* sock)
{
	unsigned char buf[4096] = {0};
	sock->Read(buf, sizeof(buf));
	std::string myread((const char*)buf);
	MsgPackage package_tmp;
	package_tmp.ParseFromString(myread);
	return package_tmp;
}

std::string netchatserverFrame::wxStringToString(const wxString& s)
{
	std::string str_tmp = std::string( s.mb_str(wxConvUTF8) );
	return str_tmp;
}

wxString netchatserverFrame::StringTowxString(const std::string& s)
{
	wxString wxstr_tmp = wxString::FromUTF8( s.c_str() );
	return wxstr_tmp;
}


