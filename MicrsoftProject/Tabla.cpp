#include "Tabla.h"

Tabla::Tabla(String^ _Nombre, DateTime^ _FechaInicial, DateTime^ _FechaFinal)
{

    FechaFinal = _FechaFinal;
    FechaInicial = _FechaInicial;
    
    Inicial = gcnew Nodo(_Nombre,nullptr,nullptr,FechaInicial,FechaFinal);



    throw gcnew System::NotImplementedException();
}
