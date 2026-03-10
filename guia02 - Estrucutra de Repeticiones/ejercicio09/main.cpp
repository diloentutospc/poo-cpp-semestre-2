/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 09

Descripción:
Mostrar la serie: 1, -1, 1, -1, 1, -1, ...
La cantidad de términos es ingresada por el usuario.
*/

#include <iostream>
using namespace std;

int n;

void leerCantidad(){

    do{
        cout << "Ingrese la cantidad de terminos: ";
        cin >> n;

        if(n <= 0){
            cout << "Error: El numero debe ser mayor que 0." << endl;
        }

    }while(n <= 0);
}

void calcularEImprimir(){

    for(int i = 1; i <= n; i++){

        if(i % 2 == 0){
            cout << -1;
        }else{
            cout << 1;
        }

        if(i < n){
            cout << ", ";
        }
    }

    cout << endl;
}

int main(){

    leerCantidad();
    calcularEImprimir();

    return 0;
}
