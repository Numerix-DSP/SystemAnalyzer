/**************************************************************************
File Name		: MAINFRAME.CPP			| Author		: JOHN EDWARDS
Library version	: 2.00					| Modifications	:
----------------------------------------+----------------------------------
Compiler  : Independent					| Start Date	: 19/05/02
Options	  :								| Latest Update : 19/05/02
---------------------------------------------------------------------------
This file may be modified, in any way, providing that this header remains
within the file and none of the header contents are removed or modified.

You are free to use this software for any purpose you see fit.
This software is provided as user supported software and with no warranty.
If you do make changes then please feel free to send them back to us and
we will incorporate them into future versions.

DELETION OF ANY INFORMATION IN THIS HEADER IS IN VIOLATION OF YOUR LICENSE.

Copyright (C) 2002 Numerix Ltd.
---------------------------------------------------------------------------
Description : Top level graph functions
	
****************************************************************************/

/* Include files */

#ifdef __GNUG__
    #pragma implementation "mainframe.cpp"
    #pragma interface "mainframe.cpp"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"
#include "wx/splitter.h"

// These pragmas prevents the compiler from precompiling the #defines below so that
// changing them doesn't "take place" later!
#ifdef __VISUALC__
    #pragma hdrstop
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif

// for all others, include the necessary headers
#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

#include "mainframe.h"

class MyApp : public wxApp
{
public:
//	virtual bool OnInit();
	bool OnInit(void);
};


IMPLEMENT_APP(MyApp)


/*
	Function Name : main
	Description : Top level function
	Notes : 
*/

// `Main program' equivalent: the program execution "starts" here
bool MyApp::OnInit()
{

	mainFrame *AppMainFrame = new mainFrame (_T("Signal Analyzer"), wxDefaultPosition, wxDefaultSize);

	SetTopWindow (AppMainFrame);		// Tell the application that it's our main window
	AppMainFrame->Show (TRUE);			// Show it

	return TRUE;
}


