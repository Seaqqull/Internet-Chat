#pragma once

#include "TestChatDlg.h"
// ���������� ���� CDialogRename

class CDialogRename : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogRename)
public:
	BOOL modeRename;
	CString oldMapTitle;
	CTestChatDlg* theMFrame;
	CDialogRename(CWnd* pParent = NULL);   // ����������� �����������
	virtual ~CDialogRename();

// ������ ����������� ����
	enum { IDD = IDD_DIALOG_RENAME };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString m_StringRename;
};
