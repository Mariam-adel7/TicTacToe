#pragma once

namespace tictac {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ b2;




	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ b9;


	private: System::Windows::Forms::Button^ b8;

	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ b6;


	private: System::Windows::Forms::Button^ b5;


	private: System::Windows::Forms::Button^ b1;

	private: System::Windows::Forms::Button^ b3;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ b11;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1527, 160);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(522, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(324, 74);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Tic Tac Toe";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::CadetBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(373, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(846, 87);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Welcome To The Game";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 168);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1528, 599);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->b7);
			this->panel2->Controls->Add(this->b9);
			this->panel2->Controls->Add(this->b8);
			this->panel2->Controls->Add(this->b4);
			this->panel2->Controls->Add(this->b6);
			this->panel2->Controls->Add(this->b5);
			this->panel2->Controls->Add(this->b1);
			this->panel2->Controls->Add(this->b3);
			this->panel2->Controls->Add(this->b2);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(760, 578);
			this->panel2->TabIndex = 0;
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::Color::White;
			this->b7->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b7->Location = System::Drawing::Point(0, 385);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(247, 185);
			this->b7->TabIndex = 11;
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::b7_Click);
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::Color::White;
			this->b9->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b9->Location = System::Drawing::Point(506, 385);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(250, 185);
			this->b9->TabIndex = 10;
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::b9_Click);
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::Color::White;
			this->b8->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b8->Location = System::Drawing::Point(253, 385);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(247, 185);
			this->b8->TabIndex = 9;
			this->b8->UseVisualStyleBackColor = false;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::b8_Click);
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::Color::White;
			this->b4->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b4->Location = System::Drawing::Point(0, 194);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(247, 185);
			this->b4->TabIndex = 8;
			this->b4->UseVisualStyleBackColor = false;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::b4_Click);
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::Color::White;
			this->b6->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b6->Location = System::Drawing::Point(506, 194);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(250, 185);
			this->b6->TabIndex = 7;
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::b6_Click);
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::Color::White;
			this->b5->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b5->Location = System::Drawing::Point(253, 194);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(247, 185);
			this->b5->TabIndex = 6;
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::b5_Click);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::White;
			this->b1->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b1->Location = System::Drawing::Point(0, 3);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(247, 185);
			this->b1->TabIndex = 5;
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::b1_Click);
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::Color::White;
			this->b3->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b3->Location = System::Drawing::Point(506, 3);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(250, 185);
			this->b3->TabIndex = 4;
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::b3_Click);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::Color::White;
			this->b2->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b2->Location = System::Drawing::Point(253, 3);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(247, 185);
			this->b2->TabIndex = 3;
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::b2_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(769, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(742, 578);
			this->panel3->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->b11);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Location = System::Drawing::Point(27, 279);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(697, 291);
			this->panel5->TabIndex = 2;
			// 
			// b11
			// 
			this->b11->BackColor = System::Drawing::Color::White;
			this->b11->Font = (gcnew System::Drawing::Font(L"Segoe Script", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b11->ForeColor = System::Drawing::Color::CadetBlue;
			this->b11->Location = System::Drawing::Point(18, 145);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(659, 133);
			this->b11->TabIndex = 8;
			this->b11->Text = L"NEW GAME";
			this->b11->UseVisualStyleBackColor = false;
			this->b11->Click += gcnew System::EventHandler(this, &MyForm::b11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe Script", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::CadetBlue;
			this->button10->Location = System::Drawing::Point(18, 11);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(659, 128);
			this->button10->TabIndex = 7;
			this->button10->Text = L"RESET";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(27, 20);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(697, 253);
			this->panel4->TabIndex = 1;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::CadetBlue;
			this->label3->Location = System::Drawing::Point(326, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(335, 100);
			this->label3->TabIndex = 3;
			this->label3->Text = L"0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::CadetBlue;
			this->label4->Location = System::Drawing::Point(326, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(335, 100);
			this->label4->TabIndex = 2;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::CadetBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(359, 106);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::CadetBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(359, 108);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(374, 309);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(798, 135);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(1555, 1055);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		Boolean checker;
		int pluseone = 0;
		void Enable_false()
		{
			b1->Enabled = false;
			b2->Enabled = false;
			b3->Enabled = false;
			b4->Enabled = false;
			b5->Enabled = false;
			b6->Enabled = false;
			b7->Enabled = false;
			b8->Enabled = false;
			b9->Enabled = false;
		}
		void score()
		{

			if (b1->Text == "X" && b2->Text == "X" && b3->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::PowderBlue;
				b2->BackColor = System::Drawing::Color::PowderBlue;
				b3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b1->Text == "X" && b4->Text == "X" && b7->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::PowderBlue;
				b4->BackColor = System::Drawing::Color::PowderBlue;
				b7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b4->Text == "X" && b5->Text == "X" && b6->Text == "X")
			{
				b4->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b7->Text == "X" && b8->Text == "X" && b9->Text == "X")
			{
				b7->BackColor = System::Drawing::Color::PowderBlue;
				b8->BackColor = System::Drawing::Color::PowderBlue;
				b9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b2->Text == "X" && b5->Text == "X" && b8->Text == "X")
			{
				b2->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b8->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b3->Text == "X" && b6->Text == "X" && b9->Text == "X")
			{
				b3->BackColor = System::Drawing::Color::PowderBlue;
				b6->BackColor = System::Drawing::Color::PowderBlue;
				b9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b1->Text == "X" && b5->Text == "X" && b9->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b3->Text == "X" && b5->Text == "X" && b7->Text == "X")
			{
				b3->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label4->Text);
				label4->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			//oooooooooooooooooooooo
			if (b1->Text == "O" && b2->Text == "O" && b3->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::PowderBlue;
				b2->BackColor = System::Drawing::Color::PowderBlue;
				b3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b1->Text == "O" && b4->Text == "O" && b7->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::PowderBlue;
				b4->BackColor = System::Drawing::Color::PowderBlue;
				b7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b4->Text == "O" && b5->Text == "O" && b6->Text == "O")
			{
				b4->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b7->Text == "O" && b8->Text == "O" && b9->Text == "O")
			{
				b7->BackColor = System::Drawing::Color::PowderBlue;
				b8->BackColor = System::Drawing::Color::PowderBlue;
				b9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b2->Text == "O" && b5->Text == "O" && b8->Text == "O")
			{
				b2->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b8->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b3->Text == "O" && b6->Text == "O" && b9->Text == "O")
			{
				b3->BackColor = System::Drawing::Color::PowderBlue;
				b6->BackColor = System::Drawing::Color::PowderBlue;
				b9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b1->Text == "O" && b5->Text == "O" && b9->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}
			if (b3->Text == "O" && b5->Text == "O" && b7->Text == "O")
			{
				b3->BackColor = System::Drawing::Color::PowderBlue;
				b5->BackColor = System::Drawing::Color::PowderBlue;
				b7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pluseone = int ::Parse(label3->Text);
				label3->Text = Convert::ToString(pluseone + 1);
				Enable_false();
			}

		}


#pragma endregion
	private: System::Void flowLayoutPanel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b1->Text = "X";
			checker = true;
		}
		else
		{
			b1->Text = "O";
			checker = false;

		}
		score();
		b1->Enabled = false;
	}
	private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b2->Text = "X";
			checker = true;
		}
		else
		{
			b2->Text = "O";
			checker = false;

		}
		score();
		b2->Enabled = false;
	}
	private: System::Void b3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b3->Text = "X";
			checker = true;
		}
		else
		{
			b3->Text = "O";
			checker = false;

		}
		score();
		b3->Enabled = false;
	}
	private: System::Void b4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b4->Text = "X";
			checker = true;
		}
		else
		{
			b4->Text = "O";
			checker = false;

		}
		score();
		b4->Enabled = false;

	}
	private: System::Void b5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b5->Text = "X";
			checker = true;
		}
		else
		{
			b5->Text = "O";
			checker = false;

		}
		score();
		b5->Enabled = false;
	}
	private: System::Void b6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b6->Text = "X";
			checker = true;
		}
		else
		{
			b6->Text = "O";
			checker = false;

		}
		score();
		b6->Enabled = false;
	}

	private: System::Void b7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b7->Text = "X";
			checker = true;
		}
		else
		{
			b7->Text = "O";
			checker = false;

		}
		score();
		b7->Enabled = false;
	}
	private: System::Void b8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			b8->Text = "X";
			checker = true;
		}
		else
		{
			b8->Text = "O";
			checker = false;

		}
		score();
		b8->Enabled = false;
	}
	private: System::Void b9_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			b9->Text = "X";
			checker = true;
		}
		else
		{
			b9->Text = "O";
			checker = false;

		}
		score();
		b9->Enabled = false;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		b1->Enabled = true;
		b2->Enabled = true;
		b3->Enabled = true;
		b4->Enabled = true;
		b5->Enabled = true;
		b6->Enabled = true;
		b7->Enabled = true;
		b8->Enabled = true;
		b9->Enabled = true;

		b1->Text = "";
		b2->Text = "";
		b3->Text = "";
		b4->Text = "";
		b5->Text = "";
		b6->Text = "";
		b7->Text = "";
		b8->Text = "";
		b9->Text = "";
		button10->Enabled = true;
		b1->BackColor = System::Drawing::Color::WhiteSmoke;
		b2->BackColor = System::Drawing::Color::WhiteSmoke;
		b3->BackColor = System::Drawing::Color::WhiteSmoke;
		b4->BackColor = System::Drawing::Color::WhiteSmoke;
		b5->BackColor = System::Drawing::Color::WhiteSmoke;
		b6->BackColor = System::Drawing::Color::WhiteSmoke;
		b7->BackColor = System::Drawing::Color::WhiteSmoke;
		b8->BackColor = System::Drawing::Color::WhiteSmoke;
		b9->BackColor = System::Drawing::Color::WhiteSmoke;
	}
	private: System::Void b11_Click(System::Object^ sender, System::EventArgs^ e) {
		b1->Enabled = true;
		b2->Enabled = true;
		b3->Enabled = true;
		b4->Enabled = true;
		b5->Enabled = true;
		b6->Enabled = true;
		b7->Enabled = true;
		b8->Enabled = true;
		b9->Enabled = true;

		b1->Text = "";
		b2->Text = "";
		b3->Text = "";
		b4->Text = "";
		b5->Text = "";
		b6->Text = "";
		b7->Text = "";
		b8->Text = "";
		b9->Text = "";
		label4->Text = "0";
		label3->Text = "0";
		b1->BackColor = System::Drawing::Color::WhiteSmoke;
		b2->BackColor = System::Drawing::Color::WhiteSmoke;
		b3->BackColor = System::Drawing::Color::WhiteSmoke;
		b4->BackColor = System::Drawing::Color::WhiteSmoke;
		b5->BackColor = System::Drawing::Color::WhiteSmoke;
		b6->BackColor = System::Drawing::Color::WhiteSmoke;
		b7->BackColor = System::Drawing::Color::WhiteSmoke;
		b8->BackColor = System::Drawing::Color::WhiteSmoke;
		b9->BackColor = System::Drawing::Color::WhiteSmoke;
	}
	};
}

