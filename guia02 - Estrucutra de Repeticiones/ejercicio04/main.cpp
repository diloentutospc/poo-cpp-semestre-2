// Actualizado  
/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 04

Descripción:
Leer n números enteros positivos y determinar
cuántos son pares y cuántos son impares.
*/

#include <iostream>
using namespace std;

int par = 0;
int impar = 0;

void leerYClasificar(){

    int n;

    do{
        cout << "Cuantos numeros deseas ingresar: ";
        cin >> n;

        if(n <= 0){
            cout << "Error: El numero debe ser mayor que 0.\n";
        }

    }while(n <= 0);

    for(int i = 1; i <= n; i++){

        int m;

        do{
            cout << "Ingrese numero " << i << ": ";
            cin >> m;

            if(m <= 0){
                cout << "Error: El numero debe ser mayor que 0.\n";
            }

        }while(m <= 0);

        if(m % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
}

void imprimirResultados(){

    cout << "\nResultados:\n";
    cout << "Total de numeros pares: " << par << endl;
    cout << "Total de numeros impares: " << impar << endl;
}

int main(){

    leerYClasificar();
    imprimirResultados();

    return 0;
}
