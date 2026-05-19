#include "Application.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(Application);

bool Application::OnInit()
{
	MainFrame* mainframe = new MainFrame("C++ GUI");
	mainframe->Show();
	return true;
}