#pragma once
#include <cliext/vector>

using namespace cliext;

#include "Nodo.h"

#include"Tarea.h"

ref class Tabla
{
	Nodo^ Inicial;
	DateTime^ FechaInicial;

	DateTime^ FechaFinal;


public:




	Tabla (String^ Nombre, DateTime^ _FechaInicial, DateTime^ _FechaFinal);





};

