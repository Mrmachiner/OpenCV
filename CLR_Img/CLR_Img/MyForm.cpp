#include "MyForm.h"
using namespace System;
using namespace ::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^argv)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	CLRImg::MyForm form;
	Application::Run(%form);
}
