#include "MyForm3.h"
#include "Class hotel.h"
#include <Windows.h>
using namespace travelagency; // Название проекта
int WINAPI WinMain3(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}
Hotel hotl;
System::Void travelagency::MyForm3::create_hotel_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ hotel_name0 = textBox1->Text;
	string hotel_name;
	MarshalString(hotel_name0, hotel_name);
	if (textBox1->Text != "")
	{
		if (!hotl.isHotelExists(hotel_name))
		{
			hotl.set_hotel(hotel_name);
		}
		else
		{
			label8->Text = "Hotel is already exists";
		}
	}
	else
	{
		label8->Text = "Enter hotel name";
	}
}

System::Void travelagency::MyForm3::delete_hotel_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (id_to_delete_textBox->TextLength != 0)
	{
		int id = System::Convert::ToInt16(id_to_delete_textBox->Text);
		if (hotl.isHotelExists(id))
		{
			hotl.delete_hotels_info(id);
			hotl.delete_hotel(id);
		}
		else
		{
				label8->Text = "This hotel is not exist";
		}
	}
	else
	{
		label8->Text = "Enter hotel's id";
	}
}

System::Void travelagency::MyForm3::create_room_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ room_type0 = textBox3->Text;
	string room_type;
	MarshalString(room_type0, room_type);
	if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "")
	{
		int id = System::Convert::ToInt16(textBox2->Text);
		double price = System::Convert::ToDouble(textBox4->Text);
		hotl.set_room(id, room_type, price);
	}
	else
	{
		label8->Text = "Enter hotel's data";
	}
}

System::Void travelagency::MyForm3::delete_room_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox5->TextLength != 0)
	{
		int id = System::Convert::ToInt16(textBox5->Text);
		if (hotl.isRoomExists(id))
		{
			hotl.delete_room(id);
		}
		else
		{
			label8->Text = "Room is not exists";
		}
	}
	else
	{
		label8->Text = "Enter room's id";
	}
}
