#include "Tarea.h"

Tarea::Tarea()
{
    throw gcnew System::NotImplementedException();


}

Tarea::Tarea(String^ _Nombre, DateTime^ _FechaIncial, DateTime^ _FechaFinal, Nodo^ _Predecesor, Nodo^ _Sucesor)
{
    Nombre = _Nombre;
    FechaInicial = _FechaIncial;
    FechaFinal = _FechaFinal;
    Predecesor = _Predecesor;
    Sucesor = _Sucesor;
    






}



