//  
/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 08

Descripción:
Dada una cantidad de días, mostrar el/los meses que tienen esa cantidad.
- 31 días: Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre
- 30 días: Abril, Junio, Septiembre, Noviembre
- 28 días: Febrero
- 29 días: Febrero (año bisiesto)
*/

#include <iostream>
using namespace std;

int cantDias = 0;

void leerDias(){
    cout << "==============================================" << endl;
    cout << "          MESES SEGUN CANTIDAD DE DIAS " << endl;
    cout << "==============================================" << endl;
    cout << "Ingrese la cantidad de dias: ";
    cin >> cantDias;
}

void mostrarMeses(){
    cout << endl << "Resultado: " << endl;

    if(cantDias == 31){
        cout << "Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre." << endl;
    }
    else if(cantDias == 30){
        cout << "Abril, Junio, Septiembre, Noviembre." << endl;
    }
    else if(cantDias == 28){
        cout << "Febrero." << endl;
    }
    else if(cantDias == 29){
        cout << "Febrero (anio bisiesto)." << endl;
    }
    else{
        cout << "No existe mes con esa cantidad de dias." << endl;
    }
}

int main(){
    leerDias();
    mostrarMeses();
    return 0;
}
  
  
