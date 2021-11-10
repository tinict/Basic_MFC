
// Sum2Value.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSum2ValueApp:
// See Sum2Value.cpp for the implementation of this class
//

class CSum2ValueApp : public CWinApp
{
public:
	CSum2ValueApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSum2ValueApp theApp;
