#pragma once

// ActiveXcomboBoxPropPage.h: CActiveXcomboBoxPropPage 属性页类的声明。


// CActiveXcomboBoxPropPage : 请参阅 ActiveXcomboBoxPropPage.cpp 了解实现。

class CActiveXcomboBoxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CActiveXcomboBoxPropPage)
	DECLARE_OLECREATE_EX(CActiveXcomboBoxPropPage)

// 构造函数
public:
	CActiveXcomboBoxPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_ACTIVEXCOMBOBOX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

