#pragma once
#include "MyForm.h"
namespace travelagency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ back_button;
	private: System::Windows::Forms::Label^ name_of_user_label;
	private: System::Windows::Forms::Label^ create_password_label;
	private: System::Windows::Forms::Label^ confirmed_password_label;
	private: System::Windows::Forms::TextBox^ user_textbox;
	private: System::Windows::Forms::TextBox^ create_password_textbox;
	private: System::Windows::Forms::TextBox^ confirmed_password_textbox;
	private: System::Windows::Forms::Button^ registry_button;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->name_of_user_label = (gcnew System::Windows::Forms::Label());
			this->create_password_label = (gcnew System::Windows::Forms::Label());
			this->confirmed_password_label = (gcnew System::Windows::Forms::Label());
			this->user_textbox = (gcnew System::Windows::Forms::TextBox());
			this->create_password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->confirmed_password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->registry_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// back_button
			// 
			this->back_button->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back_button->Location = System::Drawing::Point(12, 456);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(75, 23);
			this->back_button->TabIndex = 0;
			this->back_button->Text = L"Назад";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &MyForm1::back_button_Click);
			// 
			// name_of_user_label
			// 
			this->name_of_user_label->AutoSize = true;
			this->name_of_user_label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_of_user_label->Location = System::Drawing::Point(135, 41);
			this->name_of_user_label->Name = L"name_of_user_label";
			this->name_of_user_label->Size = System::Drawing::Size(108, 16);
			this->name_of_user_label->TabIndex = 1;
			this->name_of_user_label->Text = L"Введите логин:";
			// 
			// create_password_label
			// 
			this->create_password_label->AutoSize = true;
			this->create_password_label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_password_label->Location = System::Drawing::Point(132, 150);
			this->create_password_label->Name = L"create_password_label";
			this->create_password_label->Size = System::Drawing::Size(119, 16);
			this->create_password_label->TabIndex = 2;
			this->create_password_label->Text = L"Введите пароль:";
			// 
			// confirmed_password_label
			// 
			this->confirmed_password_label->AutoSize = true;
			this->confirmed_password_label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->confirmed_password_label->Location = System::Drawing::Point(126, 259);
			this->confirmed_password_label->Name = L"confirmed_password_label";
			this->confirmed_password_label->Size = System::Drawing::Size(133, 16);
			this->confirmed_password_label->TabIndex = 3;
			this->confirmed_password_label->Text = L"Повторите пароль:";
			// 
			// user_textbox
			// 
			this->user_textbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->user_textbox->Location = System::Drawing::Point(118, 57);
			this->user_textbox->Multiline = true;
			this->user_textbox->Name = L"user_textbox";
			this->user_textbox->Size = System::Drawing::Size(149, 20);
			this->user_textbox->TabIndex = 4;
			// 
			// create_password_textbox
			// 
			this->create_password_textbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_password_textbox->Location = System::Drawing::Point(118, 166);
			this->create_password_textbox->Multiline = true;
			this->create_password_textbox->Name = L"create_password_textbox";
			this->create_password_textbox->Size = System::Drawing::Size(149, 20);
			this->create_password_textbox->TabIndex = 5;
			// 
			// confirmed_password_textbox
			// 
			this->confirmed_password_textbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->confirmed_password_textbox->Location = System::Drawing::Point(118, 275);
			this->confirmed_password_textbox->Multiline = true;
			this->confirmed_password_textbox->Name = L"confirmed_password_textbox";
			this->confirmed_password_textbox->Size = System::Drawing::Size(149, 20);
			this->confirmed_password_textbox->TabIndex = 6;
			// 
			// registry_button
			// 
			this->registry_button->Location = System::Drawing::Point(130, 343);
			this->registry_button->Name = L"registry_button";
			this->registry_button->Size = System::Drawing::Size(124, 23);
			this->registry_button->TabIndex = 7;
			this->registry_button->Text = L"Зарегистрироваться";
			this->registry_button->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 491);
			this->Controls->Add(this->registry_button);
			this->Controls->Add(this->confirmed_password_textbox);
			this->Controls->Add(this->create_password_textbox);
			this->Controls->Add(this->user_textbox);
			this->Controls->Add(this->confirmed_password_label);
			this->Controls->Add(this->create_password_label);
			this->Controls->Add(this->name_of_user_label);
			this->Controls->Add(this->back_button);
			this->MaximumSize = System::Drawing::Size(400, 530);
			this->MinimumSize = System::Drawing::Size(400, 530);
			this->Name = L"MyForm1";
			this->Text = L"Регистрация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
