// DialogRename.cpp: ���� ����������
//

#include "stdafx.h"
#include "TestChat.h"
#include "DialogRename.h"
#include "afxdialogex.h"


// ���������� ���� CDialogRename

IMPLEMENT_DYNAMIC(CDialogRename, CDialogEx)

CDialogRename::CDialogRename(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialogRename::IDD, pParent)
	, m_StringRename(_T(""))
{	
}

CDialogRename::~CDialogRename()
{
}

void CDialogRename::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_StringRename);
	DDV_MaxChars(pDX, m_StringRename, 20);
}


BEGIN_MESSAGE_MAP(CDialogRename, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDialogRename::OnBnClickedOk)
END_MESSAGE_MAP()


// ����������� ��������� CDialogRename


void CDialogRename::OnBnClickedOk()
{
	// TODO: �������� ���� ��� ����������� �����������	
	if (UpdateData(TRUE)){
		if (modeRename){
			if (m_StringRename.GetLength() > 0){
				if (theMFrame->RnmGroup(oldMapTitle, m_StringRename))	CDialogEx::OnOK();
				else
					MessageBox(L"����� � ������ ��������� ��� ����������");
			}
			else
				MessageBox(L"������� �������� ������");
		}
		else{
			if (m_StringRename.GetLength() > 2){
				if (theMFrame->RnmUser(oldMapTitle, m_StringRename))	CDialogEx::OnOK();
				else
					MessageBox(L"������������ � ������ ����� ��� ����������");
			}
			else
				MessageBox(L"������� �������� ��� ������������");
		}			
	}
	else
		MessageBox(L"������");
}
