#include "MyForm.h"
//#include "Matrix.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]



int main (array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LinearAlgbLab1::MyForm form;
	Application::Run(% form);
}

