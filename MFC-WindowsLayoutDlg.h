
// MFC-WindowsLayoutDlg.h : header file
//

#pragma once


// CMFCWindowsLayoutDlg dialog
class CMFCWindowsLayoutDlg : public CDialogEx
{
// Construction
public:
	CMFCWindowsLayoutDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCWINDOWSLAYOUT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
