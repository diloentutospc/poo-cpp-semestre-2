// Actualizado  
/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 03

Descripción:
Imprimir los primeros n números pares comenzando desde 2,
donde n es ingresado por el usuario.
*/

#include <iostream>
using namespace std;

void imprimirPares(){
    int n;
    do{
        cout << "Cuantos numeros pares deseas imprimir: ";
        cin >> n;

        if(n <= 0){
            cout << "Error: Debe ingresar un numero positivo.\n";
        }
    }while(n <= 0);

    int s = 2;

    for(int i = 1; i <= n; i++){
        cout << s << " ";
        s += 2;
    }

    cout << endl;
}

int main(){
    imprimirPares();
    return 0;
}
