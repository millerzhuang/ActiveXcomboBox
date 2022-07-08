#pragma once

// ActiveXcomboBoxCtrl.h : CActiveXcomboBoxCtrl ActiveX 控件类的声明。


// CActiveXcomboBoxCtrl : 请参阅 ActiveXcomboBoxCtrl.cpp 了解实现。

class CActiveXcomboBoxCtrl : public COleControl
{
	DECLARE_DYNCREATE(CActiveXcomboBoxCtrl)

// 构造函数
public:
	CActiveXcomboBoxCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CActiveXcomboBoxCtrl();

	DECLARE_OLECREATE_EX(CActiveXcomboBoxCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CActiveXcomboBoxCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CActiveXcomboBoxCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CActiveXcomboBoxCtrl)		// 类型名称和杂项状态

	// 子类控件支持
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		dispidAddString = 1L
	};
protected:
	void AddString(BSTR strData);
};

