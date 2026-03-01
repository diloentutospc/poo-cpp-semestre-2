/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 03

Descripción:
Leer un número entero y determinar si es par o impar.
*/

#include <iostream>
using namespace std;

// Variable global para almacenar el número
int num = 0;

/*
Función: leerNumero
Descripción:
Solicita al usuario un número entero.
*/
void leerNumero() {
    cout << "Ingrese un numero entero: ";
    cin >> num;
}

/*
Función: proceso
Descripción:
Determina si el número ingresado es par o impar.
*/
void proceso() {
    if (num % 2 == 0) {
        cout << num << " es par." << endl;
    } else {
        cout << num << " es impar." << endl;
    }
}

/*
Función principal
*/
int main() {
    leerNumero();
    proceso();
    return 0;
}
  
