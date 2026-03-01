/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 07

Descripción:
Calcular el valor absoluto de un número dado.
El valor absoluto representa la distancia del número al cero.
*/

#include <iostream>
using namespace std;

// Variable global
double numero;

/*
Función: leerNumero
Descripción:
Solicita al usuario ingresar un número.
*/
void leerNumero() {
    cout << "======================================" << endl;
    cout << "      CALCULO DEL VALOR ABSOLUTO      " << endl;
    cout << "======================================" << endl;
    cout << "Ingrese un numero: ";
    cin >> numero;
}

/*
Función: calcularValorAbsoluto
Descripción:
Si el número es negativo, lo convierte en positivo.
*/
void calcularValorAbsoluto() {

    cout << endl;
    cout << "Resultado:" << endl;

    if (numero < 0) {
        cout << "El valor absoluto de " << numero
             << " es: " << -numero << endl;
    }
    else {
        cout << "El valor absoluto de " << numero
             << " es: " << numero << endl;
    }
}

/*
Función principal
*/
int main() {
    leerNumero();
    calcularValorAbsoluto();
    return 0;
}
  
