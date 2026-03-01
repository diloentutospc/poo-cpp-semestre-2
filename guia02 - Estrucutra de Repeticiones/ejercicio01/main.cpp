// Actualizado  
/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 01

Descripción:
Calcular la suma de los números enteros comprendidos
entre 1 y 10 utilizando un ciclo for.
*/

#include <iostream>
using namespace std;

void sumaEnteros(){

    int suma = 0;

    for(int i = 1; i <= 10; i++){
        suma = +=i;
    }

    cout << "La suma de los enteros del 1 al 10 es: "
         << suma << endl;
}

int main(){
    sumaEnteros();
    return 0;
}
