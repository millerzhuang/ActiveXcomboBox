

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ActiveXcomboBox.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ActiveXcomboBoxidl_h__
#define __ActiveXcomboBoxidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DActiveXcomboBox_FWD_DEFINED__
#define ___DActiveXcomboBox_FWD_DEFINED__
typedef interface _DActiveXcomboBox _DActiveXcomboBox;

#endif 	/* ___DActiveXcomboBox_FWD_DEFINED__ */


#ifndef ___DActiveXcomboBoxEvents_FWD_DEFINED__
#define ___DActiveXcomboBoxEvents_FWD_DEFINED__
typedef interface _DActiveXcomboBoxEvents _DActiveXcomboBoxEvents;

#endif 	/* ___DActiveXcomboBoxEvents_FWD_DEFINED__ */


#ifndef __ActiveXcomboBox_FWD_DEFINED__
#define __ActiveXcomboBox_FWD_DEFINED__

#ifdef __cplusplus
typedef class ActiveXcomboBox ActiveXcomboBox;
#else
typedef struct ActiveXcomboBox ActiveXcomboBox;
#endif /* __cplusplus */

#endif 	/* __ActiveXcomboBox_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ActiveXcomboBox_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_ActiveXcomboBox_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ActiveXcomboBox_0000_0000_v0_0_s_ifspec;


#ifndef __ActiveXcomboBoxLib_LIBRARY_DEFINED__
#define __ActiveXcomboBoxLib_LIBRARY_DEFINED__

/* library ActiveXcomboBoxLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_ActiveXcomboBoxLib;

#ifndef ___DActiveXcomboBox_DISPINTERFACE_DEFINED__
#define ___DActiveXcomboBox_DISPINTERFACE_DEFINED__

/* dispinterface _DActiveXcomboBox */
/* [uuid] */ 


EXTERN_C const IID DIID__DActiveXcomboBox;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("069e40cb-d3ce-4951-8022-ebb189cb8b72")
    _DActiveXcomboBox : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DActiveXcomboBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DActiveXcomboBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DActiveXcomboBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DActiveXcomboBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DActiveXcomboBox * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DActiveXcomboBox * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DActiveXcomboBox * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DActiveXcomboBox * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DActiveXcomboBoxVtbl;

    interface _DActiveXcomboBox
    {
        CONST_VTBL struct _DActiveXcomboBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DActiveXcomboBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DActiveXcomboBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DActiveXcomboBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DActiveXcomboBox_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DActiveXcomboBox_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DActiveXcomboBox_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DActiveXcomboBox_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DActiveXcomboBox_DISPINTERFACE_DEFINED__ */


#ifndef ___DActiveXcomboBoxEvents_DISPINTERFACE_DEFINED__
#define ___DActiveXcomboBoxEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DActiveXcomboBoxEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DActiveXcomboBoxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ea88ea8d-5385-4c5f-b0db-00143b9ca0cb")
    _DActiveXcomboBoxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DActiveXcomboBoxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DActiveXcomboBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DActiveXcomboBoxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DActiveXcomboBoxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DActiveXcomboBoxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DActiveXcomboBoxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DActiveXcomboBoxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DActiveXcomboBoxEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DActiveXcomboBoxEventsVtbl;

    interface _DActiveXcomboBoxEvents
    {
        CONST_VTBL struct _DActiveXcomboBoxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DActiveXcomboBoxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DActiveXcomboBoxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DActiveXcomboBoxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DActiveXcomboBoxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DActiveXcomboBoxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DActiveXcomboBoxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DActiveXcomboBoxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DActiveXcomboBoxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ActiveXcomboBox;

#ifdef __cplusplus

class DECLSPEC_UUID("b5bd875a-d44e-451d-857d-8c20295a81d8")
ActiveXcomboBox;
#endif
#endif /* __ActiveXcomboBoxLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


