#pragma once


using namespace System;

ref class Nodo
{

protected:
	DateTime^ FechaInicial;
	DateTime^ FechaFinal;
	String^ Nombre;
	Nodo^ Predecesor;
	Nodo^ Sucesor;
	Nodo^ primNodo;
	Nodo^ ultiNodo;
	int Numero = 0;

public:
	Nodo();
	Nodo(String^, Nodo^, Nodo^, DateTime^, DateTime^);
	//Getters
	String^ getNombre();
	int getDias();
	Nodo^ getPredecesor();
	Nodo^ getSucesor();
	DateTime^ getFechaInicial();
	DateTime^ getFechaFinal();
	//Setters
	void setNombre(String^);
	int getNumero();
	void setPredecesor(Nodo^);
	void setSucesor(Nodo^);
	void setNumero(int num);
	void setFechaInicial(DateTime^);
	void setFechaFinal(DateTime^);
	Nodo^ getPrimerNodo();
	//Metodos
	void agregarTarea(String^, DateTime^, DateTime^,int);
	bool estaVacio();
	bool deleteTarea(String^);
	bool editarFechas(String^);
};

