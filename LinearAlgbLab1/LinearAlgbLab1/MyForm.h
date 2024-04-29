#pragma once
//#include "MyForm.h"
//#include "Matrix.h"
#include "Slar.h"


namespace LinearAlgbLab1 {

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
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Button^ subtract;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ norm;
	private: System::Windows::Forms::Button^ random_generate_matrix;
	private: System::Windows::Forms::TextBox^ textBoxRows1;
	private: System::Windows::Forms::TextBox^ textBoxColls1;
	private: System::Windows::Forms::TextBox^ textBoxMin1;
	private: System::Windows::Forms::TextBox^ textBoxMax1;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxRows2;
	private: System::Windows::Forms::TextBox^ textBoxColls2;
	private: System::Windows::Forms::TextBox^ textBoxMin2;
	private: System::Windows::Forms::TextBox^ textBoxMax2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::RichTextBox^ richTextBoxResult;
	private: System::Windows::Forms::Button^ DisplayMatrices;
	private: System::Windows::Forms::TextBox^ resultSlar;
	private: System::Windows::Forms::Button^ solveSlar;
	private: System::Windows::Forms::Button^ decMatrix;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ seidel;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::RichTextBox^ textboxdisplay;
	private: System::Windows::Forms::Button^ banedMatrix;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textboxseidelresult;
	private: System::Windows::Forms::Label^ labelM;
	private: System::Windows::Forms::TextBox^ textBoxM;
	private: System::Windows::Forms::Button^ error;
	private: System::Windows::Forms::TextBox^ textBoxerror;
	private: System::Windows::Forms::TextBox^ textBoxerrorseidel;
	private: System::Windows::Forms::Button^ errorseidel;














