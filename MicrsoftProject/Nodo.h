#pragma once


using namespace System;

ref class Nodo
{

protected:
	DateTime^ FechaInicial;

	DateTime^ FechaFinal;



	String^ Nombre;

	Nodo ^Predecesor;
	Nodo^ Sucesor;


	


public:

		
	Nodo();
	Nodo(String^ _nombre, Nodo^ _Predecesor, Nodo^ _NodoSucesor,DateTime^_FechaInicial,DateTime^ _FechaFinal);







};

