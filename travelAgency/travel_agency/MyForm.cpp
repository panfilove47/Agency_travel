#include "MyForm.h"
#include "MyForm1.h"
#include <Windows.h>
using namespace travelagency; // �������� �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}



System::Void travelagency::MyForm::login_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (login_box->Text == "")
	{
		error_label->Text = "������� �����";
	}
	if (password_box->Text == "")
	{
		error_label->Text = "������� ������";
	}
	if (login_box->Text == "" && password_box->Text == "")
	{
		error_label->Text = "������� ����� � ������ \n ��� �����������������";
		reg_button->Focus();
	}
}

System::Void travelagency::MyForm::reg_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ form1 = gcnew MyForm1;
	form1->Owner = this;
	form1->Show();
	this->Hide();
}

System::Void travelagency::MyForm::password_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void travelagency::MyForm::login_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
