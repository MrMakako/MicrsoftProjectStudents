#include "Tabla.h"

Tabla::Tabla(String^ _Nombre, DateTime^ _FechaInicial, DateTime^ _FechaFinal)
{

    FechaFinal = _FechaFinal;
    FechaInicial = _FechaInicial;

    int diasTotal = FechaFinal->Day - FechaInicial->Day;
    String^ Nombre = "Tarea";
    int diaInicial=FechaInicial->Day;
    int diaFinal=FechaFinal->Day;



    Inicial = gcnew Nodo("Inicio", nullptr, nullptr, FechaInicial, FechaFinal);
    for (int i = 1; i <= diasTotal; i++) {
        Inicial->agregarTarea("Tarea" , DateTime::Now.AddDays(diaInicial), DateTime::Now.AddDays(diaInicial + 1));

        diaInicial ++;
    
    }
   


    

    


}

Nodo^ Tabla::getNodoInicil()
{
    return Inicial;
    // // O: insert return statement here
}
