/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 05

Descripción:
Calcular la suma de los n-primeros números naturales positivos
y mostrar el resultado junto con la expresión de la suma.
*/

#include <iostream>
using namespace std;

int n, suma = 0;

void ingresan(){

    suma = 0;  // importante reiniciar

    do{
        cout << "Ingrese n: ";
        cin >> n;

        if(n <= 0){
            cout << "\nERROR: El numero ingresado debe ser mayor que 0.\n";
        }

    }while(n <= 0);

    for(int i = 1; i <= n; i++){
        suma += i;
    }
}

void imprimir(){

    cout << suma << " (";

    for(int i = 1; i <= n; i++){
        cout << i;
        if(i < n){
            cout << "+";
        }
    }

    cout << ")" << endl;
}

int main(){

    ingresan();
    imprimir();

    return 0;
}
