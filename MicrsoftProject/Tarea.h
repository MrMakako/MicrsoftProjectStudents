#pragma once
#include"Nodo.h"

using namespace System;


ref class Tarea:public Nodo
{





public:



	Tarea();
	Tarea(String^ Nombre, DateTime^FechaIncial, DateTime^ FechaFinal, Nodo^Predecesor,Nodo ^ Sucesor);










};

