#pragma once
#include "MyForm.h"
#include "Matrix.h"

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::SystemColors::Menu;
			this->add->Location = System::Drawing::Point(23, 35);
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
			this->subtract->Location = System::Drawing::Point(23, 91);
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
			this->multiply->Location = System::Drawing::Point(128, 36);
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
			this->norm->Location = System::Drawing::Point(128, 94);
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
			this->random_generate_matrix->Location = System::Drawing::Point(650, 33);
			this->random_generate_matrix->Name = L"random_generate_matrix";
			this->random_generate_matrix->Size = System::Drawing::Size(132, 66);
			this->random_generate_matrix->TabIndex = 4;
			this->random_generate_matrix->Text = L"generate random";
			this->random_generate_matrix->UseVisualStyleBackColor = false;
			this->random_generate_matrix->Click += gcnew System::EventHandler(this, &MyForm::generate_matrix_Click);
			// 
			// textBoxRows1
			// 
			this->textBoxRows1->Location = System::Drawing::Point(439, 33);
			this->textBoxRows1->Name = L"textBoxRows1";
			this->textBoxRows1->Size = System::Drawing::Size(45, 20);
			this->textBoxRows1->TabIndex = 5;
			this->textBoxRows1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxRow1_TextChanged);
			// 
			// textBoxColls1
			// 
			this->textBoxColls1->Location = System::Drawing::Point(439, 59);
			this->textBoxColls1->Name = L"textBoxColls1";
			this->textBoxColls1->Size = System::Drawing::Size(45, 20);
			this->textBoxColls1->TabIndex = 6;
			this->textBoxColls1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxColls1_TextChanged);
			// 
			// textBoxMin1
			// 
			this->textBoxMin1->Location = System::Drawing::Point(439, 91);
			this->textBoxMin1->Name = L"textBoxMin1";
			this->textBoxMin1->Size = System::Drawing::Size(45, 20);
			this->textBoxMin1->TabIndex = 7;
			this->textBoxMin1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMin1_TextChanged);
			// 
			// textBoxMax1
			// 
			this->textBoxMax1->Location = System::Drawing::Point(439, 124);
			this->textBoxMax1->Name = L"textBoxMax1";
			this->textBoxMax1->Size = System::Drawing::Size(45, 20);
			this->textBoxMax1->TabIndex = 8;
			this->textBoxMax1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMax1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(395, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"rows 1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::labelRow_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(378, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"columns 1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::labelCol_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(363, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"min number 1";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::labelMinNum_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(360, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"max number 1";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::labelMaxNum_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(515, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"rows 2";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(498, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"columns 2";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(498, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"min number 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(495, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"max number 2";
			// 
			// textBoxRows2
			// 
			this->textBoxRows2->Location = System::Drawing::Point(578, 33);
			this->textBoxRows2->Name = L"textBoxRows2";
			this->textBoxRows2->Size = System::Drawing::Size(45, 20);
			this->textBoxRows2->TabIndex = 17;
			this->textBoxRows2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxRows2_TextChanged);
			// 
			// textBoxColls2
			// 
			this->textBoxColls2->Location = System::Drawing::Point(578, 59);
			this->textBoxColls2->Name = L"textBoxColls2";
			this->textBoxColls2->Size = System::Drawing::Size(45, 20);
			this->textBoxColls2->TabIndex = 18;
			this->textBoxColls2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxColls2_TextChanged);
			// 
			// textBoxMin2
			// 
			this->textBoxMin2->Location = System::Drawing::Point(578, 91);
			this->textBoxMin2->Name = L"textBoxMin2";
			this->textBoxMin2->Size = System::Drawing::Size(45, 20);
			this->textBoxMin2->TabIndex = 19;
			this->textBoxMin2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMin2_TextChanged);
			// 
			// textBoxMax2
			// 
			this->textBoxMax2->Location = System::Drawing::Point(578, 124);
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
			this->richTextBoxResult->Location = System::Drawing::Point(47, 224);
			this->richTextBoxResult->Name = L"richTextBoxResult";
			this->richTextBoxResult->Size = System::Drawing::Size(461, 292);
			this->richTextBoxResult->TabIndex = 21;
			this->richTextBoxResult->Text = L"";
			this->richTextBoxResult->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBoxResult_TextChanged);
			// 
			// DisplayMatrices
			// 
			this->DisplayMatrices->BackColor = System::Drawing::SystemColors::Window;
			this->DisplayMatrices->Location = System::Drawing::Point(650, 113);
			this->DisplayMatrices->Name = L"DisplayMatrices";
			this->DisplayMatrices->Size = System::Drawing::Size(132, 62);
			this->DisplayMatrices->TabIndex = 22;
			this->DisplayMatrices->Text = L"display matrices";
			this->DisplayMatrices->UseVisualStyleBackColor = false;
			this->DisplayMatrices->Click += gcnew System::EventHandler(this, &MyForm::DisplayMatrices_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 601);
			this->Controls->Add(this->DisplayMatrices);
			this->Controls->Add(this->richTextBoxResult);
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
			this->Controls->Add(this->norm);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->subtract);
			this->Controls->Add(this->add);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
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

			// Отримуємо поточний текст у richTextBoxResult
			String^ currentText = richTextBoxResult->Text;

			// Додаємо рядок з результатом матриці до поточного тексту
			richTextBoxResult->Text = currentText + "\nResult Matrix of addition:\n" + resultMatrix;
			sumMatrix->WriteToFile("SumMatrix.txt");
		}
		catch (Exception^ ex)
		{
			// Виведення повідомлення про помилку у текстбокс
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
			richTextBoxResult->Text = " you must specify the rows, columns, min number and max number";
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
			richTextBoxResult->Text = "Error: your min number is bigger than max number, try again";
			return;
		}
		Matrix^ matrix1 = gcnew Matrix(rows1, cols1);
		Matrix^ matrix2 = gcnew Matrix(rows2, cols2);

		matrix1->Randomize1(min1, max1);
		matrix2->Randomize2(min2, max2);

		String^ result =  "First Matrix:\n" + matrix1->ToString() + "\nSecond Matrix:\n" + matrix2->ToString();
		richTextBoxResult->Text = result;

		matrix1->WriteToFile("Matrix1.txt"); 
		matrix2->WriteToFile("Matrix2.txt");
	}

	private: System::Void subtract_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
		Matrix^ matrix2 = gcnew Matrix("matrix2.txt");
		Matrix^ subMatrix = matrix1 - matrix2;
		String^ currentText = richTextBoxResult->Text;
		String^ result = currentText + "\nResult Matrix of subtraction:\n" + subMatrix->ToString();

		richTextBoxResult->Text = result;
		subMatrix->WriteToFile("SubMatrix.txt"); 
	}

	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
		Matrix^ matrix2 = gcnew Matrix("matrix2.txt");
		Matrix^ multMatrix = matrix1 * matrix2;
		String^ currentText = richTextBoxResult->Text;
		String^ result = currentText + "\nResult Matrix of multiplication:\n" + multMatrix->ToString();
		richTextBoxResult->Text = result;
		multMatrix->WriteToFile("MultMatrix.txt");
	}
	private: System::Void DisplayMatrices_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Matrix^ matrix1 = gcnew Matrix("matrix1.txt");
		Matrix^ matrix2 = gcnew Matrix("matrix2.txt");
		String^ result = " \nFirst Matrix:\n" + matrix1->ToString() + "\nSecond Matrix:\n" + matrix2->ToString();
		richTextBoxResult->Text = result;
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

};
}
