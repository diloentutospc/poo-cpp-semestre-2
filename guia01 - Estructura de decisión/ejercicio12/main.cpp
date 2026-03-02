/*
Autor: Diego Fernando Lozano Gomez
Ejercicio 12: Calculo del IMC
Tema: Estructuras de Decision (if - else)

Descripcion:
Solicita el peso y la altura de una persona,
calcula el IMC y muestra la clasificacion:
- Bajo de peso
- Peso normal
- Sobrepeso
*/

#include <iostream>
using namespace std;

double peso, altura, imc;

//-------------------------------------------
// Funcion para leer datos
//-------------------------------------------
void leerDatos(){
    cout << "======================================" << endl;
    cout << "         CALCULO DEL IMC             " << endl;
    cout << "======================================" << endl;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    cout << endl;
}

//-------------------------------------------
// Funcion para calcular IMC
//-------------------------------------------
void calcularIMC(){
    imc = peso / (altura * altura);
}

//-------------------------------------------
// Funcion para mostrar resultado
//-------------------------------------------
void mostrarResultado(){

    cout << "IMC calculado: " << imc << endl;

    if(imc < 20){
        cout << "Clasificacion: Bajo de peso." << endl;
    }
    else if(imc >= 20 && imc <= 25){
        cout << "Clasificacion: Peso normal." << endl;
    }
    else{
        cout << "Clasificacion: Sobrepeso." << endl;
    }

    cout << "======================================" << endl;
}

//-------------------------------------------
// Funcion principal
//-------------------------------------------
int main(){

    leerDatos();
    calcularIMC();
    mostrarResultado();

    return 0;
}
