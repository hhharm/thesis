﻿#pragma once
#include "Cores.h"
#include "Functions.h"
#include "defines.h"
namespace DoseEffectsWithGui {

	enum coreType { epiph, cos, lap, ravn, gaus, triangl, quart };
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

//My data
		double x_low, x_high, step, c, h, *u, *w;
		coreType cT;
		int numberOfPoints, volume;
		point* f;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column2;

	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	public:
		MyForm(void)
		{
			InitializeComponent();
			x_low = 0.0;
			x_high = 0.0;
			numberOfPoints = 1;
			c = 0.2;
			h = 0.0;
			step = 0.1;
			u = w = NULL;
			cT = epiph;
			f = NULL;
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
			if (u != NULL) {
				delete[] u;
				u = NULL;
				if (w != NULL) {
					delete[] w;
					w = NULL;
				}
			} 
			if (f != NULL) {
				delete[] f;
				f = NULL;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ComboBox^  comboBox1;



	private: System::Windows::Forms::DataGridView^  dataGridViewU;





	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label6;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewU = (gcnew System::Windows::Forms::DataGridView());
			this->column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewU))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(8, 17);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(769, 473);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(761, 447);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вычисления";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 27);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сброс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(15, 357);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(175, 27);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Пересчитать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(97, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->dataGridViewU);
			this->groupBox2->Location = System::Drawing::Point(373, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(386, 397);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Данные";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Значения U";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(211, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Значения W";
			// 
			// dataGridViewU
			// 
			this->dataGridViewU->AllowUserToAddRows = false;
			this->dataGridViewU->AllowUserToDeleteRows = false;
			this->dataGridViewU->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewU->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->column1,
					this->column2
			});
			this->dataGridViewU->Location = System::Drawing::Point(19, 31);
			this->dataGridViewU->Name = L"dataGridViewU";
			this->dataGridViewU->ReadOnly = true;
			this->dataGridViewU->Size = System::Drawing::Size(361, 360);
			this->dataGridViewU->TabIndex = 0;
			this->dataGridViewU->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// column1
			// 
			this->column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->column1->HeaderText = L"Value U";
			this->column1->Name = L"column1";
			this->column1->ReadOnly = true;
			this->column1->Width = 70;
			// 
			// column2
			// 
			this->column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->column2->HeaderText = L"Value W";
			this->column2->Name = L"column2";
			this->column2->ReadOnly = true;
			this->column2->Width = 73;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Location = System::Drawing::Point(10, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(357, 312);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры вычисления";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->numericUpDown5);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Location = System::Drawing::Point(178, 39);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(175, 226);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ядро и окно вычисления";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Епанечникова ядро", L"Косинус-ядро", L"Лапласа ядро",
					L"Гауссово ядро ", L"Квартическое ядро", L"Равномерное ядро", L"Треугольное ядро"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Епанечникова";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ядро";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->DecimalPlaces = 2;
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown5->Location = System::Drawing::Point(5, 133);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(60, 20);
			this->numericUpDown5->TabIndex = 1;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 65536 });
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown5_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"c из h = c * n^(-1\\5)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(172, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Константа для вычисления окна";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->numericUpDown7);
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->numericUpDown6);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(5, 133);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(168, 173);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выборка";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(52, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выбрать файл";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 2;
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown7->Location = System::Drawing::Point(101, 105);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(60, 20);
			this->numericUpDown7->TabIndex = 1;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 65536 });
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown7_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4->Location = System::Drawing::Point(101, 53);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(60, 20);
			this->numericUpDown4->TabIndex = 1;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->DecimalPlaces = 2;
			this->numericUpDown6->Location = System::Drawing::Point(101, 78);
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(60, 20);
			this->numericUpDown6->TabIndex = 1;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown6_ValueChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Autogenerate", L"From file" });
			this->comboBox2->Location = System::Drawing::Point(5, 25);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(156, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"Autogenerate";
			this->comboBox2->SelectedValueChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 108);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Дисперсия";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 81);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Мат. ожидание";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Как задаётся выборка";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Объем выборки";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->numericUpDown3);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Location = System::Drawing::Point(5, 22);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(167, 105);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Границы";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(62, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"1,1816";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"-1,1816";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 4;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown3->Location = System::Drawing::Point(62, 77);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(99, 20);
			this->numericUpDown3->TabIndex = 1;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Шаг";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Интервал";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(761, 447);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Графики";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(858, 499);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(558, 411);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(12, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"x";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(197, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(284, 31);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Функция распределения";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(24, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"F(x)";
			// 
			// chart1
			// 
			chartArea1->AxisY->Maximum = 1;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 50);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->CustomProperties = L"EmptyPointValue=Zero";
			series1->Legend = L"Legend1";
			series1->LegendText = L"Епанечникова ядро";
			series1->MarkerBorderWidth = 5;
			series1->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Name = L"Func";
			series1->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			series1->SmartLabelStyle->MaxMovingDistance = 5;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Косинус-ядро";
			series2->Name = L"Func1";
			series2->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Лапласа ядро";
			series3->Name = L"Func2";
			series3->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->LegendText = L"Гауссово ядро";
			series4->Name = L"Func3";
			series4->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->LegendText = L"Квартическое ядро";
			series5->Name = L"Func4";
			series5->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->LegendText = L"Равномерное ядро";
			series6->Name = L"Func5";
			series6->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->LegendText = L"Треугольное ядро";
			series7->Name = L"Func6";
			series7->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series->Add(series7);
			this->chart1->Size = System::Drawing::Size(756, 397);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::chart1_Paint);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->chart2);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->numericUpDown1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(761, 447);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"kNN";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			chartArea2->AxisY->Maximum = 1;
			chartArea2->AxisY->Minimum = 0;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(1, 50);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series8->BorderWidth = 4;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->LegendText = L"Епанечникова ядро";
			series8->Name = L"Func";
			series9->BorderWidth = 4;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->LegendText = L"Косинус-ядро";
			series9->Name = L"Func1";
			series10->BorderWidth = 4;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Legend = L"Legend1";
			series10->LegendText = L"Лапласа ядро";
			series10->Name = L"Func2";
			series11->BorderWidth = 4;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Legend = L"Legend1";
			series11->LegendText = L"Гауссово ядро";
			series11->Name = L"Func3";
			series12->BorderWidth = 4;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->LegendText = L"Квартическое ядро";
			series12->Name = L"Func4";
			series13->BorderWidth = 4;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Legend = L"Legend1";
			series13->LegendText = L"Равномерное ядро";
			series13->Name = L"Func5";
			series14->BorderWidth = 4;
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->Legend = L"Legend1";
			series14->LegendText = L"Треугольное ядро";
			series14->Name = L"Func6";
			this->chart2->Series->Add(series8);
			this->chart2->Series->Add(series9);
			this->chart2->Series->Add(series10);
			this->chart2->Series->Add(series11);
			this->chart2->Series->Add(series12);
			this->chart2->Series->Add(series13);
			this->chart2->Series->Add(series14);
			this->chart2->Size = System::Drawing::Size(760, 397);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(651, 24);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 20);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Построить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(561, 26);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"k =";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(589, 24);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(56, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Tag = L"";
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(232, 35);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(140, 31);
			this->label16->TabIndex = 4;
			this->label16->Text = L"kNN оценка";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(23, 64);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"F(x)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(561, 411);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(12, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"x";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(974, 587);
			this->Controls->Add(this->tabControl1);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dose Effect";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewU))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}


	private: void addToGraph(coreType ct, System::Windows::Forms::DataVisualization::Charting::Chart^ chart) {
				
		if (u == NULL) return;
		System::Windows::Forms::DataVisualization::Charting::Series^ col;
		switch (ct)
		{
		case DoseEffectsWithGui::epiph:

			col = chart->Series["Func"];
			break;
		case DoseEffectsWithGui::cos:

			col = chart->Series["Func1"];
			break;
		case DoseEffectsWithGui::lap:
			col = chart->Series["Func2"];
			break;
		case DoseEffectsWithGui::gaus:
			col = chart->Series["Func3"];
			break;
		case DoseEffectsWithGui::quart:
			col = chart->Series["Func4"];
			break;
		case DoseEffectsWithGui::ravn:
			col = chart->Series["Func5"];
			break;
		case DoseEffectsWithGui::triangl:
			col = chart->Series["Func6"];
			break;
		default:
			break;
		}
		col->Points->Clear();
		for (int i = 0; i < numberOfPoints; i++) {
			col->Points->AddXY(f[i].x, f[i].y);
		}
	}

	private: void clearAllGraphs(System::Windows::Forms::DataVisualization::Charting::Chart^ chart) {
		chart->Series["Func"]->Points->Clear();
		chart->Series["Func1"]->Points->Clear();
		chart->Series["Func2"]->Points->Clear();
		chart->Series["Func3"]->Points->Clear();
		chart->Series["Func4"]->Points->Clear();
		chart->Series["Func5"]->Points->Clear();
		chart->Series["Func6"]->Points->Clear();
	}

	private: void drawGraph(coreType ct, System::Windows::Forms::DataVisualization::Charting::Chart^ chart) {
		clearAllGraphs(chart);
		addToGraph(ct, chart);
	}
	private: coreType getCoreType() {
		String^ coreValue = Convert::ToString(comboBox1->SelectedItem);
		if (coreValue == "Епанечникова ядро") {
			return epiph;
		} else if(Convert::ToString(comboBox1->SelectedItem) == "Косинус-ядро") {
			return cos;
		} else if(coreValue == "Лапласа ядро") {
			return lap;
		} else if(coreValue == "Гауссово ядро ") {
			return gaus;
		} else if(coreValue == "Квартическое ядро") {
			return quart;
		} else if(coreValue == "Равномерное ядро") {
			return ravn;
		} else if(coreValue == "Треугольное ядро") {
			return triangl;
		}
		else {
			return epiph;
		}
	}

	private: void refreshData() {
		while (dataGridViewU->Rows->Count > 1)
			for (int i = 0; i < dataGridViewU->Rows->Count - 1; i++) {
				dataGridViewU->Rows->Remove(dataGridViewU->Rows[i]);
			}
		if (u != NULL) {
			for (int i = 0; i < volume; i++) {
				dataGridViewU->Rows->Add();
				dataGridViewU->Rows[i]->Cells[0]->Value = Convert::ToString(u[i]);
				dataGridViewU->Rows[i]->Cells[1]->Value = Convert::ToString(w[i]);
			}

		}
	}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (u != NULL) {
		delete[] u; 
		delete[] w;
		delete[] f;
	}
	x_low  = Convert::ToDouble(textBox1->Text);
	x_high = Convert::ToDouble(textBox2->Text);
	step   = Convert::ToDouble(numericUpDown3->Value);
	volume = Convert::ToInt32(numericUpDown4->Value);
	c      = Convert::ToDouble(numericUpDown5->Value);
	if (Convert::ToString(comboBox2->SelectedItem) != "From file") {
		u = new double[volume];
		w = new double[volume];
		double M = Convert::ToDouble(numericUpDown6->Value);
		double D = Convert::ToDouble(numericUpDown7->Value);
		createUArray(u, volume, M, D);
		createWArray(u, w, volume, M, D);
	}
	else {
		//donow
	}
	refreshData();
	h = c * pow(volume, -0.2);
	numberOfPoints = (int)((x_high - x_low) / step);
	cT = getCoreType();
	Core *core;
	switch (cT)
	{
	case DoseEffectsWithGui::epiph:
		core = new EpanchCore;
		break;
	case DoseEffectsWithGui::cos:
		core = new CosCore;
		break;
	case DoseEffectsWithGui::lap:
		core = new LaplCore;
		break;
	case DoseEffectsWithGui::ravn:
		core = new RavnCore;
		break;
	case DoseEffectsWithGui::gaus:
		core = new GausCore;
		break;
	case DoseEffectsWithGui::triangl:
		core = new TreangCore;
		break;
	case DoseEffectsWithGui::quart:
		core = new SquareCore;
		break;
	default:
		core = new EpanchCore;
		break;
	}
	f = getFbiased(x_low, x_high, step, core, h, u, w, volume);
	delete core;
	button4->Enabled = true;
	drawGraph(cT, this->chart1);
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Convert::ToString(comboBox2->SelectedItem) == "From file") {
		button3->Enabled = true;
	}
	else {
		button3->Enabled = false;
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (u != NULL) {
		delete[] f;
	}
	x_low = Convert::ToDouble(textBox1->Text);
	x_high = Convert::ToDouble(textBox2->Text);
	step = Convert::ToDouble(numericUpDown3->Value);
	c = Convert::ToDouble(numericUpDown5->Value);
	refreshData();
	h = c * pow(volume, -0.2);
	numberOfPoints = (int)((x_high - x_low) / step);
	cT = getCoreType();
	Core *core;
	switch (cT)
	{
	case DoseEffectsWithGui::epiph:
		core = new EpanchCore;
		break;
	case DoseEffectsWithGui::cos:
		core = new CosCore;
		break;
	case DoseEffectsWithGui::lap:
		core = new LaplCore;
		break;
	case DoseEffectsWithGui::ravn:
		core = new RavnCore;
		break;
	case DoseEffectsWithGui::gaus:
		core = new GausCore;
		break;
	case DoseEffectsWithGui::triangl:
		core = new TreangCore;
		break;
	case DoseEffectsWithGui::quart:
		core = new SquareCore;
		break;
	default:
		core = new EpanchCore;
		break;
	}
	f = getFbiased(x_low, x_high, step, core, h, u, w, volume);
	delete core;
	button4->Enabled = true;
	addToGraph(cT, this->chart1);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	button4->Enabled = false;
	if (u != NULL) {
		delete[] u;
		delete[] w;
		delete[] f;
	}
	u = w = NULL;
	f = NULL;
	numberOfPoints = 0;
	volume = 0;
	refreshData();
	drawGraph(cT, this->chart1);
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
}
private: System::Void panel1_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAllGraphs(this->chart1);
}

