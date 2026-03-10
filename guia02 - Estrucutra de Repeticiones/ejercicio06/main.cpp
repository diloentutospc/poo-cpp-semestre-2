/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 06

Descripción:
Imprimir los números comprendidos entre un rango de valores
ingresado por el usuario. El primer número debe ser menor
o igual al segundo.
*/

#include <iostream>
using namespace std;

int num1, num2;

void leerRango(){

    do{
        cout << "Ingrese el numero inicial: ";
        cin >> num1;

        cout << "Ingrese el numero final: ";
        cin >> num2;

        if(num1 > num2){
            cout << "\nError: El numero inicial debe ser menor o igual al numero final.\n";
            cout << "Por favor vuelva a ingresarlos.\n\n";
        }

    }while(num1 > num2);
}

void imprimirRango(){

    for(int i = num1; i <= num2; i++){

        cout << i;

        if(i < num2){
            cout << ", ";
        }else{
            cout << ".";
        }
    }

    cout << endl;
}

int main(){

    leerRango();
    imprimirRango();

    return 0;
}
