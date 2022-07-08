// ActiveXcomboBoxCtrl.cpp : CActiveXcomboBoxCtrl ActiveX 控件类的实现。

#include "pch.h"
#include "framework.h"
#include "ActiveXcomboBox.h"
#include "ActiveXcomboBoxCtrl.h"
#include "ActiveXcomboBoxPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CActiveXcomboBoxCtrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CActiveXcomboBoxCtrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CActiveXcomboBoxCtrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CActiveXcomboBoxCtrl, COleControl)
	DISP_FUNCTION_ID(CActiveXcomboBoxCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CActiveXcomboBoxCtrl, "AddString", dispidAddString, AddString, VT_EMPTY, VTS_BSTR)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CActiveXcomboBoxCtrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO: 根据需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CActiveXcomboBoxCtrl, 1)
	PROPPAGEID(CActiveXcomboBoxPropPage::guid)
END_PROPPAGEIDS(CActiveXcomboBoxCtrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CActiveXcomboBoxCtrl, "MFCACTIVEXCONTRO.ActiveXcomboBoxCtrl.1",
	0xb5bd875a,0xd44e,0x451d,0x85,0x7d,0x8c,0x20,0x29,0x5a,0x81,0xd8)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CActiveXcomboBoxCtrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_DActiveXcomboBox = {0x069e40cb,0xd3ce,0x4951,{0x80,0x22,0xeb,0xb1,0x89,0xcb,0x8b,0x72}};
const IID IID_DActiveXcomboBoxEvents = {0xea88ea8d,0x5385,0x4c5f,{0xb0,0xdb,0x00,0x14,0x3b,0x9c,0xa0,0xcb}};

// 控件类型信息

static const DWORD _dwActiveXcomboBoxOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CActiveXcomboBoxCtrl, IDS_ACTIVEXCOMBOBOX, _dwActiveXcomboBoxOleMisc)

// CActiveXcomboBoxCtrl::CActiveXcomboBoxCtrlFactory::UpdateRegistry -
// 添加或移除 CActiveXcomboBoxCtrl 的系统注册表项

BOOL CActiveXcomboBoxCtrl::CActiveXcomboBoxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_ACTIVEXCOMBOBOX,
			IDB_ACTIVEXCOMBOBOX,
			afxRegApartmentThreading,
			_dwActiveXcomboBoxOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CActiveXcomboBoxCtrl::CActiveXcomboBoxCtrl - 构造函数

CActiveXcomboBoxCtrl::CActiveXcomboBoxCtrl()
{
	InitializeIIDs(&IID_DActiveXcomboBox, &IID_DActiveXcomboBoxEvents);
	// TODO:  在此初始化控件的实例数据。
}

// CActiveXcomboBoxCtrl::~CActiveXcomboBoxCtrl - 析构函数

CActiveXcomboBoxCtrl::~CActiveXcomboBoxCtrl()
{
	// TODO:  在此清理控件的实例数据。
}

// CActiveXcomboBoxCtrl::OnDraw - 绘图函数

void CActiveXcomboBoxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);
}

// CActiveXcomboBoxCtrl::DoPropExchange - 持久性支持

void CActiveXcomboBoxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// CActiveXcomboBoxCtrl::OnResetState - 将控件重置为默认状态

void CActiveXcomboBoxCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO:  在此重置任意其他控件状态。
}


// CActiveXcomboBoxCtrl::AboutBox - 向用户显示“关于”框

void CActiveXcomboBoxCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_ACTIVEXCOMBOBOX);
	dlgAbout.DoModal();
}


// CActiveXcomboBoxCtrl::PreCreateWindow - 修改 CreateWindowEx 的参数

BOOL CActiveXcomboBoxCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("COMBOBOX");
	BOOL bRet = COleControl::PreCreateWindow(cs);
	cs.hMenu = nullptr;
	return bRet;
}

// CActiveXcomboBoxCtrl::IsSubclassedControl - 这是一个子类控件

BOOL CActiveXcomboBoxCtrl::IsSubclassedControl()
{
	return TRUE;
}

// CActiveXcomboBoxCtrl::OnOcmCommand - 处理命令消息

LRESULT CActiveXcomboBoxCtrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
	WORD wNotifyCode = HIWORD(wParam);

	// TODO:  在此接通 wNotifyCode。

	return 0;
}


// CActiveXcomboBoxCtrl 消息处理程序


void CActiveXcomboBoxCtrl::AddString(BSTR strData)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此处添加分派处理程序代码
	ASSERT(::IsWindow(m_hWnd));
	::SendMessage(m_hWnd, CB_ADDSTRING, 0, (LPARAM)strData);

}
