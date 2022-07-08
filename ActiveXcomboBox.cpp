// ActiveXcomboBox.cpp: CActiveXcomboBoxApp 和 DLL 注册的实现。

#include "pch.h"
#include "framework.h"
#include "ActiveXcomboBox.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CActiveXcomboBoxApp theApp;

const GUID CDECL _tlid = {0xc151c9dd,0x077d,0x4ddc,{0x97,0x26,0x6d,0x11,0xdc,0x82,0x6f,0x6e}};
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CActiveXcomboBoxApp::InitInstance - DLL 初始化

BOOL CActiveXcomboBoxApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CActiveXcomboBoxApp::ExitInstance - DLL 终止

int CActiveXcomboBoxApp::ExitInstance()
{
	// TODO:  在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
