
// Sum2ValueDlg.h : header file
//

#pragma once
#include "Giaitoan.h"

// CSum2ValueDlg dialog
class CSum2ValueDlg : public CDialogEx
{
// Construction
public:
	CSum2ValueDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUM2VALUE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	int a;
	int b;
	Giaitoan objGiaitoan;
	int mTong;
public:
	afx_msg void OnBnClickedButton1();
	CStatic mctrKetqua;
};
