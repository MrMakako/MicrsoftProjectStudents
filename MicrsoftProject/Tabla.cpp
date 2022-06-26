#include "Tabla.h"

Tabla::Tabla(String^ _Nombre, DateTime^ _FechaInicial, DateTime^ _FechaFinal)
{

    FechaFinal = _FechaFinal;
    FechaInicial = _FechaInicial;

    int diasTotal = FechaFinal->DayOfYear- FechaInicial->DayOfYear;
    String^ Nombre = "Tarea";
    int cantidadDias = 0;
    int diaFinal = 0;



    Inicial = gcnew Nodo("Inicio", nullptr, nullptr, FechaInicial, FechaFinal);
    
    for (int i = 0; i <= diasTotal; i++) {

 
        if (i > 1) {
            Inicial->agregarTarea(("Tarea ") + (i+1), FechaInicial->AddDays(cantidadDias), FechaInicial->AddDays(diaFinal), i+1);
          
        }
        else {

            Inicial->agregarTarea(("Tarea ") + (i+1), FechaInicial->AddDays(cantidadDias), FechaInicial->AddDays(cantidadDias), i+1);
        
        }
        
       


        cantidadDias ++;
        diaFinal++;
    
    }
   


    

    


}

Nodo^ Tabla::getNodoInicil()
{
    return Inicial;
    // // O: insert return statement here
}

void Tabla::ActualizarDuracion(int num)
{
   

   
    if (Inicial->estaVacio()) {
    
        return;
    
    }



    Nodo^ Actual = Inicial->getPrimerNodo();

    do {


        if(Actual->getNumero())



        Actual = Actual->getSucesor();






    
    
    
    } while (Actual != nullptr);











}

DateTime^ Tabla::getFechaFinal()
{
    return FechaFinal;
    // // O: insert return statement here
}

DateTime^ Tabla::getFechaInicial()
{

   return FechaInicial;
    // // O: insert return statement here
}

void Tabla::setFechaFinal(DateTime^ time)
{
    

    FechaFinal = time;



}


