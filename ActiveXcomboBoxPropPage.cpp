// ActiveXcomboBoxPropPage.cpp : CActiveXcomboBoxPropPage 属性页类的实现。

#include "pch.h"
#include "framework.h"
#include "ActiveXcomboBox.h"
#include "ActiveXcomboBoxPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CActiveXcomboBoxPropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(CActiveXcomboBoxPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CActiveXcomboBoxPropPage, "MFCACTIVEXCONT.ActiveXcomboBoxPropPage.1",
	0x248b8e6d,0xf75d,0x4546,0x84,0x5a,0x23,0x3e,0x21,0xc6,0xdb,0xe6)

// CActiveXcomboBoxPropPage::CActiveXcomboBoxPropPageFactory::UpdateRegistry -
// 添加或移除 CActiveXcomboBoxPropPage 的系统注册表项

BOOL CActiveXcomboBoxPropPage::CActiveXcomboBoxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_ACTIVEXCOMBOBOX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, nullptr);
}

// CActiveXcomboBoxPropPage::CActiveXcomboBoxPropPage - 构造函数

CActiveXcomboBoxPropPage::CActiveXcomboBoxPropPage() :
	COlePropertyPage(IDD, IDS_ACTIVEXCOMBOBOX_PPG_CAPTION)
{
}

// CActiveXcomboBoxPropPage::DoDataExchange - 在页和属性间移动数据

void CActiveXcomboBoxPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CActiveXcomboBoxPropPage 消息处理程序
