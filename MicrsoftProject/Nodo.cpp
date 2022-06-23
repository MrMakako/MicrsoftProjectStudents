#include "Nodo.h"

Nodo::Nodo()
{
	throw gcnew System::NotImplementedException();
}

Nodo::Nodo(String^ _nombre, Nodo^ _Predecesor, Nodo^ _NodoSucesor, DateTime^ _FechaInicial, DateTime^ _FechaFinal)
{
	Nombre = _nombre;
	Predecesor = _Predecesor;
	Sucesor = _NodoSucesor;
	FechaFinal = _FechaFinal;
	FechaInicial = _FechaInicial;
	throw gcnew System::NotImplementedException();
}