	private: System::ComponentModel::IContainer^ components;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->add = (gcnew System::Windows::Forms::Button());
			this->subtract = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->norm = (gcnew System::Windows::Forms::Button());
			this->random_generate_matrix = (gcnew System::Windows::Forms::Button());
			this->textBoxRows1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColls1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMin1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMax1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxRows2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColls2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMin2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMax2 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->richTextBoxResult = (gcnew System::Windows::Forms::RichTextBox());
			this->DisplayMatrices = (gcnew System::Windows::Forms::Button());
			this->resultSlar = (gcnew System::Windows::Forms::TextBox());
			this->solveSlar = (gcnew System::Windows::Forms::Button());
			this->decMatrix = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->seidel = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxerror = (gcnew System::Windows::Forms::TextBox());
			this->error = (gcnew System::Windows::Forms::Button());
			this->labelM = (gcnew System::Windows::Forms::Label());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->banedMatrix = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textboxseidelresult = (gcnew System::Windows::Forms::TextBox());
			this->textboxdisplay = (gcnew System::Windows::Forms::RichTextBox());
			this->errorseidel = (gcnew System::Windows::Forms::Button());
			this->textBoxerrorseidel = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::SystemColors::Menu;
			this->add->Location = System::Drawing::Point(55, 54);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(83, 50);
			this->add->TabIndex = 0;
			this->add->Text = L"add";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			// 
			// subtract
			// 
			this->subtract->BackColor = System::Drawing::SystemColors::Menu;
			this->subtract->Location = System::Drawing::Point(160, 55);
			this->subtract->Name = L"subtract";
			this->subtract->Size = System::Drawing::Size(83, 49);
			this->subtract->TabIndex = 1;
			this->subtract->Text = L"subtract";
			this->subtract->UseVisualStyleBackColor = false;
			this->subtract->Click += gcnew System::EventHandler(this, &MyForm::subtract_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::SystemColors::Menu;
			this->multiply->Location = System::Drawing::Point(267, 54);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(82, 49);
			this->multiply->TabIndex = 2;
			this->multiply->Text = L"multiply";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// norm
			// 
			this->norm->BackColor = System::Drawing::SystemColors::Menu;
			this->norm->Location = System::Drawing::Point(383, 55);
			this->norm->Name = L"norm";
			this->norm->Size = System::Drawing::Size(82, 46);
			this->norm->TabIndex = 3;
			this->norm->Text = L"norm";
			this->norm->UseVisualStyleBackColor = false;
			this->norm->Click += gcnew System::EventHandler(this, &MyForm::norm_Click);
			// 
			// random_generate_matrix
			// 
			this->random_generate_matrix->BackColor = System::Drawing::SystemColors::Window;
			this->random_generate_matrix->Location = System::Drawing::Point(1219, 153);
			this->random_generate_matrix->Name = L"random_generate_matrix";
			this->random_generate_matrix->Size = System::Drawing::Size(132, 66);
			this->random_generate_matrix->TabIndex = 4;
			this->random_generate_matrix->Text = L"generate random";
			this->random_generate_matrix->UseVisualStyleBackColor = false;
			this->random_generate_matrix->Click += gcnew System::EventHandler(this, &MyForm::generate_matrix_Click);
			// 
			// textBoxRows1
			// 
			this->textBoxRows1->Location = System::Drawing::Point(1172, 36);
			this->textBoxRows1->Name = L"textBoxRows1";
			this->textBoxRows1->Size = System::Drawing::Size(45, 20);
			this->textBoxRows1->TabIndex = 5;
			this->textBoxRows1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxRow1_TextChanged);
			// 
			// textBoxColls1
			// 
			this->textBoxColls1->Location = System::Drawing::Point(1172, 64);
			this->textBoxColls1->Name = L"textBoxColls1";
			this->textBoxColls1->Size = System::Drawing::Size(45, 20);
			this->textBoxColls1->TabIndex = 6;
			this->textBoxColls1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxColls1_TextChanged);
			// 
			// textBoxMin1
			// 
			this->textBoxMin1->Location = System::Drawing::Point(1172, 88);
			this->textBoxMin1->Name = L"textBoxMin1";
			this->textBoxMin1->Size = System::Drawing::Size(45, 20);
			this->textBoxMin1->TabIndex = 7;
			this->textBoxMin1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMin1_TextChanged);
			// 
			// textBoxMax1
			// 
			this->textBoxMax1->Location = System::Drawing::Point(1172, 117);
			this->textBoxMax1->Name = L"textBoxMax1";
			this->textBoxMax1->Size = System::Drawing::Size(45, 20);
			this->textBoxMax1->TabIndex = 8;
			this->textBoxMax1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMax1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1128, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"rows 1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::labelRow_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1111, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"columns 1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::labelCol_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1096, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"min number 1";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::labelMinNum_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1093, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"max number 1";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::labelMaxNum_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1237, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"rows 2";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1223, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"columns 2";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1223, 91);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"min number 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1223, 120);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"max number 2";
			// 
			// textBoxRows2
			// 
			this->textBoxRows2->Location = System::Drawing::Point(1306, 37);
			this->textBoxRows2->Name = L"textBoxRows2";
			this->textBoxRows2->Size = System::Drawing::Size(45, 20);
			this->textBoxRows2->TabIndex = 17;
			this->textBoxRows2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxRows2_TextChanged);
			// 
			// textBoxColls2
			// 
			this->textBoxColls2->Location = System::Drawing::Point(1306, 64);
			this->textBoxColls2->Name = L"textBoxColls2";
			this->textBoxColls2->Size = System::Drawing::Size(45, 20);
			this->textBoxColls2->TabIndex = 18;
			this->textBoxColls2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxColls2_TextChanged);
			// 
			// textBoxMin2
			// 
			this->textBoxMin2->Location = System::Drawing::Point(1306, 88);
			this->textBoxMin2->Name = L"textBoxMin2";
			this->textBoxMin2->Size = System::Drawing::Size(45, 20);
			this->textBoxMin2->TabIndex = 19;
			this->textBoxMin2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMin2_TextChanged);
			// 
			// textBoxMax2
			// 
			this->textBoxMax2->Location = System::Drawing::Point(1306, 114);
			this->textBoxMax2->Name = L"textBoxMax2";
			this->textBoxMax2->Size = System::Drawing::Size(45, 20);
			this->textBoxMax2->TabIndex = 20;
			this->textBoxMax2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMax2_TextChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// richTextBoxResult
			// 
			this->richTextBoxResult->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBoxResult->Location = System::Drawing::Point(55, 154);
			this->richTextBoxResult->Name = L"richTextBoxResult";
			this->richTextBoxResult->Size = System::Drawing::Size(592, 340);
			this->richTextBoxResult->TabIndex = 21;
			this->richTextBoxResult->Text = L"";
			this->richTextBoxResult->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBoxResult_TextChanged);
			// 
			// DisplayMatrices
			// 
			this->DisplayMatrices->BackColor = System::Drawing::SystemColors::Window;
			this->DisplayMatrices->Location = System::Drawing::Point(1066, 153);
			this->DisplayMatrices->Name = L"DisplayMatrices";
			this->DisplayMatrices->Size = System::Drawing::Size(133, 66);
			this->DisplayMatrices->TabIndex = 22;
			this->DisplayMatrices->Text = L"display matrices";
			this->DisplayMatrices->UseVisualStyleBackColor = false;
			this->DisplayMatrices->Click += gcnew System::EventHandler(this, &MyForm::DisplayMatrices_Click);
			// 
			// resultSlar
			// 
			this->resultSlar->BackColor = System::Drawing::SystemColors::Menu;
			this->resultSlar->Location = System::Drawing::Point(15, 101);
			this->resultSlar->Multiline = true;
			this->resultSlar->Name = L"resultSlar";
			this->resultSlar->Size = System::Drawing::Size(315, 347);
			this->resultSlar->TabIndex = 23;
			this->resultSlar->TextChanged += gcnew System::EventHandler(this, &MyForm::resultSlar_TextChanged);
			// 
			// solveSlar
			// 
			this->solveSlar->BackColor = System::Drawing::Color::White;
			this->solveSlar->Location = System::Drawing::Point(15, 30);
			this->solveSlar->Name = L"solveSlar";
			this->solveSlar->Size = System::Drawing::Size(118, 47);
			this->solveSlar->TabIndex = 24;
			this->solveSlar->Text = L"solveSlar";
			this->solveSlar->UseVisualStyleBackColor = false;
			this->solveSlar->Click += gcnew System::EventHandler(this, &MyForm::solveSlar_Click);
			// 
			// decMatrix
			// 
			this->decMatrix->BackColor = System::Drawing::SystemColors::Window;
			this->decMatrix->ForeColor = System::Drawing::SystemColors::ControlText;
			this->decMatrix->Location = System::Drawing::Point(360, 241);
			this->decMatrix->Name = L"decMatrix";
			this->decMatrix->Size = System::Drawing::Size(131, 63);
			this->decMatrix->TabIndex = 25;
			this->decMatrix->Text = L"DecMatrix";
			this->decMatrix->UseVisualStyleBackColor = false;
			this->decMatrix->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(533, 106);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 53);
			this->textBox1->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(530, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"error";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(530, 225);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"decMatrix";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->Location = System::Drawing::Point(533, 241);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(257, 207);
			this->textBox2->TabIndex = 29;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(360, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 58);
			this->button1->TabIndex = 30;
			this->button1->Text = L"calculate error";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// seidel
			// 
			this->seidel->Location = System::Drawing::Point(621, 83);
			this->seidel->Name = L"seidel";
			this->seidel->Size = System::Drawing::Size(115, 63);
			this->seidel->TabIndex = 31;
			this->seidel->Text = L"seidel resolve";
			this->seidel->UseVisualStyleBackColor = true;
			this->seidel->Click += gcnew System::EventHandler(this, &MyForm::seidel_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(932, 672);
			this->tabControl1->TabIndex = 32;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->add);
			this->tabPage1->Controls->Add(this->multiply);
			this->tabPage1->Controls->Add(this->subtract);
			this->tabPage1->Controls->Add(this->norm);
			this->tabPage1->Controls->Add(this->richTextBoxResult);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(924, 646);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"lab1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Location = System::Drawing::Point(115, 25);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(8, 9);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(0, 0);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(0, 0);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->solveSlar);
			this->tabPage2->Controls->Add(this->resultSlar);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->decMatrix);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(924, 646);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"lab2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->textBoxerrorseidel);
			this->tabPage5->Controls->Add(this->errorseidel);
			this->tabPage5->Controls->Add(this->textBoxerror);
			this->tabPage5->Controls->Add(this->error);
			this->tabPage5->Controls->Add(this->labelM);
			this->tabPage5->Controls->Add(this->textBoxM);
			this->tabPage5->Controls->Add(this->banedMatrix);
			this->tabPage5->Controls->Add(this->textBox4);
			this->tabPage5->Controls->Add(this->textboxseidelresult);
			this->tabPage5->Controls->Add(this->seidel);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(924, 646);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"lab3";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// textBoxerror
			// 
			this->textBoxerror->Location = System::Drawing::Point(174, 494);
			this->textBoxerror->Multiline = true;
			this->textBoxerror->Name = L"textBoxerror";
			this->textBoxerror->Size = System::Drawing::Size(100, 24);
			this->textBoxerror->TabIndex = 38;
			// 
			// error
			// 
			this->error->Location = System::Drawing::Point(93, 495);
			this->error->Name = L"error";
			this->error->Size = System::Drawing::Size(75, 23);
			this->error->TabIndex = 37;
			this->error->Text = L"error";
			this->error->UseVisualStyleBackColor = true;
			this->error->Click += gcnew System::EventHandler(this, &MyForm::errorbanClick);
			// 
			// labelM
			// 
			this->labelM->AutoSize = true;
			this->labelM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelM->Location = System::Drawing::Point(61, 110);
			this->labelM->Name = L"labelM";
			this->labelM->Size = System::Drawing::Size(26, 24);
			this->labelM->TabIndex = 36;
			this->labelM->Text = L"m";
			this->labelM->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBoxM
			// 
			this->textBoxM->Location = System::Drawing::Point(93, 105);
			this->textBoxM->Multiline = true;
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(52, 32);
			this->textBoxM->TabIndex = 35;
			this->textBoxM->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxM_TextChanged);
			// 
			// banedMatrix
			// 
			this->banedMatrix->Location = System::Drawing::Point(166, 83);
			this->banedMatrix->Name = L"banedMatrix";
			this->banedMatrix->Size = System::Drawing::Size(125, 63);
			this->banedMatrix->TabIndex = 34;
			this->banedMatrix->Text = L"string";
			this->banedMatrix->UseVisualStyleBackColor = true;
			this->banedMatrix->Click += gcnew System::EventHandler(this, &MyForm::banedMatrix_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox4->Location = System::Drawing::Point(70, 189);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(314, 275);
			this->textBox4->TabIndex = 33;
			// 
			// textboxseidelresult
			// 
			this->textboxseidelresult->BackColor = System::Drawing::SystemColors::Menu;
			this->textboxseidelresult->Location = System::Drawing::Point(516, 189);
			this->textboxseidelresult->Multiline = true;
			this->textboxseidelresult->Name = L"textboxseidelresult";
			this->textboxseidelresult->Size = System::Drawing::Size(323, 275);
			this->textboxseidelresult->TabIndex = 32;
			this->textboxseidelresult->TextChanged += gcnew System::EventHandler(this, &MyForm::textboxseidelresult_TextChanged);
			// 
			// textboxdisplay
			// 
			this->textboxdisplay->Location = System::Drawing::Point(1041, 231);
			this->textboxdisplay->Name = L"textboxdisplay";
			this->textboxdisplay->Size = System::Drawing::Size(340, 325);
			this->textboxdisplay->TabIndex = 33;
			this->textboxdisplay->Text = L"";
			this->textboxdisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textboxdisplay_TextChanged);
			// 
			// errorseidel
			// 
			this->errorseidel->Location = System::Drawing::Point(568, 495);
			this->errorseidel->Name = L"errorseidel";
			this->errorseidel->Size = System::Drawing::Size(75, 23);
			this->errorseidel->TabIndex = 39;
			this->errorseidel->Text = L"error";
			this->errorseidel->UseVisualStyleBackColor = true;
			this->errorseidel->Click += gcnew System::EventHandler(this, &MyForm::errorseidel_Click);
			// 
			// textBoxerrorseidel
			// 
			this->textBoxerrorseidel->Location = System::Drawing::Point(649, 495);
			this->textBoxerrorseidel->Multiline = true;
			this->textBoxerrorseidel->Name = L"textBoxerrorseidel";
			this->textBoxerrorseidel->Size = System::Drawing::Size(105, 22);
			this->textBoxerrorseidel->TabIndex = 40;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 717);
			this->Controls->Add(this->textboxdisplay);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->DisplayMatrices);
			this->Controls->Add(this->textBoxMax2);
			this->Controls->Add(this->textBoxMin2);
			this->Controls->Add(this->textBoxColls2);
			this->Controls->Add(this->textBoxRows2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxMax1);
			this->Controls->Add(this->textBoxMin1);
			this->Controls->Add(this->textBoxColls1);
			this->Controls->Add(this->textBoxRows1);
			this->Controls->Add(this->random_generate_matrix);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
			Matrix^ matrix2 = gcnew Matrix("matrix2.txt");
			Matrix^ sumMatrix = matrix1 + matrix2;
			String^ resultMatrix = sumMatrix->ToString();
			String^ currentText = richTextBoxResult->Text;
			richTextBoxResult->Text = currentText + "\nResult Matrix of addition:\n" + resultMatrix;
			sumMatrix->WriteToFile("SumMatrix.txt");
		}
		catch (Exception^ ex)
		{
			richTextBoxResult->Text = "Error: " + ex->Message;
		}
	}

	private: System::Void norm_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
		double norm = matrix1->MaximumAbsoluteNorm(); 
		String^ currentText = richTextBoxResult->Text;
		String^ result = currentText + "norm of the Matrix:\n" + norm;
		richTextBoxResult->Text = result;
		StreamWriter^ sw = gcnew StreamWriter("Norm.txt");
		sw->WriteLine(norm);
		sw->Close();
	}

	private: System::Void generate_matrix_Click(System::Object^ sender, System::EventArgs^ e)
	{
		bool isError = false;
		if (String::IsNullOrEmpty(textBoxRows1->Text))	isError = true;
		if (String::IsNullOrEmpty(textBoxColls1->Text))	isError = true;
		if (String::IsNullOrEmpty(textBoxRows2->Text))	isError = true; 
		if (String::IsNullOrEmpty(textBoxColls2->Text))	isError = true; 
		if (String::IsNullOrEmpty(textBoxMin1->Text))	isError = true; 
		if (String::IsNullOrEmpty(textBoxMax1->Text))	isError = true; 
		if (String::IsNullOrEmpty(textBoxMin2->Text))	isError = true; 
		if (String::IsNullOrEmpty(textBoxMax2->Text))	isError = true; 
		if (isError)
		{
			textboxdisplay->Text = " you must specify the rows, columns, min number and max number";
			return;
		}
			
		int rows1 = System::Convert::ToInt32(textBoxRows1->Text);
		int cols1 = System::Convert::ToInt32(textBoxColls1->Text);
		int rows2 = System::Convert::ToInt32(textBoxRows2->Text);
		int cols2 = System::Convert::ToInt32(textBoxColls2->Text);
		double min1 = System::Convert::ToDouble(textBoxMin1->Text);
		double max1 = System::Convert::ToDouble(textBoxMax1->Text);
		double min2 = System::Convert::ToDouble(textBoxMin2->Text);
		double max2 = System::Convert::ToDouble(textBoxMax2->Text);
		
		if (min1 > max1 || min2 > max2)
		{
			textboxdisplay->Text = "Error: your min number is bigger than max number, try again";
			return;
		}
		
		Matrix^ matrix1 = gcnew Matrix(rows1, cols1);
		Matrix^ matrix2 = gcnew Matrix(rows2, cols2);

		matrix1->Randomize1(min1, max1);
		matrix2->Randomize2(min2, max2);

		String^ result =  "First Matrix:\n" + matrix1->ToString() + "\nSecond Matrix:\n" + matrix2->ToString();
		textboxdisplay->Text = result;

		matrix1->WriteToFile("Matrix1.txt"); 
		matrix2->WriteToFile("Matrix2.txt");
	}

	private: System::Void subtract_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
			Matrix^ matrix2 = gcnew Matrix("matrix2.txt");
			//Matrix^ subMatrix = matrix1 - matrix2;
			String^ currentText = richTextBoxResult->Text;
			//String^ result = currentText + "\nResult Matrix of subtraction:\n" + subMatrix->ToString();
			//richTextBoxResult->Text = result;
			//subMatrix->WriteToFile("SubMatrix.txt");
		}
		catch (Exception^ ex)
		{
			richTextBoxResult->Text = "Error: " + ex->Message;
		}
	}

	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		try
		{
			Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
			Matrix^ matrix2 = gcnew Matrix("matrix2.txt");
			Matrix^ multMatrix = matrix1 * matrix2;
			String^ currentText = richTextBoxResult->Text;
			String^ result = currentText + "\nResult Matrix of multiplication:\n" + multMatrix->ToString();
			richTextBoxResult->Text = result;
			multMatrix->WriteToFile("MultMatrix.txt");
		}
		catch (Exception^ ex)
		{
			richTextBoxResult->Text = "Error: " + ex->Message;
		}
	}

	private: System::Void DisplayMatrices_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
		Matrix^ matrix2 = gcnew Matrix("matrix2.txt");
		String^ result = " \nFirst Matrix:\n" + matrix1->ToString() + "\nSecond Matrix:\n" + matrix2->ToString();
		textboxdisplay->Text = result;

	}


    private: System::Void textBoxRow1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
    private: System::Void textBoxColls1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
    private: System::Void textBoxMin1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void textBoxMax1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void labelRow_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelCol_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelMinNum_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelMaxNum_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxMax2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void textBoxRows2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxColls2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxMin2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBoxResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void resultSlar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void solveSlar_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		try
		{
			Matrix^ matrixA = gcnew Matrix("Matrix1.txt"); 
			Matrix^ vectorB = gcnew Matrix("Matrix2.txt"); 

			Slar^ slar = gcnew Slar(matrixA, vectorB);
			slar->ForwardElimination();
			slar->BackwardSubstitution();

			Matrix^ solution = slar->GetX();

			solution->WriteToFile("x.txt");
			String^ result =  solution->ToStringX();
			resultSlar->Text = result;
		}
		catch (Exception^ ex)
		{
			resultSlar->Text = "Error: " + ex->Message;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Matrix^ matrixA = gcnew Matrix("Matrix1.txt");
		Matrix^ vectorB = gcnew Matrix("Matrix2.txt"); 

		Slar^ slar = gcnew Slar(matrixA, vectorB);

		slar->LUdecomposition();

		if (slar->GetL() == nullptr || slar->GetU() == nullptr)
		{
			Console::WriteLine("LU decomposition has not been performed yet.");
			return;
		}
		String^ output = "Matrix L:\r\n" + FormatMatrix(slar->GetL()) + "\r\n\r\nMatrix U:\r\n" + FormatMatrix(slar->GetU());

		textBox2->Text = output;

		Console::WriteLine("Matrix L:");
		Console::WriteLine(slar->GetL()->ToString());

		Console::WriteLine("Matrix U:");
		Console::WriteLine(slar->GetU()->ToString());
	
	}
		   String^ FormatMatrix(Matrix^ matrix)
		   {
			   String^ formattedMatrix = "";
			   for (int i = 0; i < matrix->GetRows(); i++)
			   {
				   for (int j = 0; j < matrix->GetCols(); j++)
				   {
					   formattedMatrix += matrix->GetValue(i, j).ToString("F2") + "\t"; 
				   }
				   formattedMatrix += "\r\n";
			   }
			   return formattedMatrix;
		   }

   private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
   {
	   Matrix^ matrixA = gcnew Matrix("Matrix1.txt");
	   Matrix^ vectorB = gcnew Matrix("Matrix2.txt");
	   Matrix^ vectorX = gcnew Matrix("x.txt");
	   Slar^ slar = gcnew Slar(matrixA, vectorB);

	   double relativeError = slar->RelativeError(matrixA, vectorB, vectorX);

	   String^ output = "Relative Error: " + relativeError.ToString("F6");

	   textBox1->Text = output;

   }



