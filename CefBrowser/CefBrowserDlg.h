
// CefBrowserDlg.h : 头文件
//

#pragma once

#include "TabHost.h"

// CCefBrowserDlg 对话框
class CCefBrowserDlg : public CDialog
{
// 构造
public:
	CCefBrowserDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CEFBROWSER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
    afx_msg void OnClose();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
    afx_msg void OnBtnTabClicked();
    afx_msg void OnBtnTabDoubleClicked();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedOk();
    afx_msg void OnBnClickedBtnNew();
    afx_msg void OnBnClickedBtnBack();
    afx_msg void OnBnClickedBtnRefresh();
    afx_msg void OnBnClickedBtnForward();
};
