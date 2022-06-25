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
	
}

void Nodo::setNombre(String^ _nombre)
{
	this->Nombre = _nombre;
}

int Nodo::getNumero()
{
	return Numero;
}

void Nodo::setSucesor(Nodo^ _sucesor)
{
	this->Sucesor = _sucesor;
}

void Nodo::setFechaFinal(DateTime^ _finaldate) {
	this->FechaFinal = _finaldate;
}

Nodo^ Nodo::getPrimerNodo()
{

	return primNodo;

	// // O: insert return statement here
}

void Nodo::setFechaInicial(DateTime^ _initdate) {
	this->FechaInicial = _initdate;
}

void Nodo::setPredecesor(Nodo^ _predecesor)
{
	this->Predecesor = _predecesor;
}

DateTime^ Nodo::getFechaFinal() {
	return FechaFinal;
}

DateTime^ Nodo::getFechaInicial() {
	return FechaInicial;
}

String^ Nodo::getNombre()
{
	return Nombre;
}

int Nodo::getDias()
{
	return FechaFinal->Day-FechaInicial->Day+1;
}

Nodo^ Nodo::getPredecesor() {
	return Predecesor;
}

Nodo^ Nodo::getSucesor() {
	return Sucesor;
}

bool Nodo::estaVacio() {
	return primNodo == nullptr;


}	

void Nodo::agregarTarea(String^ _nombre, DateTime^ _FechaInicial, DateTime^ _FechaFinal,int numero) {
	Nodo^ tarea = gcnew Nodo(_nombre, nullptr, nullptr, _FechaInicial, _FechaFinal);
	tarea->setNumero(numero);



	if (estaVacio()) {
		primNodo = tarea;
		primNodo->setPredecesor(nullptr);
		primNodo->setSucesor(nullptr);
	}
	else {
		Nodo^ actual = primNodo;
		while (actual->getSucesor() != nullptr) {
			
			actual = actual->getSucesor();
			



		}
		actual->setSucesor(tarea);

		tarea->setPredecesor(actual);


	}
	
}

bool Nodo::deleteTarea(String^ _taskname) {
	if (estaVacio()) {
		return false;
	}
	Nodo^ actual = primNodo;

	do {
		if (actual->getNombre() == _taskname) {
			if (actual == primNodo && actual == ultiNodo) {
				primNodo = ultiNodo = nullptr;
			}
			if (actual == primNodo) {
				primNodo = actual->getSucesor();
				primNodo->setPredecesor(ultiNodo);
				ultiNodo->setSucesor(primNodo);
			}
			else if (actual == ultiNodo) {
				ultiNodo = actual->getPredecesor();
				ultiNodo->setSucesor(primNodo);
				primNodo->setPredecesor(ultiNodo);
			}
			else {
				Nodo^ anterior;
				actual->getSucesor()->setPredecesor(actual->getPredecesor());
				actual->getPredecesor()->setSucesor(actual->getSucesor());
			}
			delete actual;
			return true;
		}
		actual = actual->getSucesor();
	} while (actual != ultiNodo);
	
}

bool Nodo::editarFechas(String^ _taskname) {
	if (estaVacio()) {
		return false;
	}
	return true;
}

void Nodo::setNumero(int num)
{
	Numero = num;
}


