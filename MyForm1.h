#pragma once
namespace Project51 {

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
		Form ^f;
		MyForm1(void)
		{
			
			InitializeComponent();
		}
		MyForm1(Form ^f1)
		{
			f = f1;
			InitializeComponent();
		}



	public:

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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem1;
	private: System::Windows::Forms::Timer^ timer1;



	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(35, 29);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(800, 384);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &MyForm1::dataGridView1_EditingControlShowing);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 508);
			this->textBox1->MaxLength = 2;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 27);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"3";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox1_KeyUp);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(118, 508);
			this->textBox2->MaxLength = 2;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 27);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"3";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox2_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 485);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Строк";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(114, 485);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Столбцов";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(224, 508);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 27);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->dataGridView2->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(854, 29);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->ShowCellErrors = false;
			this->dataGridView2->Size = System::Drawing::Size(244, 384);
			this->dataGridView2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(330, 508);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 27);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Нули";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(436, 508);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 27);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleGreen;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(788, 508);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 27);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Перевести";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->EnabledChanged += gcnew System::EventHandler(this, &MyForm1::button4_EnabledChanged);
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(9, 436);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(800, 37);
			this->label3->TabIndex = 11;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->exitToolStripMenuItem, this->exitToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1102, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::menuToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->exitToolStripMenuItem->Text = L"Restart";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::exitToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem1->Text = L"Exit";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::exitToolStripMenuItem1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->ClientSize = System::Drawing::Size(1102, 542);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Матрица - список";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		   int row1, col1;
		   // генерация
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int row, col;
		timer1->Enabled = true;
		row = Convert::ToInt32(textBox1->Text);
		col = Convert::ToInt32(textBox2->Text);		
		//Генерация
		dataGridView1->RowCount = row;
		dataGridView1->ColumnCount = col;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				dataGridView1->Columns[j]->Width = 45;
				dataGridView1->Columns[j]->HeaderText = Convert::ToString(Convert::ToChar('a' + j));
				dataGridView1->Columns[j]->SortMode = DataGridViewColumnSortMode::NotSortable;
				
			}
			dataGridView1->RowHeadersWidth = 50;
			dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		button2->Enabled = true;
		row1 = row;
		col1 = col;
	}
//проверка кол-во столбцов
//проверка кол-во строк
void prov() {
	int b;
	int a;
	if (textBox2->TextLength != 0&& textBox1->TextLength!=0) {
		a = Convert::ToInt32(textBox2->Text);
		b = Convert::ToInt32(textBox1->Text);
		if ((a == 0 || a > 15)||(b==0||b>15)) {
			button1->Enabled = false;
		}
		else {
			button1->Enabled = true;		}
	}
	else {
		button1->Enabled = false;
	}
}
//проверка символов
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') e->KeyChar = '1';
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')||(e->KeyChar == (char)Keys::Delete)||(e->KeyChar == (char)Keys::Back))
		return;
	e->Handled = true;
}
private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	prov();
}
private: System::Void textBox2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	prov();
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') e->KeyChar = '1';
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == (char)Keys::Delete) || (e->KeyChar == (char)Keys::Back))
		return;
	e->Handled = true;
}

// вставка нулей
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int** mas = new int* [row1];
	for (int i = 0; i < row1; i++) {
		mas[i] = new int[col1];
	}
	//проверяем каждую ячейку, если не единицы, то ноль
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			mas[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			if (mas[i][j] != 1) dataGridView1->Rows[i]->Cells[j]->Value = 0;
			}
		}
	for (int i = 0; i < row1; i++) {
		delete[] mas[i];
	}
	delete[] mas;
}
// очистка
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();
			button2->Enabled = false;
			button4->Enabled = false;
			timer1->Enabled = false;
}
// перевод из первой матрицы во вторую
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int row, col;
	row = Convert::ToInt32(textBox1->Text);
	col = Convert::ToInt32(textBox2->Text);
	//
	dataGridView2->Rows->Clear();
	// размер списка индц
	dataGridView2->RowCount = row;
	dataGridView2->ColumnCount = 2;
	// массив 
	int** mas = new int* [row];
	for (int i = 0; i < row; i++) {
		mas[i] = new int[col];
	}
	//каждой ячейке даем переменную
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			mas[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
		}
	}
	//находим единицы переносим
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (mas[i][j] == 1) {
					if(dataGridView2->Rows[i]->Cells[0]->Value==nullptr)
					dataGridView2->Rows[i]->Cells[0]->Value = dataGridView1->Columns[j]->HeaderText;
					else dataGridView2->Rows[i]->Cells[1]->Value = dataGridView1->Columns[j]->HeaderText;
			}
			if (dataGridView2->Rows[i]->Cells[1]->Value == nullptr)
				dataGridView2->Rows[i]->Cells[1]->Value = dataGridView2->Rows[i]->Cells[0]->Value;


		}
	}
	dataGridView2->Columns[0]->SortMode = DataGridViewColumnSortMode::NotSortable;
	dataGridView2->Columns[1]->SortMode = DataGridViewColumnSortMode::NotSortable;
	dataGridView2->Columns[0]->HeaderText = "Выход";
	dataGridView2->Columns[1]->HeaderText = "Вход";
	for (int i = 0; i < row; i++) {
		delete[] mas[i];
	}
	delete[] mas;

}
private: System::Void MyForm1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	f->Show();
}
// проверка ячеек на содержимое
private: System::Void dataGridView1_EditingControlShowing(System::Object^ sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^ e)
{
	TextBox^ tb = (TextBox^)e->Control;
	tb->MaxLength = 1;
	tb->KeyPress += gcnew KeyPressEventHandler(this, &MyForm1::tb_KeyPress);
	chs();
}
// функция проверки нажатия
 void tb_KeyPress(Object^ sender, KeyPressEventArgs^ e)
	   {	
	 if (e->KeyChar == '.') e->KeyChar = '1';
		   if ((e->KeyChar >= '0') && (e->KeyChar <= '1') || (e->KeyChar == (char)Keys::Delete) || (e->KeyChar == (char)Keys::Back))
			   return;
		   e->Handled = true;
	   }
 // проверка на допустимость содержимого
 void chs() {
	 label3->Text = "";
	 int** mas = new int* [row1];
	 for (int i = 0; i < row1; i++) {
		 mas[i] = new int[col1];
	 }
	 int k = 0;
	 int _rows = 0;
	 for (int i = 0; i < row1; i++) {
		 for (int j = 0; j < col1; j++) {
			 mas[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			 if (mas[i][j] == 1) k++;
		 }
		 if (k == 1 || k == 2) _rows++;
		 else label3->Text += "Строка - " + Convert::ToString(dataGridView1->Rows[i]->HeaderCell->Value) + "Не соответствует не требованию(в строке либо одна единица, либо две)" + "\n";
			 k = 0;
	 }
	 if (_rows == row1) {
		 button4->Enabled = true;
		 label3->Text = "";
	 }
	 else {
		 button4->Enabled = false;
	 }
	 // удаление массива
	 for (int i = 0; i < row1; i++) {
		 delete[] mas[i];
	 }
	 delete[] mas;
 }

private: System::Void button4_EnabledChanged(System::Object^ sender, System::EventArgs^ e) {
	if (button4->Enabled == false) button4->BackColor = Color::PaleGreen;
	else button4->BackColor = Color::Lime;
}
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	f->Show();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void exitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	this->chs();
}
};
}
