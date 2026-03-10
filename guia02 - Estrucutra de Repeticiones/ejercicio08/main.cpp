/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 08

Descripción:
Mostrar la serie:
1, 20, 3, 40, 5, 60, 7, 80, 9, 100
*/

#include <iostream>
using namespace std;

void calcularEImprimir(){

    for(int i = 1; i <= 10; i++){

        if(i % 2 == 0){
            cout << i * 10;
        }
        else{
            cout << i;
        }

        if(i < 10){
            cout << ", ";
        }
    }

    cout << endl;
}

int main(){

    calcularEImprimir();

    return 0;
}
