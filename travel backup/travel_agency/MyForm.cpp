#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include <Windows.h>
User us;
using namespace travelagency; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
System::Void travelagency::MyForm::login_button_Click(System::Object^ sender, System::EventArgs^ e)
{

	String^ login0 = login_box->Text;
	string login;
	String^ password0 = password_box->Text;
	string password;
	MarshalString(login0, login);
	MarshalString(password0, password);
	if (login_box->Text == "" || password_box->Text == "")
	{
		error_label->Text = "Enter your username or password";
	}
	else
	{
		if (!us.isAccount_exists(login, password))
		{
			error_label->Text = "This user does not exist, please register";
			reg_button->Focus();
		}
		else
		{
			if (us.isAdmin(login))
			{
				MyForm3^ form3 = gcnew MyForm3;
				form3->Owner = this;
				form3->Show();
				this->Hide();
				error_label->Text = "";
			}
			else
			{
				if (us.isHotel(login))
				{
					MyForm4^ form4 = gcnew MyForm4;
					form4->Owner = this;
					form4->Show();
					this->Hide();
					error_label->Text = "";
				}
				else
				{
					MyForm2^ form2 = gcnew MyForm2;
					this->Hide();
					form2->Show();
					form2->Owner = this;
					error_label->Text = "";
				}
			}
		}
	}
}

System::Void travelagency::MyForm::reg_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ form1 = gcnew MyForm1;
	form1->Owner = this;
	form1->Show();
	this->Hide();
	error_label->Text = "";
}

System::Void travelagency::MyForm::password_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void travelagency::MyForm::login_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
