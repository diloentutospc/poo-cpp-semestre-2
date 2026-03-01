/*
Autor: Diego Fernando Lozano Gomez
Ejercicio 15: Clasificacion de numeros pares e impares
Tema: Estructuras de Decision (if - else)

Descripcion:
Leer tres valores numericos.
- Si los tres son pares -> "Todos son pares"
- Si solo dos son pares -> "Casi todos pares"
- Si solo dos son impares -> "Casi todos impares"
- Si los tres son impares -> "Todos impares"
*/

#include <iostream>
using namespace std;

int n1, n2, n3;
int contadorPares;

//--------------------------------------------------
// Funcion para leer los numeros
//--------------------------------------------------
void leerNumeros() {
    cout << "==========================================" << endl;
    cout << "     CLASIFICACION DE NUMEROS PARES      " << endl;
    cout << "==========================================" << endl;

    cout << "Ingrese numero 1: ";
    cin >> n1;

    cout << "Ingrese numero 2: ";
    cin >> n2;

    cout << "Ingrese numero 3: ";
    cin >> n3;

    cout << endl;
}

//--------------------------------------------------
// Funcion para contar los pares
//--------------------------------------------------
void contarPares() {
    contadorPares = 0;

    if (n1 % 2 == 0) {
        contadorPares++;
    }

    if (n2 % 2 == 0) {
        contadorPares++;
    }

    if (n3 % 2 == 0) {
        contadorPares++;
    }
}

//--------------------------------------------------
// Funcion para mostrar el mensaje correcto
//--------------------------------------------------
void mostrarMensaje() {

    if (contadorPares == 3) {
        cout << "Todos son pares." << endl;
    }
    else if (contadorPares == 2) {
        cout << "Casi todos pares." << endl;
    }
    else if (contadorPares == 1) {
        cout << "Casi todos impares." << endl;
    }
    else {
        cout << "Todos impares." << endl;
    }
}

//--------------------------------------------------
// Funcion principal
//--------------------------------------------------
int main() {

    leerNumeros();
    contarPares();
    mostrarMensaje();

    return 0;
}
  
  
