/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 04

Descripción:
Leer dos números enteros y determinar:
- Cuál es mayor.
- Cuál es menor.
- Si son iguales.
- Si son diferentes.
*/

#include <iostream>
using namespace std;

// Variables globales
int num1 = 0;
int num2 = 0;

/*
Función: leerNumeros
Descripción:
Solicita al usuario ingresar dos números enteros.
*/
void leerNumeros(){
    cout << "Ingresa el numero 1: ";
    cin >> num1;

    cout << "Ingresa el numero 2: ";
    cin >> num2;
}

/*
Función: proceso
Descripción:
Determina si los números son iguales o diferentes,
y en caso de ser diferentes, indica cuál es mayor y cuál es menor.
*/
void proceso(){

    if(num1 == num2){
        cout << "Los numeros son iguales." << endl;
        cout << "No son diferentes." << endl;
    }
    else {
        cout << "Los numeros son diferentes." << endl;

        if(num1 > num2){
            cout << num1 << " es mayor que " << num2 << endl;
            cout << num2 << " es menor que " << num1 << endl;
        }
        else {
            cout << num2 << " es mayor que " << num1 << endl;
            cout << num1 << " es menor que " << num2 << endl;
        }
    }
}

/*
Función principal
*/
int main(){
    leerNumeros();
    proceso();
    return 0;
}
  
