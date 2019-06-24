#pragma once
#include "CUserManager.h"
#include "CLiveProgram.h"
#include <vector>
using namespace std;

// CMinClassListDlg 对话框

class CMinClassListDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMinClassListDlg)

public:
	CMinClassListDlg(CUserManager* pUserManager, CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CMinClassListDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_MIN_CLASS_LIST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
public:
	void getMinClassList();

private:
	CUserManager* m_pUserManager;
	vector<CLiveProgram> mVLivePrograms;
public:
	CListCtrl m_MinClassList;
	
	afx_msg void OnBnClickedButtonMinClassBrushList();
	afx_msg void OnBnClickedButtonCreateNewMinClass();
	afx_msg void OnNMClickListMinClass(NMHDR *pNMHDR, LRESULT *pResult);
};
