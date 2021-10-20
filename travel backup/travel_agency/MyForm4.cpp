#include "MyForm4.h"
#include "MyForm.h"
#include <Windows.h>
#include "Class hotel.h"
Hotel hot;
using namespace travelagency; // Название проекта
int WINAPI WinMain4(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}

System::Void travelagency::MyForm4::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text == "")
	{
		label2->Text = "enter id";
	}
	else 
	{
		int id = System::Convert::ToInt16(textBox1->Text);
		if (!hot.isBooked(id))
		{
			hot.set_book(id);
			MyForm4_Load(nullptr, nullptr);
			label2->Text = "";
		}
		else
		{
			label2->Text = "user is already booked";
		}
	}
}

System::Void travelagency::MyForm4::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text == "")
	{
		label2->Text = "enter id";
	}
	else
	{
		int id = System::Convert::ToInt16(textBox1->Text);
		if (hot.isUserBooked(id))
		{
			hot.set_unbook(id);
			label2->Text = "";
			MyForm4_Load(nullptr, nullptr);
		}
		else
		{
			label2->Text = "user is already unbooked";
		}
	}
}
