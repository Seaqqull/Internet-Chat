
// TestChatClient.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CTestChatClientApp:
// � ���������� ������� ������ ��. TestChatClient.cpp
//

class CTestChatClientApp : public CWinApp
{
public:
	CTestChatClientApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CTestChatClientApp theApp;