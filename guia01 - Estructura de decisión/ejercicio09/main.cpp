/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 09

Descripción:
Determinar si un año ingresado por el usuario es bisiesto o no.

Reglas:
Un año es bisiesto si:
- Es divisible entre 4.
- No es divisible entre 100, excepto si también es divisible entre 400.
*/

#include <iostream>
using namespace std;

int anio;

/*
Función: leerAnio
Descripción:
Solicita al usuario ingresar el año a evaluar.
*/
void leerAnio(){
    cout << "======================================" << endl;
    cout << "   DETERMINAR SI UN ANIO ES BISIESTO  " << endl;
    cout << "======================================" << endl;
    cout << "Ingrese anio a evaluar: ";
    cin >> anio;
}

/*
Función: calculoAnioBisiesto
Descripción:
Evalúa si el año cumple con las condiciones
para ser considerado bisiesto.
*/
void calculoAnioBisiesto(){
    cout << endl << "Resultado: " << endl;

    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
        cout << anio << " es un anio bisiesto." << endl;
    }else{
        cout << anio << " no es un anio bisiesto." << endl;
    }
}

/*
Función principal
*/
int main(){
    leerAnio();
    calculoAnioBisiesto();
    return 0;
}
  
