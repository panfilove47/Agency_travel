#include "MyForm1.h"
#include <Windows.h>
using namespace travelagency; // Название проекта
int WINAPI WinMain1(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}

System::Void travelagency::MyForm1::back_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Owner->Show();
	this->Close();
}
