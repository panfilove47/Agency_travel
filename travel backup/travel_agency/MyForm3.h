#pragma once
#include"MyForm.h"
namespace travelagency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// —водка дл€ MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ delete_hotel_btn;
	private: System::Windows::Forms::TextBox^ id_to_delete_textBox;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;

		   MySqlDataReader^ sqlRd;
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		void MarshalString(String^ s, string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ create_hotel_btn;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ create_room_btn;
	private: System::Windows::Forms::Button^ delete_room_btn;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->create_hotel_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->create_room_btn = (gcnew System::Windows::Forms::Button());
			this->delete_room_btn = (gcnew System::Windows::Forms::Button());
			this->delete_hotel_btn = (gcnew System::Windows::Forms::Button());
			this->id_to_delete_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(787, 514);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(210, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(652, 310);
			this->dataGridView1->TabIndex = 1;
			// 
			// create_hotel_btn
			// 
			this->create_hotel_btn->Location = System::Drawing::Point(44, 54);
			this->create_hotel_btn->Name = L"create_hotel_btn";
			this->create_hotel_btn->Size = System::Drawing::Size(75, 23);
			this->create_hotel_btn->TabIndex = 2;
			this->create_hotel_btn->Text = L"Create hotel";
			this->create_hotel_btn->UseVisualStyleBackColor = true;
			this->create_hotel_btn->Click += gcnew System::EventHandler(this, &MyForm3::create_hotel_btn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Enter hotel\'s name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Enter info about rooms:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(35, 278);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(495, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Rooms";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Hotel id";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(41, 301);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Room type";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(35, 317);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(53, 340);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Price";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(35, 356);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 13;
			// 
			// create_room_btn
			// 
			this->create_room_btn->Location = System::Drawing::Point(35, 382);
			this->create_room_btn->Name = L"create_room_btn";
			this->create_room_btn->Size = System::Drawing::Size(75, 23);
			this->create_room_btn->TabIndex = 15;
			this->create_room_btn->Text = L"Create room";
			this->create_room_btn->UseVisualStyleBackColor = true;
			this->create_room_btn->Click += gcnew System::EventHandler(this, &MyForm3::create_room_btn_Click);
			// 
			// delete_room_btn
			// 
			this->delete_room_btn->Location = System::Drawing::Point(35, 471);
			this->delete_room_btn->Name = L"delete_room_btn";
			this->delete_room_btn->Size = System::Drawing::Size(75, 23);
			this->delete_room_btn->TabIndex = 16;
			this->delete_room_btn->Text = L"Delete room";
			this->delete_room_btn->UseVisualStyleBackColor = true;
			this->delete_room_btn->Click += gcnew System::EventHandler(this, &MyForm3::delete_room_btn_Click);
			// 
			// delete_hotel_btn
			// 
			this->delete_hotel_btn->Location = System::Drawing::Point(35, 174);
			this->delete_hotel_btn->Name = L"delete_hotel_btn";
			this->delete_hotel_btn->Size = System::Drawing::Size(75, 23);
			this->delete_hotel_btn->TabIndex = 17;
			this->delete_hotel_btn->Text = L"Delete hotel";
			this->delete_hotel_btn->UseVisualStyleBackColor = true;
			this->delete_hotel_btn->Click += gcnew System::EventHandler(this, &MyForm3::delete_hotel_btn_Click);
			// 
			// id_to_delete_textBox
			// 
			this->id_to_delete_textBox->Location = System::Drawing::Point(35, 148);
			this->id_to_delete_textBox->Name = L"id_to_delete_textBox";
			this->id_to_delete_textBox->Size = System::Drawing::Size(100, 20);
			this->id_to_delete_textBox->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Enter hotel\'s id";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 497);
			this->label8->MaximumSize = System::Drawing::Size(200, 40);
			this->label8->MinimumSize = System::Drawing::Size(200, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(200, 40);
			this->label8->TabIndex = 20;
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(35, 445);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 429);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Enter room\'s id to delete";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 549);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->id_to_delete_textBox);
			this->Controls->Add(this->delete_hotel_btn);
			this->Controls->Add(this->delete_room_btn);
			this->Controls->Add(this->create_room_btn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->create_hotel_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Owner->Show();
		this->Close();
	}
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		sqlConn->ConnectionString = "datasource = localhost; port=3306; username=root;password = Vbifcfif; database = testdb";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT hotel_id, hotel_name, room_id, room_type, price FROM hotels LEFT JOIN hotell USING(hotel_id);";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dataGridView1->DataSource = sqlDt;
	}
	private: System::Void create_hotel_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delete_hotel_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void create_room_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delete_room_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