private: void countConfidenceInterval(double &low, double &high, double mean, int n, double dispersion) {
	//Входные аргументы : n - размер выборки, дисперсия и мат. ожидания понятно что,
	//  критическое значение (какой процент должен попасть в интервал)
	// дл 95% = 1.96
	// для 98% = 3.58

	//вычисляем доверительный интервал (где большинство значений будет лежать)
	//изменяет значения low и high соответственно

	double range = 3.58 * (dispersion) / sqrt(n);
	low = mean - range;
	high = mean + range;
}

    void countThreeSigmaInterval(double &low, double &high, double mean, double dispersion) {
		double range = sqrt(dispersion) *1.5;
		low = mean - range;
		high = mean + range;
	}

	void updateRange() {
		 double low, high;
		 //countConfidenceInterval(low, high, Convert::ToDouble(numericUpDown6->Value), Convert::ToInt32(numericUpDown4->Value),
		//	 Convert::ToDouble(numericUpDown7->Value));
		 countThreeSigmaInterval(low, high, Convert::ToDouble(numericUpDown6->Value), Convert::ToDouble(numericUpDown7->Value));
		 textBox1->Text = Convert::ToString(low);
		 textBox2->Text = Convert::ToString(high);
	 }

private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	updateRange();
}
private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	updateRange();
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (numericUpDown1->Value % 2 != 0) {
		numericUpDown1->Value = numericUpDown1->Value + 1;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	x_low = Convert::ToDouble(textBox1->Text);
	x_high = Convert::ToDouble(textBox2->Text);
	step = Convert::ToDouble(numericUpDown3->Value);
	refreshData();
	numberOfPoints = (int)((x_high - x_low) / step);
	cT = getCoreType();
	Core *core;
	switch (cT)
	{
	case DoseEffectsWithGui::epiph:
		core = new EpanchCore;
		break;
	case DoseEffectsWithGui::cos:
		core = new CosCore;
		break;
	case DoseEffectsWithGui::lap:
		core = new LaplCore;
		break;
	case DoseEffectsWithGui::ravn:
		core = new RavnCore;
		break;
	case DoseEffectsWithGui::gaus:
		core = new GausCore;
		break;
	case DoseEffectsWithGui::triangl:
		core = new TreangCore;
		break;
	case DoseEffectsWithGui::quart:
		core = new SquareCore;
		break;
	default:
		core = new EpanchCore;
		break;
	}
	int k = Convert::ToInt32(numericUpDown1->Value);
	f = getKNN(x_low, x_high, step, core, k, u, w, volume);
	delete core;
	button4->Enabled = true;
	addToGraph(cT,this->chart2);
}
};
}
