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

public:
	Nodo();
	Nodo(String^, Nodo^, Nodo^, DateTime^, DateTime^);
	//Getters
	String^ getNombre();
	Nodo^ getPredecesor();
	Nodo^ getSucesor();
	DateTime^ getFechaInicial();
	DateTime^ getFechaFinal();
	//Setters
	void setNombre(String^);
	void setPredecesor(Nodo^);
	void setSucesor(Nodo^);
	void setFechaInicial(DateTime^);
	void setFechaFinal(DateTime^);
	//Metodos
	void agregarTarea(String^, DateTime^, DateTime^);
	bool estaVacio();
	void deleteTarea();
};

