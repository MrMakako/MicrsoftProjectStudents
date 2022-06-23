#pragma once

#include "Nodo.h"
using namespace System;
ref class Conjunto:public Nodo
{

private:


	Nodo^ Inicial;
	

public:



	Conjunto(String^ Nombre, DateTime^ FechaInicial, DateTime^ FechaFinal);





};

