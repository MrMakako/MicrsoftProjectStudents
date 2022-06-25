#pragma once
#include"Nodo.h"

using namespace System;


ref class Tarea:public Nodo
{



	int Numero=0;

public:



	Tarea();
	Tarea(String^ Nombre, DateTime^FechaIncial, DateTime^ FechaFinal, Nodo^Predecesor,Nodo ^ Sucesor);










};

