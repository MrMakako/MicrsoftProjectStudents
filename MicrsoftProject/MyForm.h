#pragma once
#include "MyForm.h"
#include  "Tabla.h"
#include "Tarea.h"
#include "Nodo.h"
namespace MicrsoftProject {

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
		Tabla^ TablaProyecto;
	private: System::Windows::Forms::TextBox^ ProyectName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column5;
	public:
	public:

	private: System::Windows::Forms::DateTimePicker^ FehcaFinals;
	public:

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	   bool InicioProyecto;

	public:
		MyForm(void)
		{
			InitializeComponent();
			InicioProyecto = false;
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
	private: System::Windows::Forms::Button^ BotonIniciar;
	private: System::Windows::Forms::DataGridView^ TablaTiempo;
	protected:	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ SelectorFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DateTimePicker^ FechaInicialS;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;


	protected:

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
			this->BotonIniciar = (gcnew System::Windows::Forms::Button());
			this->TablaTiempo = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->FechaInicialS = (gcnew System::Windows::Forms::DateTimePicker());
			this->ProyectName = (gcnew System::Windows::Forms::TextBox());
			this->FehcaFinals = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaTiempo))->BeginInit();
			this->SuspendLayout();
			// 
			// BotonIniciar
			// 
			this->BotonIniciar->Location = System::Drawing::Point(873, 159);
			this->BotonIniciar->Name = L"BotonIniciar";
			this->BotonIniciar->Size = System::Drawing::Size(176, 41);
			this->BotonIniciar->TabIndex = 0;
			this->BotonIniciar->Text = L"Iniciar";
			this->BotonIniciar->UseVisualStyleBackColor = true;
			this->BotonIniciar->Click += gcnew System::EventHandler(this, &MyForm::BotonIniciar_Click);
			// 
			// TablaTiempo
			// 
			this->TablaTiempo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TablaTiempo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombre, this->Fecha,
					this->Column3, this->Column4, this->column5
			});
			this->TablaTiempo->Location = System::Drawing::Point(48, 39);
			this->TablaTiempo->Name = L"TablaTiempo";
			this->TablaTiempo->RowHeadersWidth = 51;
			this->TablaTiempo->RowTemplate->Height = 24;
			this->TablaTiempo->Size = System::Drawing::Size(656, 308);
			this->TablaTiempo->TabIndex = 1;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"FechaInicial";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"FechaFinal";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Predecesor";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(914, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// FechaInicialS
			// 
			this->FechaInicialS->Location = System::Drawing::Point(873, 46);
			this->FechaInicialS->Name = L"FechaInicialS";
			this->FechaInicialS->Size = System::Drawing::Size(273, 22);
			this->FechaInicialS->TabIndex = 4;
			this->FechaInicialS->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// ProyectName
			// 
			this->ProyectName->Location = System::Drawing::Point(839, 131);
			this->ProyectName->Name = L"ProyectName";
			this->ProyectName->Size = System::Drawing::Size(260, 22);
			this->ProyectName->TabIndex = 5;
			this->ProyectName->Text = L"Default Proyect";
			// 
			// FehcaFinals
			// 
			this->FehcaFinals->Location = System::Drawing::Point(873, 89);
			this->FehcaFinals->Name = L"FehcaFinals";
			this->FehcaFinals->Size = System::Drawing::Size(269, 22);
			this->FehcaFinals->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(771, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Fecha Inicial";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(771, 89);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(80, 22);
			this->maskedTextBox1->TabIndex = 8;
			this->maskedTextBox1->Text = L"Fecha Final";
			// 
			// column5
			// 
			this->column5->HeaderText = L"Dias";
			this->column5->MinimumWidth = 6;
			this->column5->Name = L"column5";
			this->column5->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1158, 409);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->FehcaFinals);
			this->Controls->Add(this->ProyectName);
			this->Controls->Add(this->FechaInicialS);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->TablaTiempo);
			this->Controls->Add(this->BotonIniciar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaTiempo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {







	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BotonIniciar_Click(System::Object^ sender, System::EventArgs^ e) {


	if (InicioProyecto == false) {

		TablaProyecto = gcnew Tabla(ProyectName->ToString(), FechaInicialS->Value,FehcaFinals->Value);
		
		TablaTiempo->Rows->Add(1);

		Nodo^ Inicio= TablaProyecto->getNodoInicil();
		Inicio = Inicio->getPrimerNodo();
		//Nodo^ Tarea = Inicio->getSucesor();
		int count = 1;
		TablaTiempo->Rows[0]->Cells[0]->Value = "Inicio";
		TablaTiempo->Rows[0]->Cells[1]->Value = FechaInicialS->Value.ToString("d");
		TablaTiempo->Rows[0]->Cells[2]->Value = FehcaFinals->Value.ToString("d");
		TablaTiempo->Rows[0]->Cells[4]->Value = "0";

		while (Inicio!=nullptr) {



			TablaTiempo->Rows->Add(1);
			TablaTiempo->Rows[count]->Cells[0]->Value = Inicio->getNombre()->ToString();
			TablaTiempo->Rows[count]->Cells[1]->Value = Inicio->getFechaInicial()->ToString("d");
			TablaTiempo->Rows[count]->Cells[2]->Value = Inicio->getFechaFinal()->ToString("d");
			TablaTiempo->Rows[count]->Cells[4]->Value = "1";


			Inicio = Inicio->getSucesor();
			count++;
		
		
		}
			
		
	



	
	}

	






}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
