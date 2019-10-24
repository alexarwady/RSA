#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	YoutubeCPlusPlus::Form1 form;
	Application::Run(%form);
}