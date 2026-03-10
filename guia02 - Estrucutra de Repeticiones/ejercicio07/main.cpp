/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 07

Descripción:
Leer dos números que representen un rango válido.
Calcular la suma de todos los números comprendidos
entre ellos e imprimir la expresión matemática junto
con el resultado.
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

void calcularEImprimir(){

    int suma = 0;

    // Primer ciclo: calcular la suma
    for(int i = num1; i <= num2; i++){
        suma += i;
    }

    cout << suma << "(";

    // Segundo ciclo: imprimir la expresión
    for(int i = num1; i <= num2; i++){

        cout << i;

        if(i < num2){
            cout << "+";
        }
    }

    cout << ")" << endl;
}

int main(){

    leerRango();
    calcularEImprimir();

    return 0;
}
