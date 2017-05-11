// ServerSocket.cpp: ���� ����������
//

#include "stdafx.h"
#include "TestChat.h"
#include "ServerSocket.h"


// CServerSocket

CServerSocket::CServerSocket(CTestChatDlg* Dlg)
{
	m_Dlg = Dlg;
}

CServerSocket::~CServerSocket()
{
}


// �������-����� CServerSocket


void CServerSocket::OnAccept(int nErrorCode)
{
	// TODO: �������� ������������������ ��� ��� ����� �������� ������
	//AfxMessageBox(L"New connection accepted");
	m_Dlg->AddUser();
	CSocket::OnAccept(nErrorCode);
}
