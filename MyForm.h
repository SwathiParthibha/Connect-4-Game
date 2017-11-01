#include <iostream>
using namespace std;

#pragma once

	bool turn = true; //true means red and false means black
	int board[12][13];
	int row, col;

namespace Connect4 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			for(int i = 0; i < 12; i++){
				for(int j=0; j < 13; j++){
					board[i][j] = 0;
				}
			}
				InitializeComponent();
				this->boardBox->BringToFront();
		}



	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected: 
		private: System::Windows::Forms::PictureBox^  boardBox;
		private: System::Windows::Forms::RichTextBox^  richTextBox1;
		private: System::Windows::Forms::Button^  button7;
		private: System::Windows::Forms::Button^  button6;
		private: System::Windows::Forms::Button^  button5;
		private: System::Windows::Forms::Button^  button4;
		private: System::Windows::Forms::Button^  button3;
		private: System::Windows::Forms::Button^  button2;
		private: System::Windows::Forms::Button^  button1;
		private: System::Windows::Forms::PictureBox^  Red50;
		private: System::Windows::Forms::PictureBox^  Red40;
		private: System::Windows::Forms::PictureBox^  Red30;
		private: System::Windows::Forms::PictureBox^  Red20;
		private: System::Windows::Forms::PictureBox^  Red10;
		private: System::Windows::Forms::PictureBox^  Red00;
		private: System::Windows::Forms::PictureBox^  Red51;
		private: System::Windows::Forms::PictureBox^  Red41;
		private: System::Windows::Forms::PictureBox^  Red31;
		private: System::Windows::Forms::PictureBox^  Red21;
		private: System::Windows::Forms::PictureBox^  Red11;
		private: System::Windows::Forms::PictureBox^  Red01;
		private: System::Windows::Forms::PictureBox^  Black40;
		private: System::Windows::Forms::PictureBox^  Black50;
		private: System::Windows::Forms::PictureBox^  Black30;
		private: System::Windows::Forms::PictureBox^  Black20;
		private: System::Windows::Forms::PictureBox^  Black10;
		private: System::Windows::Forms::PictureBox^  Black00;
		private: System::Windows::Forms::PictureBox^  Red52;
		private: System::Windows::Forms::PictureBox^  Red42;
		private: System::Windows::Forms::PictureBox^  Red32;
		private: System::Windows::Forms::PictureBox^  Red22;
		private: System::Windows::Forms::PictureBox^  Red12;
		private: System::Windows::Forms::PictureBox^  Red02;
		private: System::Windows::Forms::PictureBox^  Red53;
		private: System::Windows::Forms::PictureBox^  Red43;
		private: System::Windows::Forms::PictureBox^  Red33;
		private: System::Windows::Forms::PictureBox^  Red23;
		private: System::Windows::Forms::PictureBox^  Red13;
		private: System::Windows::Forms::PictureBox^  Red03;
		private: System::Windows::Forms::PictureBox^  Red54;
		private: System::Windows::Forms::PictureBox^  Red44;
		private: System::Windows::Forms::PictureBox^  Red34;
		private: System::Windows::Forms::PictureBox^  Red24;
		private: System::Windows::Forms::PictureBox^  Red14;
		private: System::Windows::Forms::PictureBox^  Red04;
		private: System::Windows::Forms::PictureBox^  Red55;
		private: System::Windows::Forms::PictureBox^  Red45;
		private: System::Windows::Forms::PictureBox^  Red35;
		private: System::Windows::Forms::PictureBox^  Red25;
		private: System::Windows::Forms::PictureBox^  Red15;
		private: System::Windows::Forms::PictureBox^  Red05;
		private: System::Windows::Forms::PictureBox^  Red56;
		private: System::Windows::Forms::PictureBox^  Red46;
		private: System::Windows::Forms::PictureBox^  Red36;
		private: System::Windows::Forms::PictureBox^  Red26;
		private: System::Windows::Forms::PictureBox^  Red16;
		private: System::Windows::Forms::PictureBox^  Red06;
		private: System::Windows::Forms::PictureBox^  Black51;
		private: System::Windows::Forms::PictureBox^  Black41;
		private: System::Windows::Forms::PictureBox^  Black31;
		private: System::Windows::Forms::PictureBox^  Black21;
		private: System::Windows::Forms::PictureBox^  Black11;
		private: System::Windows::Forms::PictureBox^  Black01;
		private: System::Windows::Forms::PictureBox^  Black52;
		private: System::Windows::Forms::PictureBox^  Black42;
		private: System::Windows::Forms::PictureBox^  Black32;
		private: System::Windows::Forms::PictureBox^  Black22;
		private: System::Windows::Forms::PictureBox^  Black12;
		private: System::Windows::Forms::PictureBox^  Black02;
		private: System::Windows::Forms::PictureBox^  Black53;
		private: System::Windows::Forms::PictureBox^  Black43;
		private: System::Windows::Forms::PictureBox^  Black33;
		private: System::Windows::Forms::PictureBox^  Black23;
		private: System::Windows::Forms::PictureBox^  Black13;
		private: System::Windows::Forms::PictureBox^  Black03;
		private: System::Windows::Forms::PictureBox^  Black54;
		private: System::Windows::Forms::PictureBox^  Black44;
		private: System::Windows::Forms::PictureBox^  Black34;
		private: System::Windows::Forms::PictureBox^  Black24;
		private: System::Windows::Forms::PictureBox^  Black14;
		private: System::Windows::Forms::PictureBox^  Black04;
		private: System::Windows::Forms::PictureBox^  Black55;
		private: System::Windows::Forms::PictureBox^  Black45;
		private: System::Windows::Forms::PictureBox^  Black35;
		private: System::Windows::Forms::PictureBox^  Black25;
		private: System::Windows::Forms::PictureBox^  Black15;
		private: System::Windows::Forms::PictureBox^  Black05;
		private: System::Windows::Forms::PictureBox^  Black56;
		private: System::Windows::Forms::PictureBox^  Black46;
		private: System::Windows::Forms::PictureBox^  Black36;
		private: System::Windows::Forms::PictureBox^  Black26;
		private: System::Windows::Forms::PictureBox^  Black16;
		private: System::Windows::Forms::PictureBox^  Black06;
		private: System::Windows::Forms::Button^  clear;
		private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->boardBox = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Red50 = (gcnew System::Windows::Forms::PictureBox());
			this->Red40 = (gcnew System::Windows::Forms::PictureBox());
			this->Red30 = (gcnew System::Windows::Forms::PictureBox());
			this->Red20 = (gcnew System::Windows::Forms::PictureBox());
			this->Red10 = (gcnew System::Windows::Forms::PictureBox());
			this->Red00 = (gcnew System::Windows::Forms::PictureBox());
			this->Red51 = (gcnew System::Windows::Forms::PictureBox());
			this->Red41 = (gcnew System::Windows::Forms::PictureBox());
			this->Red31 = (gcnew System::Windows::Forms::PictureBox());
			this->Red21 = (gcnew System::Windows::Forms::PictureBox());
			this->Red11 = (gcnew System::Windows::Forms::PictureBox());
			this->Red01 = (gcnew System::Windows::Forms::PictureBox());
			this->Black40 = (gcnew System::Windows::Forms::PictureBox());
			this->Black50 = (gcnew System::Windows::Forms::PictureBox());
			this->Black30 = (gcnew System::Windows::Forms::PictureBox());
			this->Black20 = (gcnew System::Windows::Forms::PictureBox());
			this->Black10 = (gcnew System::Windows::Forms::PictureBox());
			this->Black00 = (gcnew System::Windows::Forms::PictureBox());
			this->Red52 = (gcnew System::Windows::Forms::PictureBox());
			this->Red42 = (gcnew System::Windows::Forms::PictureBox());
			this->Red32 = (gcnew System::Windows::Forms::PictureBox());
			this->Red22 = (gcnew System::Windows::Forms::PictureBox());
			this->Red12 = (gcnew System::Windows::Forms::PictureBox());
			this->Red02 = (gcnew System::Windows::Forms::PictureBox());
			this->Red53 = (gcnew System::Windows::Forms::PictureBox());
			this->Red43 = (gcnew System::Windows::Forms::PictureBox());
			this->Red33 = (gcnew System::Windows::Forms::PictureBox());
			this->Red23 = (gcnew System::Windows::Forms::PictureBox());
			this->Red13 = (gcnew System::Windows::Forms::PictureBox());
			this->Red03 = (gcnew System::Windows::Forms::PictureBox());
			this->Red54 = (gcnew System::Windows::Forms::PictureBox());
			this->Red44 = (gcnew System::Windows::Forms::PictureBox());
			this->Red34 = (gcnew System::Windows::Forms::PictureBox());
			this->Red24 = (gcnew System::Windows::Forms::PictureBox());
			this->Red14 = (gcnew System::Windows::Forms::PictureBox());
			this->Red04 = (gcnew System::Windows::Forms::PictureBox());
			this->Red55 = (gcnew System::Windows::Forms::PictureBox());
			this->Red45 = (gcnew System::Windows::Forms::PictureBox());
			this->Red35 = (gcnew System::Windows::Forms::PictureBox());
			this->Red25 = (gcnew System::Windows::Forms::PictureBox());
			this->Red15 = (gcnew System::Windows::Forms::PictureBox());
			this->Red05 = (gcnew System::Windows::Forms::PictureBox());
			this->Red56 = (gcnew System::Windows::Forms::PictureBox());
			this->Red46 = (gcnew System::Windows::Forms::PictureBox());
			this->Red36 = (gcnew System::Windows::Forms::PictureBox());
			this->Red26 = (gcnew System::Windows::Forms::PictureBox());
			this->Red16 = (gcnew System::Windows::Forms::PictureBox());
			this->Red06 = (gcnew System::Windows::Forms::PictureBox());
			this->Black51 = (gcnew System::Windows::Forms::PictureBox());
			this->Black41 = (gcnew System::Windows::Forms::PictureBox());
			this->Black31 = (gcnew System::Windows::Forms::PictureBox());
			this->Black21 = (gcnew System::Windows::Forms::PictureBox());
			this->Black11 = (gcnew System::Windows::Forms::PictureBox());
			this->Black01 = (gcnew System::Windows::Forms::PictureBox());
			this->Black52 = (gcnew System::Windows::Forms::PictureBox());
			this->Black42 = (gcnew System::Windows::Forms::PictureBox());
			this->Black32 = (gcnew System::Windows::Forms::PictureBox());
			this->Black22 = (gcnew System::Windows::Forms::PictureBox());
			this->Black12 = (gcnew System::Windows::Forms::PictureBox());
			this->Black02 = (gcnew System::Windows::Forms::PictureBox());
			this->Black53 = (gcnew System::Windows::Forms::PictureBox());
			this->Black43 = (gcnew System::Windows::Forms::PictureBox());
			this->Black33 = (gcnew System::Windows::Forms::PictureBox());
			this->Black23 = (gcnew System::Windows::Forms::PictureBox());
			this->Black13 = (gcnew System::Windows::Forms::PictureBox());
			this->Black03 = (gcnew System::Windows::Forms::PictureBox());
			this->Black54 = (gcnew System::Windows::Forms::PictureBox());
			this->Black44 = (gcnew System::Windows::Forms::PictureBox());
			this->Black34 = (gcnew System::Windows::Forms::PictureBox());
			this->Black24 = (gcnew System::Windows::Forms::PictureBox());
			this->Black14 = (gcnew System::Windows::Forms::PictureBox());
			this->Black04 = (gcnew System::Windows::Forms::PictureBox());
			this->Black55 = (gcnew System::Windows::Forms::PictureBox());
			this->Black45 = (gcnew System::Windows::Forms::PictureBox());
			this->Black35 = (gcnew System::Windows::Forms::PictureBox());
			this->Black25 = (gcnew System::Windows::Forms::PictureBox());
			this->Black15 = (gcnew System::Windows::Forms::PictureBox());
			this->Black05 = (gcnew System::Windows::Forms::PictureBox());
			this->Black56 = (gcnew System::Windows::Forms::PictureBox());
			this->Black46 = (gcnew System::Windows::Forms::PictureBox());
			this->Black36 = (gcnew System::Windows::Forms::PictureBox());
			this->Black26 = (gcnew System::Windows::Forms::PictureBox());
			this->Black16 = (gcnew System::Windows::Forms::PictureBox());
			this->Black06 = (gcnew System::Windows::Forms::PictureBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->boardBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red00))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black00))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black06))->BeginInit();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(705, 74);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(26, 23);
			this->button7->TabIndex = 1;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// boardBox
			// 
			this->boardBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"boardBox.BackgroundImage")));
			this->boardBox->Location = System::Drawing::Point(126, 103);
			this->boardBox->Name = L"boardBox";
			this->boardBox->Size = System::Drawing::Size(639, 485);
			this->boardBox->TabIndex = 2;
			this->boardBox->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Silver;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(350, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(201, 50);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"Red\'s Turn";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(612, 74);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(26, 23);
			this->button6->TabIndex = 4;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(525, 74);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(26, 23);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(435, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(26, 23);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(341, 74);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(26, 23);
			this->button3->TabIndex = 7;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(251, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(26, 23);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(26, 23);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Red50
			// 
			this->Red50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red50.BackgroundImage")));
			this->Red50->Location = System::Drawing::Point(126, 500);
			this->Red50->Name = L"Red50";
			this->Red50->Size = System::Drawing::Size(100, 88);
			this->Red50->TabIndex = 10;
			this->Red50->TabStop = false;
			// 
			// Red40
			// 
			this->Red40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red40.BackgroundImage")));
			this->Red40->Location = System::Drawing::Point(126, 419);
			this->Red40->Name = L"Red40";
			this->Red40->Size = System::Drawing::Size(100, 88);
			this->Red40->TabIndex = 11;
			this->Red40->TabStop = false;
			// 
			// Red30
			// 
			this->Red30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red30.BackgroundImage")));
			this->Red30->Location = System::Drawing::Point(126, 339);
			this->Red30->Name = L"Red30";
			this->Red30->Size = System::Drawing::Size(100, 88);
			this->Red30->TabIndex = 12;
			this->Red30->TabStop = false;
			// 
			// Red20
			// 
			this->Red20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red20.BackgroundImage")));
			this->Red20->Location = System::Drawing::Point(126, 258);
			this->Red20->Name = L"Red20";
			this->Red20->Size = System::Drawing::Size(100, 88);
			this->Red20->TabIndex = 13;
			this->Red20->TabStop = false;
			// 
			// Red10
			// 
			this->Red10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red10.BackgroundImage")));
			this->Red10->Location = System::Drawing::Point(126, 178);
			this->Red10->Name = L"Red10";
			this->Red10->Size = System::Drawing::Size(100, 88);
			this->Red10->TabIndex = 14;
			this->Red10->TabStop = false;
			// 
			// Red00
			// 
			this->Red00->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red00.BackgroundImage")));
			this->Red00->Location = System::Drawing::Point(126, 103);
			this->Red00->Name = L"Red00";
			this->Red00->Size = System::Drawing::Size(100, 83);
			this->Red00->TabIndex = 15;
			this->Red00->TabStop = false;
			// 
			// Red51
			// 
			this->Red51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red51.BackgroundImage")));
			this->Red51->Location = System::Drawing::Point(215, 500);
			this->Red51->Name = L"Red51";
			this->Red51->Size = System::Drawing::Size(100, 88);
			this->Red51->TabIndex = 16;
			this->Red51->TabStop = false;
			// 
			// Red41
			// 
			this->Red41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red41.BackgroundImage")));
			this->Red41->Location = System::Drawing::Point(215, 419);
			this->Red41->Name = L"Red41";
			this->Red41->Size = System::Drawing::Size(100, 88);
			this->Red41->TabIndex = 17;
			this->Red41->TabStop = false;
			// 
			// Red31
			// 
			this->Red31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red31.BackgroundImage")));
			this->Red31->Location = System::Drawing::Point(215, 339);
			this->Red31->Name = L"Red31";
			this->Red31->Size = System::Drawing::Size(100, 88);
			this->Red31->TabIndex = 18;
			this->Red31->TabStop = false;
			// 
			// Red21
			// 
			this->Red21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red21.BackgroundImage")));
			this->Red21->Location = System::Drawing::Point(215, 258);
			this->Red21->Name = L"Red21";
			this->Red21->Size = System::Drawing::Size(100, 88);
			this->Red21->TabIndex = 19;
			this->Red21->TabStop = false;
			// 
			// Red11
			// 
			this->Red11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red11.BackgroundImage")));
			this->Red11->Location = System::Drawing::Point(215, 178);
			this->Red11->Name = L"Red11";
			this->Red11->Size = System::Drawing::Size(100, 88);
			this->Red11->TabIndex = 20;
			this->Red11->TabStop = false;
			// 
			// Red01
			// 
			this->Red01->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red01.BackgroundImage")));
			this->Red01->Location = System::Drawing::Point(215, 103);
			this->Red01->Name = L"Red01";
			this->Red01->Size = System::Drawing::Size(100, 83);
			this->Red01->TabIndex = 21;
			this->Red01->TabStop = false;
			// 
			// Black40
			// 
			this->Black40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black40.BackgroundImage")));
			this->Black40->Location = System::Drawing::Point(126, 419);
			this->Black40->Name = L"Black40";
			this->Black40->Size = System::Drawing::Size(100, 88);
			this->Black40->TabIndex = 22;
			this->Black40->TabStop = false;
			// 
			// Black50
			// 
			this->Black50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black50.BackgroundImage")));
			this->Black50->Location = System::Drawing::Point(126, 500);
			this->Black50->Name = L"Black50";
			this->Black50->Size = System::Drawing::Size(100, 88);
			this->Black50->TabIndex = 23;
			this->Black50->TabStop = false;
			// 
			// Black30
			// 
			this->Black30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black30.BackgroundImage")));
			this->Black30->Location = System::Drawing::Point(126, 339);
			this->Black30->Name = L"Black30";
			this->Black30->Size = System::Drawing::Size(100, 88);
			this->Black30->TabIndex = 24;
			this->Black30->TabStop = false;
			// 
			// Black20
			// 
			this->Black20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black20.BackgroundImage")));
			this->Black20->Location = System::Drawing::Point(126, 258);
			this->Black20->Name = L"Black20";
			this->Black20->Size = System::Drawing::Size(100, 88);
			this->Black20->TabIndex = 25;
			this->Black20->TabStop = false;
			// 
			// Black10
			// 
			this->Black10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black10.BackgroundImage")));
			this->Black10->Location = System::Drawing::Point(126, 178);
			this->Black10->Name = L"Black10";
			this->Black10->Size = System::Drawing::Size(100, 88);
			this->Black10->TabIndex = 26;
			this->Black10->TabStop = false;
			// 
			// Black00
			// 
			this->Black00->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black00.BackgroundImage")));
			this->Black00->Location = System::Drawing::Point(126, 103);
			this->Black00->Name = L"Black00";
			this->Black00->Size = System::Drawing::Size(100, 83);
			this->Black00->TabIndex = 27;
			this->Black00->TabStop = false;
			// 
			// Red52
			// 
			this->Red52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red52.BackgroundImage")));
			this->Red52->Location = System::Drawing::Point(309, 500);
			this->Red52->Name = L"Red52";
			this->Red52->Size = System::Drawing::Size(100, 88);
			this->Red52->TabIndex = 28;
			this->Red52->TabStop = false;
			// 
			// Red42
			// 
			this->Red42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red42.BackgroundImage")));
			this->Red42->Location = System::Drawing::Point(309, 419);
			this->Red42->Name = L"Red42";
			this->Red42->Size = System::Drawing::Size(100, 88);
			this->Red42->TabIndex = 29;
			this->Red42->TabStop = false;
			// 
			// Red32
			// 
			this->Red32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red32.BackgroundImage")));
			this->Red32->Location = System::Drawing::Point(309, 339);
			this->Red32->Name = L"Red32";
			this->Red32->Size = System::Drawing::Size(100, 88);
			this->Red32->TabIndex = 30;
			this->Red32->TabStop = false;
			// 
			// Red22
			// 
			this->Red22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red22.BackgroundImage")));
			this->Red22->Location = System::Drawing::Point(309, 258);
			this->Red22->Name = L"Red22";
			this->Red22->Size = System::Drawing::Size(100, 88);
			this->Red22->TabIndex = 31;
			this->Red22->TabStop = false;
			// 
			// Red12
			// 
			this->Red12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red12.BackgroundImage")));
			this->Red12->Location = System::Drawing::Point(309, 178);
			this->Red12->Name = L"Red12";
			this->Red12->Size = System::Drawing::Size(100, 88);
			this->Red12->TabIndex = 32;
			this->Red12->TabStop = false;
			// 
			// Red02
			// 
			this->Red02->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red02.BackgroundImage")));
			this->Red02->Location = System::Drawing::Point(309, 103);
			this->Red02->Name = L"Red02";
			this->Red02->Size = System::Drawing::Size(100, 83);
			this->Red02->TabIndex = 33;
			this->Red02->TabStop = false;
			// 
			// Red53
			// 
			this->Red53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red53.BackgroundImage")));
			this->Red53->Location = System::Drawing::Point(398, 500);
			this->Red53->Name = L"Red53";
			this->Red53->Size = System::Drawing::Size(100, 88);
			this->Red53->TabIndex = 34;
			this->Red53->TabStop = false;
			// 
			// Red43
			// 
			this->Red43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red43.BackgroundImage")));
			this->Red43->Location = System::Drawing::Point(398, 419);
			this->Red43->Name = L"Red43";
			this->Red43->Size = System::Drawing::Size(100, 88);
			this->Red43->TabIndex = 35;
			this->Red43->TabStop = false;
			// 
			// Red33
			// 
			this->Red33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red33.BackgroundImage")));
			this->Red33->Location = System::Drawing::Point(398, 339);
			this->Red33->Name = L"Red33";
			this->Red33->Size = System::Drawing::Size(100, 88);
			this->Red33->TabIndex = 36;
			this->Red33->TabStop = false;
			// 
			// Red23
			// 
			this->Red23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red23.BackgroundImage")));
			this->Red23->Location = System::Drawing::Point(398, 258);
			this->Red23->Name = L"Red23";
			this->Red23->Size = System::Drawing::Size(100, 88);
			this->Red23->TabIndex = 37;
			this->Red23->TabStop = false;
			// 
			// Red13
			// 
			this->Red13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red13.BackgroundImage")));
			this->Red13->Location = System::Drawing::Point(398, 178);
			this->Red13->Name = L"Red13";
			this->Red13->Size = System::Drawing::Size(100, 88);
			this->Red13->TabIndex = 38;
			this->Red13->TabStop = false;
			// 
			// Red03
			// 
			this->Red03->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red03.BackgroundImage")));
			this->Red03->Location = System::Drawing::Point(398, 103);
			this->Red03->Name = L"Red03";
			this->Red03->Size = System::Drawing::Size(100, 83);
			this->Red03->TabIndex = 39;
			this->Red03->TabStop = false;
			// 
			// Red54
			// 
			this->Red54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red54.BackgroundImage")));
			this->Red54->Location = System::Drawing::Point(491, 500);
			this->Red54->Name = L"Red54";
			this->Red54->Size = System::Drawing::Size(100, 88);
			this->Red54->TabIndex = 40;
			this->Red54->TabStop = false;
			// 
			// Red44
			// 
			this->Red44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red44.BackgroundImage")));
			this->Red44->Location = System::Drawing::Point(491, 419);
			this->Red44->Name = L"Red44";
			this->Red44->Size = System::Drawing::Size(100, 88);
			this->Red44->TabIndex = 41;
			this->Red44->TabStop = false;
			// 
			// Red34
			// 
			this->Red34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red34.BackgroundImage")));
			this->Red34->Location = System::Drawing::Point(491, 339);
			this->Red34->Name = L"Red34";
			this->Red34->Size = System::Drawing::Size(100, 88);
			this->Red34->TabIndex = 42;
			this->Red34->TabStop = false;
			// 
			// Red24
			// 
			this->Red24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red24.BackgroundImage")));
			this->Red24->Location = System::Drawing::Point(491, 258);
			this->Red24->Name = L"Red24";
			this->Red24->Size = System::Drawing::Size(100, 88);
			this->Red24->TabIndex = 43;
			this->Red24->TabStop = false;
			// 
			// Red14
			// 
			this->Red14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red14.BackgroundImage")));
			this->Red14->Location = System::Drawing::Point(491, 178);
			this->Red14->Name = L"Red14";
			this->Red14->Size = System::Drawing::Size(100, 88);
			this->Red14->TabIndex = 44;
			this->Red14->TabStop = false;
			// 
			// Red04
			// 
			this->Red04->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red04.BackgroundImage")));
			this->Red04->Location = System::Drawing::Point(491, 103);
			this->Red04->Name = L"Red04";
			this->Red04->Size = System::Drawing::Size(100, 83);
			this->Red04->TabIndex = 45;
			this->Red04->TabStop = false;
			// 
			// Red55
			// 
			this->Red55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red55.BackgroundImage")));
			this->Red55->Location = System::Drawing::Point(579, 500);
			this->Red55->Name = L"Red55";
			this->Red55->Size = System::Drawing::Size(100, 88);
			this->Red55->TabIndex = 46;
			this->Red55->TabStop = false;
			// 
			// Red45
			// 
			this->Red45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red45.BackgroundImage")));
			this->Red45->Location = System::Drawing::Point(579, 419);
			this->Red45->Name = L"Red45";
			this->Red45->Size = System::Drawing::Size(100, 88);
			this->Red45->TabIndex = 47;
			this->Red45->TabStop = false;
			// 
			// Red35
			// 
			this->Red35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red35.BackgroundImage")));
			this->Red35->Location = System::Drawing::Point(579, 339);
			this->Red35->Name = L"Red35";
			this->Red35->Size = System::Drawing::Size(100, 88);
			this->Red35->TabIndex = 48;
			this->Red35->TabStop = false;
			// 
			// Red25
			// 
			this->Red25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red25.BackgroundImage")));
			this->Red25->Location = System::Drawing::Point(579, 258);
			this->Red25->Name = L"Red25";
			this->Red25->Size = System::Drawing::Size(100, 88);
			this->Red25->TabIndex = 49;
			this->Red25->TabStop = false;
			// 
			// Red15
			// 
			this->Red15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red15.BackgroundImage")));
			this->Red15->Location = System::Drawing::Point(579, 178);
			this->Red15->Name = L"Red15";
			this->Red15->Size = System::Drawing::Size(100, 88);
			this->Red15->TabIndex = 50;
			this->Red15->TabStop = false;
			// 
			// Red05
			// 
			this->Red05->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red05.BackgroundImage")));
			this->Red05->Location = System::Drawing::Point(579, 103);
			this->Red05->Name = L"Red05";
			this->Red05->Size = System::Drawing::Size(100, 83);
			this->Red05->TabIndex = 51;
			this->Red05->TabStop = false;
			// 
			// Red56
			// 
			this->Red56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red56.BackgroundImage")));
			this->Red56->Location = System::Drawing::Point(665, 500);
			this->Red56->Name = L"Red56";
			this->Red56->Size = System::Drawing::Size(100, 88);
			this->Red56->TabIndex = 52;
			this->Red56->TabStop = false;
			// 
			// Red46
			// 
			this->Red46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red46.BackgroundImage")));
			this->Red46->Location = System::Drawing::Point(665, 419);
			this->Red46->Name = L"Red46";
			this->Red46->Size = System::Drawing::Size(100, 88);
			this->Red46->TabIndex = 53;
			this->Red46->TabStop = false;
			// 
			// Red36
			// 
			this->Red36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red36.BackgroundImage")));
			this->Red36->Location = System::Drawing::Point(665, 339);
			this->Red36->Name = L"Red36";
			this->Red36->Size = System::Drawing::Size(100, 88);
			this->Red36->TabIndex = 54;
			this->Red36->TabStop = false;
			// 
			// Red26
			// 
			this->Red26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red26.BackgroundImage")));
			this->Red26->Location = System::Drawing::Point(665, 258);
			this->Red26->Name = L"Red26";
			this->Red26->Size = System::Drawing::Size(100, 88);
			this->Red26->TabIndex = 55;
			this->Red26->TabStop = false;
			// 
			// Red16
			// 
			this->Red16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red16.BackgroundImage")));
			this->Red16->Location = System::Drawing::Point(665, 178);
			this->Red16->Name = L"Red16";
			this->Red16->Size = System::Drawing::Size(100, 88);
			this->Red16->TabIndex = 56;
			this->Red16->TabStop = false;
			// 
			// Red06
			// 
			this->Red06->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Red06.BackgroundImage")));
			this->Red06->Location = System::Drawing::Point(665, 103);
			this->Red06->Name = L"Red06";
			this->Red06->Size = System::Drawing::Size(100, 83);
			this->Red06->TabIndex = 57;
			this->Red06->TabStop = false;
			// 
			// Black51
			// 
			this->Black51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black51.BackgroundImage")));
			this->Black51->Location = System::Drawing::Point(215, 500);
			this->Black51->Name = L"Black51";
			this->Black51->Size = System::Drawing::Size(100, 88);
			this->Black51->TabIndex = 58;
			this->Black51->TabStop = false;
			// 
			// Black41
			// 
			this->Black41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black41.BackgroundImage")));
			this->Black41->Location = System::Drawing::Point(215, 419);
			this->Black41->Name = L"Black41";
			this->Black41->Size = System::Drawing::Size(100, 88);
			this->Black41->TabIndex = 59;
			this->Black41->TabStop = false;
			// 
			// Black31
			// 
			this->Black31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black31.BackgroundImage")));
			this->Black31->Location = System::Drawing::Point(215, 339);
			this->Black31->Name = L"Black31";
			this->Black31->Size = System::Drawing::Size(100, 88);
			this->Black31->TabIndex = 60;
			this->Black31->TabStop = false;
			// 
			// Black21
			// 
			this->Black21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black21.BackgroundImage")));
			this->Black21->Location = System::Drawing::Point(215, 258);
			this->Black21->Name = L"Black21";
			this->Black21->Size = System::Drawing::Size(100, 88);
			this->Black21->TabIndex = 61;
			this->Black21->TabStop = false;
			// 
			// Black11
			// 
			this->Black11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black11.BackgroundImage")));
			this->Black11->Location = System::Drawing::Point(215, 178);
			this->Black11->Name = L"Black11";
			this->Black11->Size = System::Drawing::Size(100, 88);
			this->Black11->TabIndex = 62;
			this->Black11->TabStop = false;
			// 
			// Black01
			// 
			this->Black01->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black01.BackgroundImage")));
			this->Black01->Location = System::Drawing::Point(215, 103);
			this->Black01->Name = L"Black01";
			this->Black01->Size = System::Drawing::Size(100, 83);
			this->Black01->TabIndex = 63;
			this->Black01->TabStop = false;
			// 
			// Black52
			// 
			this->Black52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black52.BackgroundImage")));
			this->Black52->Location = System::Drawing::Point(309, 500);
			this->Black52->Name = L"Black52";
			this->Black52->Size = System::Drawing::Size(100, 88);
			this->Black52->TabIndex = 64;
			this->Black52->TabStop = false;
			// 
			// Black42
			// 
			this->Black42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black42.BackgroundImage")));
			this->Black42->Location = System::Drawing::Point(309, 419);
			this->Black42->Name = L"Black42";
			this->Black42->Size = System::Drawing::Size(100, 88);
			this->Black42->TabIndex = 65;
			this->Black42->TabStop = false;
			// 
			// Black32
			// 
			this->Black32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black32.BackgroundImage")));
			this->Black32->Location = System::Drawing::Point(309, 339);
			this->Black32->Name = L"Black32";
			this->Black32->Size = System::Drawing::Size(100, 88);
			this->Black32->TabIndex = 66;
			this->Black32->TabStop = false;
			// 
			// Black22
			// 
			this->Black22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black22.BackgroundImage")));
			this->Black22->Location = System::Drawing::Point(309, 258);
			this->Black22->Name = L"Black22";
			this->Black22->Size = System::Drawing::Size(100, 88);
			this->Black22->TabIndex = 67;
			this->Black22->TabStop = false;
			// 
			// Black12
			// 
			this->Black12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black12.BackgroundImage")));
			this->Black12->Location = System::Drawing::Point(309, 178);
			this->Black12->Name = L"Black12";
			this->Black12->Size = System::Drawing::Size(100, 88);
			this->Black12->TabIndex = 68;
			this->Black12->TabStop = false;
			// 
			// Black02
			// 
			this->Black02->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black02.BackgroundImage")));
			this->Black02->Location = System::Drawing::Point(309, 103);
			this->Black02->Name = L"Black02";
			this->Black02->Size = System::Drawing::Size(100, 83);
			this->Black02->TabIndex = 69;
			this->Black02->TabStop = false;
			// 
			// Black53
			// 
			this->Black53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black53.BackgroundImage")));
			this->Black53->Location = System::Drawing::Point(398, 500);
			this->Black53->Name = L"Black53";
			this->Black53->Size = System::Drawing::Size(100, 88);
			this->Black53->TabIndex = 70;
			this->Black53->TabStop = false;
			// 
			// Black43
			// 
			this->Black43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black43.BackgroundImage")));
			this->Black43->Location = System::Drawing::Point(398, 419);
			this->Black43->Name = L"Black43";
			this->Black43->Size = System::Drawing::Size(100, 88);
			this->Black43->TabIndex = 71;
			this->Black43->TabStop = false;
			// 
			// Black33
			// 
			this->Black33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black33.BackgroundImage")));
			this->Black33->Location = System::Drawing::Point(398, 339);
			this->Black33->Name = L"Black33";
			this->Black33->Size = System::Drawing::Size(100, 88);
			this->Black33->TabIndex = 72;
			this->Black33->TabStop = false;
			// 
			// Black23
			// 
			this->Black23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black23.BackgroundImage")));
			this->Black23->Location = System::Drawing::Point(398, 258);
			this->Black23->Name = L"Black23";
			this->Black23->Size = System::Drawing::Size(100, 88);
			this->Black23->TabIndex = 73;
			this->Black23->TabStop = false;
			// 
			// Black13
			// 
			this->Black13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black13.BackgroundImage")));
			this->Black13->Location = System::Drawing::Point(398, 178);
			this->Black13->Name = L"Black13";
			this->Black13->Size = System::Drawing::Size(100, 88);
			this->Black13->TabIndex = 74;
			this->Black13->TabStop = false;
			// 
			// Black03
			// 
			this->Black03->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black03.BackgroundImage")));
			this->Black03->Location = System::Drawing::Point(398, 103);
			this->Black03->Name = L"Black03";
			this->Black03->Size = System::Drawing::Size(100, 83);
			this->Black03->TabIndex = 75;
			this->Black03->TabStop = false;
			// 
			// Black54
			// 
			this->Black54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black54.BackgroundImage")));
			this->Black54->Location = System::Drawing::Point(491, 500);
			this->Black54->Name = L"Black54";
			this->Black54->Size = System::Drawing::Size(100, 88);
			this->Black54->TabIndex = 76;
			this->Black54->TabStop = false;
			// 
			// Black44
			// 
			this->Black44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black44.BackgroundImage")));
			this->Black44->Location = System::Drawing::Point(491, 419);
			this->Black44->Name = L"Black44";
			this->Black44->Size = System::Drawing::Size(100, 88);
			this->Black44->TabIndex = 77;
			this->Black44->TabStop = false;
			// 
			// Black34
			// 
			this->Black34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black34.BackgroundImage")));
			this->Black34->Location = System::Drawing::Point(491, 339);
			this->Black34->Name = L"Black34";
			this->Black34->Size = System::Drawing::Size(100, 88);
			this->Black34->TabIndex = 78;
			this->Black34->TabStop = false;
			// 
			// Black24
			// 
			this->Black24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black24.BackgroundImage")));
			this->Black24->Location = System::Drawing::Point(491, 258);
			this->Black24->Name = L"Black24";
			this->Black24->Size = System::Drawing::Size(100, 88);
			this->Black24->TabIndex = 79;
			this->Black24->TabStop = false;
			// 
			// Black14
			// 
			this->Black14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black14.BackgroundImage")));
			this->Black14->Location = System::Drawing::Point(491, 178);
			this->Black14->Name = L"Black14";
			this->Black14->Size = System::Drawing::Size(100, 88);
			this->Black14->TabIndex = 80;
			this->Black14->TabStop = false;
			// 
			// Black04
			// 
			this->Black04->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black04.BackgroundImage")));
			this->Black04->Location = System::Drawing::Point(491, 103);
			this->Black04->Name = L"Black04";
			this->Black04->Size = System::Drawing::Size(100, 83);
			this->Black04->TabIndex = 81;
			this->Black04->TabStop = false;
			// 
			// Black55
			// 
			this->Black55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black55.BackgroundImage")));
			this->Black55->Location = System::Drawing::Point(579, 500);
			this->Black55->Name = L"Black55";
			this->Black55->Size = System::Drawing::Size(100, 88);
			this->Black55->TabIndex = 82;
			this->Black55->TabStop = false;
			// 
			// Black45
			// 
			this->Black45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black45.BackgroundImage")));
			this->Black45->Location = System::Drawing::Point(579, 419);
			this->Black45->Name = L"Black45";
			this->Black45->Size = System::Drawing::Size(100, 88);
			this->Black45->TabIndex = 83;
			this->Black45->TabStop = false;
			// 
			// Black35
			// 
			this->Black35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black35.BackgroundImage")));
			this->Black35->Location = System::Drawing::Point(579, 339);
			this->Black35->Name = L"Black35";
			this->Black35->Size = System::Drawing::Size(100, 88);
			this->Black35->TabIndex = 84;
			this->Black35->TabStop = false;
			// 
			// Black25
			// 
			this->Black25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black25.BackgroundImage")));
			this->Black25->Location = System::Drawing::Point(579, 258);
			this->Black25->Name = L"Black25";
			this->Black25->Size = System::Drawing::Size(100, 88);
			this->Black25->TabIndex = 85;
			this->Black25->TabStop = false;
			// 
			// Black15
			// 
			this->Black15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black15.BackgroundImage")));
			this->Black15->Location = System::Drawing::Point(579, 178);
			this->Black15->Name = L"Black15";
			this->Black15->Size = System::Drawing::Size(100, 88);
			this->Black15->TabIndex = 86;
			this->Black15->TabStop = false;
			// 
			// Black05
			// 
			this->Black05->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black05.BackgroundImage")));
			this->Black05->Location = System::Drawing::Point(579, 103);
			this->Black05->Name = L"Black05";
			this->Black05->Size = System::Drawing::Size(100, 83);
			this->Black05->TabIndex = 87;
			this->Black05->TabStop = false;
			// 
			// Black56
			// 
			this->Black56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black56.BackgroundImage")));
			this->Black56->Location = System::Drawing::Point(665, 500);
			this->Black56->Name = L"Black56";
			this->Black56->Size = System::Drawing::Size(100, 88);
			this->Black56->TabIndex = 88;
			this->Black56->TabStop = false;
			// 
			// Black46
			// 
			this->Black46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black46.BackgroundImage")));
			this->Black46->Location = System::Drawing::Point(665, 419);
			this->Black46->Name = L"Black46";
			this->Black46->Size = System::Drawing::Size(100, 88);
			this->Black46->TabIndex = 89;
			this->Black46->TabStop = false;
			// 
			// Black36
			// 
			this->Black36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black36.BackgroundImage")));
			this->Black36->Location = System::Drawing::Point(665, 339);
			this->Black36->Name = L"Black36";
			this->Black36->Size = System::Drawing::Size(100, 88);
			this->Black36->TabIndex = 90;
			this->Black36->TabStop = false;
			// 
			// Black26
			// 
			this->Black26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black26.BackgroundImage")));
			this->Black26->Location = System::Drawing::Point(665, 258);
			this->Black26->Name = L"Black26";
			this->Black26->Size = System::Drawing::Size(100, 88);
			this->Black26->TabIndex = 91;
			this->Black26->TabStop = false;
			// 
			// Black16
			// 
			this->Black16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black16.BackgroundImage")));
			this->Black16->Location = System::Drawing::Point(665, 178);
			this->Black16->Name = L"Black16";
			this->Black16->Size = System::Drawing::Size(100, 88);
			this->Black16->TabIndex = 92;
			this->Black16->TabStop = false;
			// 
			// Black06
			// 
			this->Black06->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Black06.BackgroundImage")));
			this->Black06->Location = System::Drawing::Point(665, 103);
			this->Black06->Name = L"Black06";
			this->Black06->Size = System::Drawing::Size(100, 83);
			this->Black06->TabIndex = 93;
			this->Black06->TabStop = false;
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(793, 22);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(93, 34);
			this->clear->TabIndex = 94;
			this->clear->Text = L"Clear Game";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// MyForm
			// 
			this->AccessibleName = L"col7";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(898, 623);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->Black06);
			this->Controls->Add(this->Black16);
			this->Controls->Add(this->Black26);
			this->Controls->Add(this->Black36);
			this->Controls->Add(this->Black46);
			this->Controls->Add(this->Black56);
			this->Controls->Add(this->Black05);
			this->Controls->Add(this->Black15);
			this->Controls->Add(this->Black25);
			this->Controls->Add(this->Black35);
			this->Controls->Add(this->Black45);
			this->Controls->Add(this->Black55);
			this->Controls->Add(this->Black04);
			this->Controls->Add(this->Black14);
			this->Controls->Add(this->Black24);
			this->Controls->Add(this->Black34);
			this->Controls->Add(this->Black44);
			this->Controls->Add(this->Black54);
			this->Controls->Add(this->Black03);
			this->Controls->Add(this->Black13);
			this->Controls->Add(this->Black23);
			this->Controls->Add(this->Black33);
			this->Controls->Add(this->Black43);
			this->Controls->Add(this->Black53);
			this->Controls->Add(this->Black02);
			this->Controls->Add(this->Black12);
			this->Controls->Add(this->Black22);
			this->Controls->Add(this->Black32);
			this->Controls->Add(this->Black42);
			this->Controls->Add(this->Black52);
			this->Controls->Add(this->Black01);
			this->Controls->Add(this->Black11);
			this->Controls->Add(this->Black21);
			this->Controls->Add(this->Black31);
			this->Controls->Add(this->Black41);
			this->Controls->Add(this->Black51);
			this->Controls->Add(this->Red06);
			this->Controls->Add(this->Red16);
			this->Controls->Add(this->Red26);
			this->Controls->Add(this->Red36);
			this->Controls->Add(this->Red46);
			this->Controls->Add(this->Red56);
			this->Controls->Add(this->Red05);
			this->Controls->Add(this->Red15);
			this->Controls->Add(this->Red25);
			this->Controls->Add(this->Red35);
			this->Controls->Add(this->Red45);
			this->Controls->Add(this->Red55);
			this->Controls->Add(this->Red04);
			this->Controls->Add(this->Red14);
			this->Controls->Add(this->Red24);
			this->Controls->Add(this->Red34);
			this->Controls->Add(this->Red44);
			this->Controls->Add(this->Red54);
			this->Controls->Add(this->Red03);
			this->Controls->Add(this->Red13);
			this->Controls->Add(this->Red23);
			this->Controls->Add(this->Red33);
			this->Controls->Add(this->Red43);
			this->Controls->Add(this->Red53);
			this->Controls->Add(this->Red02);
			this->Controls->Add(this->Red12);
			this->Controls->Add(this->Red22);
			this->Controls->Add(this->Red32);
			this->Controls->Add(this->Red42);
			this->Controls->Add(this->Red52);
			this->Controls->Add(this->Black00);
			this->Controls->Add(this->Black10);
			this->Controls->Add(this->Black20);
			this->Controls->Add(this->Black30);
			this->Controls->Add(this->Black50);
			this->Controls->Add(this->Black40);
			this->Controls->Add(this->Red01);
			this->Controls->Add(this->Red11);
			this->Controls->Add(this->Red21);
			this->Controls->Add(this->Red31);
			this->Controls->Add(this->Red41);
			this->Controls->Add(this->Red51);
			this->Controls->Add(this->Red00);
			this->Controls->Add(this->Red10);
			this->Controls->Add(this->Red20);
			this->Controls->Add(this->Red30);
			this->Controls->Add(this->Red40);
			this->Controls->Add(this->Red50);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->boardBox);
			this->Controls->Add(this->button7);
			this->Name = L"MyForm";
			this->Text = L"Connnect 4!";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->boardBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red00))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black00))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Red06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Black06))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(turn == true){
				 if(board[8][3] == 0){
					this->Red50->BringToFront();
					board[8][3] = 1;
					row = 8;
					col = 3;
				 }
				 else if(board[7][3] == 0){
					 this->Red40->BringToFront();
					 board[7][3] = 1;
					 row = 7;
					col = 3;
				 }
				 else if(board[6][3] == 0){
					 this->Red30->BringToFront();
					 board[6][3] = 1;
					 row = 6;
					col = 3;
				 }
				 else if(board[5][3] == 0){
					 this->Red20->BringToFront();
					 board[5][3] = 1;
					 row = 5;
					col = 3;
				 }
				 else if(board[4][3] == 0){
					 this->Red10->BringToFront();
					 board[4][3] = 1;
					 row = 4;
					col = 3;
				 }
				 else if(board[3][3] == 0){
					 this->Red00->BringToFront();
					 board[3][3] = 1;
					 row = 3;
					col = 3;
				 }
			 
			 }
			 else{

				if(board[8][3] == 0){
					this->Black50->BringToFront();
					board[8][3] = 2;
					row = 8;
					col = 3;
				 }
				 else if(board[7][3] == 0){
					 this->Black40->BringToFront();
					 board[7][3] = 2;
					 row = 7;
					col = 3;
				 }
				 else if(board[6][3] == 0){
					 this->Black30->BringToFront();
					 board[6][3] = 2;
					 row = 6;
					col = 3;
				 }
				 else if(board[5][3] == 0){
					 this->Black20->BringToFront();
					 board[5][3] = 2;
					 row = 5;
					col = 3;
				 }
				 else if(board[4][3] == 0){
					 this->Black10->BringToFront();
					 board[4][3] = 2;
					 row = 4;
					col = 3;
				 }
				 else if(board[3][3] == 0){
					 this->Black00->BringToFront();
					 board[3][3] = 2;
					 row = 3;
					col = 3;
				 }

			 }
			  
			  turn = !turn;
			 if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }


			 /*
			 for(int i = -3; i < 1; i++) {
					for(int j = -3; j < 1; j++) {
						if((board[row][col]== board[row+i][col+j]) && (board[row+i][col+j] ==board[row+i+1][col+j+1]) && (board[row+i+1][col+j+1]==board[row+i+2][col+j+2]) && (board[row+i+2][col+j+2]==board[row+i+3][col+3])){
							this->richTextBox1->Text = L"Won";
							cout << "Won" << endl;
						}
						else{
							cout << "Not Won" << endl;
						}
			}	
		}
		*/
}

		 

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(turn == true){
				 if(board[8][4] == 0){
				 this->Red51->BringToFront();
					board[8][4] = 1;
					row = 8;
					col = 4;
				 }
				 else if(board[7][4] == 0){
					 this->Red41->BringToFront();
					 board[7][4] = 1;
					 row = 7;
					col = 4;
				 }
				 else if(board[6][4] == 0){
					 this->Red31->BringToFront();
					 board[6][4] = 1;
					 row = 6;
					col = 4;
				 }
				 else if(board[5][4] == 0){
					 this->Red21->BringToFront();
					 board[5][4] = 1;
					 row = 5;
					col = 4;
				 }
				 else if(board[4][4] == 0){
					 this->Red11->BringToFront();
					 board[4][4] = 1;
					 row = 4;
					col = 4;
				 }
				 else if(board[3][4] == 0){
					 this->Red01->BringToFront();
					 board[3][4] = 1;
					 row = 3;
					col = 4;
				 }
			 
			 }
			 else{

				if(board[8][4] == 0){
					this->Black51->BringToFront();
					board[8][4] = 2;
					row = 8;
					col = 4;
				 }
				 else if(board[7][4] == 0){
					 this->Black41->BringToFront();
					 board[7][4] = 2;
					 row = 7;
					col = 4;
				 }
				 else if(board[6][4] == 0){
					 this->Black31->BringToFront();
					 board[6][4] = 2;
					 row = 6;
					col = 4;
				 }
				 else if(board[5][4] == 0){
					 this->Black21->BringToFront();
					 board[5][4] = 2;
					 row = 5;
					col = 4;
				 }
				 else if(board[4][4] == 0){
					 this->Black11->BringToFront();
					 board[4][4] = 2;
					 row = 4;
					col = 4;
				 }
				 else if(board[3][4] == 0){
					 this->Black01->BringToFront();
					 board[3][4] = 2;
					 row = 3;
					col = 4;
				 }

			 }
			 
		  turn = !turn;
			 if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			if(turn == true){
				 if(board[8][5] == 0){
					this->Red52->BringToFront();
					board[8][5] = 1;
					row = 8;
					col = 5;
				 }
				 else if(board[7][5] == 0){
					 this->Red42->BringToFront();
					 board[7][5] = 1;
					 row = 7;
					col = 5;
				 }
				 else if(board[6][5] == 0){
					 this->Red32->BringToFront();
					 board[6][5] = 1;
					 row = 6;
					col = 5;
				 }
				 else if(board[5][5] == 0){
					 this->Red22->BringToFront();
					 board[5][5] = 1;
					 row = 5;
					col = 5;
				 }
				 else if(board[4][5] == 0){
					 this->Red12->BringToFront();
					 board[4][5] = 1;
					 row = 4;
					col = 5;
				 }
				 else if(board[3][5] == 0){
					 this->Red02->BringToFront();
					 board[3][5] = 1;
					 row = 3;
					col = 5;
				 }
			 
			 }
			 else{

				if(board[8][5] == 0){
					this->Black52->BringToFront();
					board[8][5] = 2;
					row = 8;
					col = 5;

				 }
				 else if(board[7][5] == 0){
					 this->Black42->BringToFront();
					 board[7][5] = 2;
					 row = 7;
					col = 5;
				 }
				 else if(board[6][5] == 0){
					 this->Black32->BringToFront();
					 board[6][5] = 2;
					 row = 6;
					col = 5;
				 }
				 else if(board[5][5] == 0){
					 this->Black22->BringToFront();
					 board[5][5] = 2;
					 row = 5;
					col = 5;
				 }
				 else if(board[4][5] == 0){
					 this->Black12->BringToFront();
					 board[4][5] = 2;
					 row = 4;
					col = 5;
				 }
				 else if(board[3][5] == 0){
					 this->Black02->BringToFront();
					 board[3][5] = 2;
					 row = 3;
					col = 5;
				 }

			 }

			  turn = !turn;
			 if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(turn == true){
				 if(board[8][6] == 0){
					this->Red53->BringToFront();
					board[8][6] = 1;
					row = 8;
					col = 6;
				 }
				 else if(board[7][6] == 0){
					 this->Red43->BringToFront();
					 board[7][6] = 1;
					 row = 7;
					col = 6;
				 }
				 else if(board[6][6] == 0){
					 this->Red33->BringToFront();
					 board[6][6] = 1;
					 row = 6;
					col = 6;
				 }
				 else if(board[5][6] == 0){
					 this->Red23->BringToFront();
					 board[5][6] = 1;
					 row = 5;
					col = 6;
				 }
				 else if(board[4][6] == 0){
					 this->Red13->BringToFront();
					 board[4][6] = 1;
					 row = 4;
					col = 6;
				 }
				 else if(board[3][6] == 0){
					 this->Red03->BringToFront();
					 board[3][6] = 1;
					 row = 3;
					col = 6;
				 }
			 
			 }
			 else{

				if(board[8][6] == 0){
					this->Black53->BringToFront();
					board[8][6] = 2;
					row = 8;
					col = 6;
				 }
				 else if(board[7][6] == 0){
					 this->Black43->BringToFront();
					 board[7][6] = 2;
					 row = 7;
					col = 6;
				 }
				 else if(board[6][6] == 0){
					 this->Black33->BringToFront();
					 board[6][6] = 2;
					 row = 6;
					col = 6;
				 }
				 else if(board[5][6] == 0){
					 this->Black23->BringToFront();
					 board[5][6] = 2;
					 row = 5;
					col = 6;
				 }
				 else if(board[4][6] == 0){
					 this->Black13->BringToFront();
					 board[4][6] = 2;
					 row = 4;
					col = 6;
				 }
				 else if(board[3][6] == 0){
					 this->Black03->BringToFront();
					 board[3][6] = 2;
					 row = 3;
					col = 6;
				 }

			 }

			  turn = !turn;
			 if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(turn == true){
				 if(board[8][7] == 0){
					this->Red54->BringToFront();
					board[8][7] = 1;
					row = 8;
					col = 7;
				 }
				 else if(board[7][7] == 0){
					 this->Red44->BringToFront();
					 board[7][7] = 1;
					 row = 7;
					col = 7;
				 }
				 else if(board[6][7] == 0){
					 this->Red34->BringToFront();
					 board[6][7] = 1;
					 row = 6;
					col = 7;
				 }
				 else if(board[5][7] == 0){
					 this->Red24->BringToFront();
					 board[5][7] = 1;
					 row = 5;
					col = 7;
				 }
				 else if(board[4][7] == 0){
					 this->Red14->BringToFront();
					 board[4][7] = 1;
					 row = 4;
					col = 7;
				 }
				 else if(board[3][7] == 0){
					 this->Red04->BringToFront();
					 board[3][7] = 1;
					 row = 3;
					col = 7;
				 }
			 
			 }
			 else{

				if(board[8][7] == 0){
					this->Black54->BringToFront();
					board[8][7] = 2;
					row = 8;
					col = 7;
				 }
				 else if(board[7][7] == 0){
					 this->Black44->BringToFront();
					 board[7][7] = 2;
					 row = 7;
					col = 7;
				 }
				 else if(board[6][7] == 0){
					 this->Black34->BringToFront();
					 board[6][7] = 2;
					 row = 6;
					col = 7;
				 }
				 else if(board[5][7] == 0){
					 this->Black24->BringToFront();
					 board[5][7] = 2;
					 row = 5;
					col = 7;
				 }
				 else if(board[4][7] == 0){
					 this->Black14->BringToFront();
					 board[4][7] = 2;
					 row = 4;
					col = 7;
				 }
				 else if(board[3][7] == 0){
					 this->Black04->BringToFront();
					 board[3][7] = 2;
					 row = 3;
					col = 7;
				 }

			 }

			  turn = !turn;
			 if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }
		 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			if(turn == true){
				 if(board[8][8] == 0){
					this->Red55->BringToFront();
					board[8][8] = 1;
					row = 8;
					col = 8;
				 }
				 else if(board[7][8] == 0){
					 this->Red45->BringToFront();
					 board[7][8] = 1;
					 row = 7;
					col = 8;
				 }
				 else if(board[6][8] == 0){
					 this->Red35->BringToFront();
					 board[6][8] = 1;
					 row = 6;
					col = 8;
				 }
				 else if(board[5][8] == 0){
					 this->Red25->BringToFront();
					 board[5][8] = 1;
					 row = 5;
					col = 8;
				 }
				 else if(board[4][8] == 0){
					 this->Red15->BringToFront();
					 board[4][8] = 1;
					 row = 4;
					col = 8;
				 }
				 else if(board[3][8] == 0){
					 this->Red05->BringToFront();
					 board[3][8] = 1;
					 row = 3;
					col = 8;
				 }
			 
			 }
			 else{

				if(board[8][8] == 0){
					this->Black55->BringToFront();
					board[8][8] = 2;
					row = 8;
					col = 8;
				 }
				 else if(board[7][8] == 0){
					 this->Black45->BringToFront();
					 board[7][8] = 2;
					 row = 7;
					col = 8;
				 }
				 else if(board[6][8] == 0){
					 this->Black35->BringToFront();
					 board[6][8] = 2;
					 row = 6;
					col = 8;
				 }
				 else if(board[5][8] == 0){
					 this->Black25->BringToFront();
					 board[5][8] = 2;
					 row = 5;
					col = 8;
				 }
				 else if(board[4][8] == 0){
					 this->Black15->BringToFront();
					 board[4][8] = 2;
					 row = 4;
					col = 8;
				 }
				 else if(board[3][8] == 0){
					 this->Black05->BringToFront();
					 board[3][8] = 2;
					 row = 3;
					col = 8;
				 }

			 }

			  turn = !turn;
			 if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }
		 }

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(turn == true){
				 if(board[8][9] == 0){
					this->Red56->BringToFront();
					board[8][9] = 1;
					row = 8;
					col = 9;
				 }
				 else if(board[7][9] == 0){
					 this->Red46->BringToFront();
					 board[7][9] = 1;
					 row = 7;
					col = 9;
				 }
				 else if(board[6][9] == 0){
					 this->Red36->BringToFront();
					 board[6][9] = 1;
					 row = 6;
					col = 9;
				 }
				 else if(board[5][9] == 0){
					 this->Red26->BringToFront();
					 board[5][9] = 1;
					 row = 5;
					col = 9;
				 }
				 else if(board[4][9] == 0){
					 this->Red16->BringToFront();
					 board[4][9] = 1;
					 row = 4;
					col = 9;
				 }
				 else if(board[3][9] == 0){
					 this->Red06->BringToFront();
					 board[3][9] = 1;
					 row = 3;
					col = 9;
				 }
			 
			 }
			 else{

				if(board[8][9] == 0){
					this->Black56->BringToFront();
					board[8][9] = 2;
					row = 8;
					col = 9;
				 }
				 else if(board[7][9] == 0){
					 this->Black46->BringToFront();
					 board[7][9] = 2;
					 row = 7;
					col = 9;
				 }
				 else if(board[6][9] == 0){
					 this->Black36->BringToFront();
					 board[6][9] = 2;
					 row = 6;
					col = 9;
				 }
				 else if(board[5][9] == 0){
					 this->Black26->BringToFront();
					 board[5][9] = 2;
					 row = 5;
					col = 9;
				 }
				 else if(board[4][9] == 0){
					 this->Black16->BringToFront();
					 board[4][9] = 2;
					 row = 4;
					col = 9;
				 }
				 else if(board[3][9] == 0){
					 this->Black06->BringToFront();
					 board[3][9] = 2;
					 row = 3;
					col = 9;
				 }

			 }

			  turn = !turn;
			 if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }
		 }

private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e) {
			 turn = true;
			  if(turn == true){
				 this->richTextBox1->Text = L"Red's Turn";
			 }
			 else{
				this->richTextBox1->Text = L"Black's Turn"; 
			 }

			 for(int i = 0; i < 12; i++){
				for(int j=0; j < 13; j++){
					board[i][j] = 0;
				}
			}
			 this->boardBox->BringToFront();
		 }

};


}
