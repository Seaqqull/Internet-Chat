
// TestChat.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CTestChatApp:
// � ���������� ������� ������ ��. TestChat.cpp
//

class CTestChatApp : public CWinApp
{
public:
	CTestChatApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CTestChatApp theApp;