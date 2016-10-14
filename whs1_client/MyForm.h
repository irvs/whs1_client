#ifndef MYFORM_H_
#define MYFORM_H_

#include <msclr/marshal.h>
#include "whs1.h"
#include "socket.h"


namespace WHS1_test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;






	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label10;




	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				500));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(100,
				800));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(200,
				200));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint4 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(300,
				500));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint5 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(400,
				800));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint6 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(500,
				300));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint7 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				500));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint8 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(100,
				800));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint9 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(200,
				200));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint10 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(300,
				500));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint11 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(400,
				800));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint12 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(500,
				300));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"state";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(93, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"state";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"受信開始";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(95, 90);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"受信終了";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(151, 14);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(77, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"取得";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(151, 42);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"設定";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Location = System::Drawing::Point(244, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(236, 72);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"受信機アドレス";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 19);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"0020003798";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(72, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(47, 19);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(177, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(47, 19);
			this->textBox3->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 12;
			this->label3->Text = L"心拍波形";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(130, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 12);
			this->label4->TabIndex = 13;
			this->label4->Text = L"体表温";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// chart1
			// 
			chartArea1->AxisX->Crossing = 1.7976931348623157E+308;
			chartArea1->AxisX->LabelStyle->Enabled = false;
			chartArea1->AxisX->LineColor = System::Drawing::Color::DarkGray;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea1->AxisX->MajorTickMark->Enabled = false;
			chartArea1->AxisX->Maximum = 500;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX->MinorGrid->Enabled = true;
			chartArea1->AxisX->MinorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::DarkGray;
			chartArea1->AxisY->LabelStyle->Enabled = false;
			chartArea1->AxisY->LineColor = System::Drawing::Color::DarkGray;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea1->AxisY->MajorTickMark->Enabled = false;
			chartArea1->AxisY->Maximum = 1000;
			chartArea1->AxisY->Minimum = 0;
			chartArea1->AxisY->TitleForeColor = System::Drawing::Color::DarkGray;
			chartArea1->BorderColor = System::Drawing::Color::DarkGray;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			legend1->TextWrapThreshold = 0;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 162);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			series1->Points->Add(dataPoint3);
			series1->Points->Add(dataPoint4);
			series1->Points->Add(dataPoint5);
			series1->Points->Add(dataPoint6);
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::UInt32;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::UInt32;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(468, 113);
			this->chart1->TabIndex = 15;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(182, 49);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 16);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"送信";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(244, 85);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(236, 71);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ソケット";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(119, 44);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(57, 23);
			this->button7->TabIndex = 24;
			this->button7->Text = L"設定";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(66, 46);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(47, 19);
			this->textBox8->TabIndex = 23;
			this->textBox8->Text = L"65001";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 12);
			this->label6->TabIndex = 22;
			this->label6->Text = L"ポート番号";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 12);
			this->label5->TabIndex = 21;
			this->label5->Text = L"IPアドレス";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(190, 21);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(38, 19);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"170";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(146, 21);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 19);
			this->textBox6->TabIndex = 19;
			this->textBox6->Text = L"4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(103, 21);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 19);
			this->textBox5->TabIndex = 18;
			this->textBox5->Text = L"168";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(59, 22);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(38, 19);
			this->textBox4->TabIndex = 17;
			this->textBox4->Text = L"192";
			// 
			// chart2
			// 
			chartArea2->AxisX->Crossing = 1.7976931348623157E+308;
			chartArea2->AxisX->LabelStyle->Enabled = false;
			chartArea2->AxisX->LineColor = System::Drawing::Color::DarkGray;
			chartArea2->AxisX->MajorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea2->AxisX->MajorTickMark->Enabled = false;
			chartArea2->AxisX->Maximum = 500;
			chartArea2->AxisX->Minimum = 0;
			chartArea2->AxisX->MinorGrid->Enabled = true;
			chartArea2->AxisX->MinorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea2->AxisX->TitleForeColor = System::Drawing::Color::DarkGray;
			chartArea2->AxisY->LabelStyle->Enabled = false;
			chartArea2->AxisY->LineColor = System::Drawing::Color::DarkGray;
			chartArea2->AxisY->MajorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea2->AxisY->MajorTickMark->Enabled = false;
			chartArea2->AxisY->Maximum = 4;
			chartArea2->AxisY->Minimum = -1;
			chartArea2->AxisY->TitleForeColor = System::Drawing::Color::DarkGray;
			chartArea2->BorderColor = System::Drawing::Color::DarkGray;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			legend2->TextWrapThreshold = 0;
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(12, 309);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			series2->Points->Add(dataPoint7);
			series2->Points->Add(dataPoint8);
			series2->Points->Add(dataPoint9);
			series2->Points->Add(dataPoint10);
			series2->Points->Add(dataPoint11);
			series2->Points->Add(dataPoint12);
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::UInt32;
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::UInt32;
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(468, 113);
			this->chart2->TabIndex = 18;
			this->chart2->Text = L"chart2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 19;
			this->label7->Text = L"体動";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(72, 284);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(47, 19);
			this->textBox9->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(130, 287);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 12);
			this->label8->TabIndex = 21;
			this->label8->Text = L"ACC_X";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(177, 284);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(47, 19);
			this->textBox10->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(282, 284);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(47, 19);
			this->textBox11->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(235, 287);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 12);
			this->label9->TabIndex = 23;
			this->label9->Text = L"ACC_Y";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(388, 284);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(47, 19);
			this->textBox12->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(341, 287);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 12);
			this->label10->TabIndex = 25;
			this->label10->Text = L"ACC_Z";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 431);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"WHS-1 test";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 char *s = rrd.open();
				 String^ msg = gcnew String(s);
				 label1->Text = msg;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 chart1->Series->Clear();
				 chart1->Series->Add("hakei");
				 chart1->Series["hakei"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				 chart1->Series["hakei"]->Color = Color::LightGreen;

				 chart2->Series->Clear();
				 chart2->Series->Add("motion");
				 chart2->Series["motion"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				 chart2->Series["motion"]->Color = Color::LightSkyBlue;

				 int ip[4];
				 ip[0] = Convert::ToInt32(textBox4->Text);
				 ip[1] = Convert::ToInt32(textBox5->Text);
				 ip[2] = Convert::ToInt32(textBox6->Text);
				 ip[3] = Convert::ToInt32(textBox7->Text);

				 int port;
				 port = Convert::ToInt32(textBox8->Text);

				 if (!sock.Prepare(port, sock.IPitoc4(ip[0], ip[1], ip[2], ip[3]))){
					 MessageBox::Show("ソケット失敗");
				 }

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 char *s = rrd.close();
				 String^ msg = gcnew String(s);
				 label2->Text = msg;
	}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (rrd.get_address()) {
				 String^ address = gcnew String(rrd.address);
				 textBox1->Text = address;
			 }
			 else{
				 MessageBox::Show("失敗しました");
			 }
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ str = textBox1->Text;
			 const char* ptr;
			 marshal_context^ mycontext = gcnew marshal_context();
			 ptr = mycontext->marshal_as<const char*>(str);
			 rrd.set_address((char*)ptr);
			 
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 rrd.start();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 rrd.stop();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (rrd.is_received){
				 textBox2->Text = rrd.hakei[rrd.now_count-1].ToString();
				 textBox3->Text = rrd.temp[rrd.now_count-1].ToString("F");
				 textBox9->Text = rrd.motion[rrd.now_count - 1].ToString("F");
				 textBox10->Text = rrd.acc_x[rrd.now_count - 1].ToString("F");
				 textBox11->Text = rrd.acc_y[rrd.now_count - 1].ToString("F");
				 textBox12->Text = rrd.acc_z[rrd.now_count - 1].ToString("F");
				 chart1->Series["hakei"]->Points->Clear();
				 chart2->Series["motion"]->Points->Clear();
				 for (int i = 0; i < MAX_DATA; i++){
					 int k = i;
					 if (rrd.now_count - 1 - k < 0) k -= MAX_DATA;
					 if (rrd.hakei[rrd.now_count - 1 - k]!=0)  chart1->Series["hakei"]->Points->AddXY(MAX_DATA-i, rrd.hakei[rrd.now_count-1-k]);
					 if (rrd.motion[rrd.now_count - 1 - k]!=0)  chart2->Series["motion"]->Points->AddXY(MAX_DATA-i, rrd.motion[rrd.now_count-1-k]);
				 }
			 }
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 int ip[4];
			 ip[0] = Convert::ToInt32(textBox4->Text);
			 ip[1] = Convert::ToInt32(textBox5->Text);
			 ip[2] = Convert::ToInt32(textBox6->Text);
			 ip[3] = Convert::ToInt32(textBox7->Text);

			 int port;
			 port = Convert::ToInt32(textBox8->Text);

			 if (!sock.Prepare(port, sock.IPitoc4(ip[0], ip[1], ip[2], ip[3]))){
				 MessageBox::Show("ソケット失敗");
			 }
			 else{
				 MessageBox::Show("設定しました");
			 }
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true) rrd.send_flag = true;
			 else rrd.send_flag = false;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}

#endif