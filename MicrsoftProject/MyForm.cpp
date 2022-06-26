#include "MyForm.h"
#include "Tarea.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]



void main(array<String^>^ args) {
	
	Console::WriteLine("Hola");
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MicrsoftProject::MyForm form;
	Application::Run(% form);
	
}
