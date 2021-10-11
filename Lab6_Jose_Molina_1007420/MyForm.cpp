#include "MyForm.h"
#include<math.h>
#include <string.h> 

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab6JoseMolina1007420::MyForm form;
	Application::Run(% form);
	return 0;
}

