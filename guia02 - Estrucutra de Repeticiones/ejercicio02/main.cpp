// Actualizado  
/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 02

Descripción:
Calcular la suma de los n primeros números naturales positivos,
donde n es ingresado por el usuario.
*/

#include <iostream>
using namespace std;

int cant, suma;

void cantNumeros(){
    do{
        cout << "Ingrese cantidad de numeros a sumar: ";
        cin >> cant;

        if(cant <= 0){
            cout << "Error: El numero ingresado debe ser positivo." << endl;
        }
    }while(cant <= 0);
}

void sumaEnteros(){

    suma = 0; // ✅ inicialización obligatoria

    for(int i = 1; i <= cant; i++){
        suma += i;
    }

    cout << "La suma de los " << cant
         << " primeros numeros naturales positivos es: "
         << suma << endl;
}

int main(){
    cantNumeros();
    sumaEnteros();
    return 0;
}
