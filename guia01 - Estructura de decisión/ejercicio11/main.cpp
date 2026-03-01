/*
Autor: Diego Fernando Lozano Gomez
Ejercicio: Calculadora básica con memoria
Tema: Estructuras de decisión (if / else)

Descripción:
Permite realizar una operación básica seleccionada por el usuario.
Incluye memoria para guardar el resultado.
*/

#include <iostream>
using namespace std;

double num1, num2;
double resultado = 0;
double memoria = 0;
int opcion;

void mostrarMenu(){
    cout << "==============================" << endl;
    cout << "        CALCULADORA          " << endl;
    cout << "==============================" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
}

void leerNumeros(){
    cout << "Ingrese primer numero: ";
    cin >> num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;
}

void operar(){
    if(opcion == 1){
        resultado = num1 + num2;
    }
    else if(opcion == 2){
        resultado = num1 - num2;
    }
    else if(opcion == 3){
        resultado = num1 * num2;
    }
    else if(opcion == 4){
        if(num2 != 0){
            resultado = num1 / num2;
        }else{
            cout << "Error: No se puede dividir entre cero." << endl;
            return;
        }
    }
    else{
        cout << "Opcion invalida." << endl;
        return;
    }

    cout << "Resultado: " << resultado << endl;
}

void guardarMemoria(){
    memoria = resultado;
    cout << "Resultado guardado en memoria." << endl;
    cout << "Valor en memoria: " << memoria << endl;
}

int main(){
    mostrarMenu();
    leerNumeros();
    operar();
    guardarMemoria();

    return 0;
}
  
  