private: System::Void seidel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
	 
	Matrix^ matrixA = gcnew Matrix("Matrix1.txt");
	Matrix^ vectorB = gcnew Matrix("Matrix2.txt");
	Matrix^ vectorX = gcnew Matrix("x.txt");
	Slar^ slar1 = gcnew Slar(matrixA, vectorB);
	 
	int maxIterations = 100;
	double epsilon = 0.001;
	slar1->SeidelMethod(maxIterations, epsilon);
	 
		
		String^ result = Slar::ReadResultFromFile("seidel.txt");

		textboxseidelresult->Text = result;
	}
	catch (Exception^ ex)
	{
		// Відображення помилки у textBox1
		textboxseidelresult->Text = "Error: " + ex->Message;
	}
}


private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textboxdisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textboxseidelresult_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxM_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void banedMatrix_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{

		Matrix^ matrixA = gcnew Matrix("Matrix1.txt");
		Matrix^ vectorB = gcnew Matrix("Matrix2.txt");
		Matrix^ vectorX = gcnew Matrix("x.txt");
		Slar^ slar1 = gcnew Slar(matrixA, vectorB);
		System::String^ inputText = textBoxM->Text;
		int m = System::Convert::ToInt32(inputText);
		bool isError = false;
		if (String::IsNullOrEmpty(textBoxM->Text))	isError = true;
		
		if (isError)
		{
			textboxdisplay->Text = " you must specify the rows, columns, min number and max number";
			return;
		}

		int n = matrixA->GetRows();
		matrixA = slar1->FromSymmetricBandMatrix(matrixA, m);

		textBox4->Text = System::Convert::ToString(matrixA);

		slar1->GaussianEliminationWithBandMatrixVector(matrixA, vectorB, m);


		String^ result = Slar::ReadResultFromFile("vectormatrixresult.txt");

		textBox4->Text = result;
	}
	catch (Exception^ ex)
	{
		// Відображення помилки у textBox1
		textBox4->Text = "Error: " + ex->Message;
	}
}
private: System::Void errorbanClick(System::Object^ sender, System::EventArgs^ e) 
{

	Matrix^ matrixA = gcnew Matrix("Matrix1.txt");
	Matrix^ vectorB = gcnew Matrix("Matrix2.txt");
	Matrix^ vectorX = gcnew Matrix("x.txt");
	Slar^ slar1 = gcnew Slar(matrixA, vectorB);
	System::String^ inputText = textBoxM->Text;
	int m = System::Convert::ToInt32(inputText);
	double res = slar1->CalculateError(m);
	textBoxerror->Text = System::Convert::ToString(res);

}
private: System::Void errorseidel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Matrix^ matrixA = gcnew Matrix("Matrix1.txt");
	Matrix^ vectorB = gcnew Matrix("Matrix2.txt");
	Matrix^ vectorX = gcnew Matrix("x.txt");
	Slar^ slar1 = gcnew Slar(matrixA, vectorB);
	double res = slar1->RelativeError(matrixA, vectorB, vectorX);
	textBoxerrorseidel->Text = System::Convert::ToString(res);

}
};
}
