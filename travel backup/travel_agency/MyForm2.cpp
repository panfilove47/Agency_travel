#include "MyForm2.h"
#include <Windows.h>
Hotel hotel;
using namespace travelagency; // Название проекта
int WINAPI WinMain2(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}

System::Void travelagency::MyForm2::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ username0 = textBox2->Text;
	string username;
	int id = System::Convert::ToInt16(textBox1->Text);
	MarshalString(username0, username);
	if (!hotel.isUserBooked(id))
	{
		hotel.set_who_booked(username, id);
		label3->Text = "";
		MyForm2_Load(nullptr, nullptr);
	}
	else
	{
		label3->Text = "room is booked";
	}
}
