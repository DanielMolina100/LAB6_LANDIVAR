#include "List.h"
#include "Pokemon.h"
#include "Orden.h"
namespace Lab6JoseMolina1007420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ timer;
	private: System::Windows::Forms::Button^ button7;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(62, 137);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(289, 269);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(512, 137);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(289, 269);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(238, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"LABORATORIO 6 POKEMONES";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(12, 459);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 72);
			this->button1->TabIndex = 5;
			this->button1->Text = L"National Number";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(140, 459);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 72);
			this->button2->TabIndex = 6;
			this->button2->Text = L"GENERACIÓN";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(334, 459);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(176, 72);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Selection Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(698, 459);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(176, 72);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Shell Sort";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(516, 459);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 72);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Quick Sort";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(303, 32);
			this->label2->TabIndex = 10;
			this->label2->Text = L"LISTA POKEMONES";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(512, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(289, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"LISTA ORDENADA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(334, 424);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 32);
			this->label4->TabIndex = 12;
			this->label4->Text = L"METODO:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 424);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 32);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ORDENAR:";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->button6->Location = System::Drawing::Point(358, 259);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(147, 55);
			this->button6->TabIndex = 14;
			this->button6->Text = L"ARCHIVO";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// timer
			// 
			this->timer->AutoSize = true;
			this->timer->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timer->Location = System::Drawing::Point(17, 534);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(117, 38);
			this->timer->TabIndex = 15;
			this->timer->Text = L"TIME";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Courier New", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->button7->Location = System::Drawing::Point(363, 198);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(142, 55);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Instrucciones";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(892, 577);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->timer);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Seleccionado Correctamente");
	}
		   List^ Lista = gcnew List();
		   Orden^ ord = gcnew Orden();
		   Stopwatch^ myWatch = gcnew Stopwatch();
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	label3->Visible = true;
	label4->Visible = false;

	try {

		OpenFileDialog dialogoLectura;
		if (dialogoLectura.ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamReader^ reader = gcnew StreamReader(dialogoLectura.FileName);
			while (reader->Peek() >= 0)
			{
				String^ line = reader->ReadLine();
				for (int i = 0; i < line->Split(',')->Length; i = i + 3)
				{
					String^ Nombre = line->Split(',')[i];
					Nombre = Nombre->Trim();
					String^ NationalNumber = (line->Split(',')[i + 1]);
					NationalNumber = NationalNumber->Trim();
					int National = int::Parse(NationalNumber);
					String^ Generacion = (line->Split(',')[i + 2]);
					Generacion = Generacion->Trim();
					int Gen = int::Parse(Generacion);
					Lista->Insert(Nombre, National, Gen);
				}
			}
		}
	}
	catch (...) {

	}
	MessageBox::Show("El archivo fue cargado exitosamente");

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Seleccionado Correctamente");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ordenado Exitosamente");
	richTextBox1->Text = "Nombre" + "\t" + "NN" + "\t" + "G" + "\n" + Lista->Print();
	myWatch->Start();
	ord->SelectionSort(Lista);
	myWatch->Stop();
	String^ lista = Lista->Print();
	richTextBox2->Text = "Nombre" + "\t" + "NN" + "\t" + "G" + "\n" + lista;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	myWatch->Stop();
	timer->Text = "Tiempo para ordenar:" + myWatch->Elapsed.ToString();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text = "Nombre" + "\t" + "NN" + "\t" + "G" + "\n" + Lista->Print();
	myWatch->Start();
	ord->QuickSort(Lista, 0, Lista->length - 1);
	myWatch->Stop();
	String^ lista = Lista->Print();
	richTextBox2->Text = "Nombre" + "\t" + "NN" + "\t" + "G" + "\n" + lista;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	myWatch->Stop();
	timer->Text = "Tiempo para ordenar:" + myWatch->Elapsed.ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ordenado Exitosamente");
	richTextBox1->Text = "Nombre" + "\t" + "NN" + "\t" + "G" + "\n" + Lista->Print();
	myWatch->Start();
	ord->SelectionSort(Lista);
	myWatch->Stop();
	String^ lista = Lista->Print();
	richTextBox2->Text = "Nombre" + "\t" + "NN" + "\t" + "G" + "\n" + lista;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	timer->Text = "Tiempo para ordenar:" + myWatch->Elapsed.ToString();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("PASOS 1. Generar archivo. 2. Elegir que quiere ordenar y 3. Metodo a utilizar");
}
};
}
