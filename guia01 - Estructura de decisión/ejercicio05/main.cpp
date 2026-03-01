/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 05

Descripción:
Leer los tres lados de un triángulo y determinar:
- Si es equilátero
- Si es isósceles
- Si es escaleno
Primero se debe validar que los lados formen un triángulo.
*/

#include <iostream>
using namespace std;

// Variables globales
int a, b, c;
bool esTri = 0;

/*
Función: leerDatos
Descripción:
Solicita al usuario ingresar los tres lados del triángulo.
*/
void leerDatos(){
    cout << "Ingresa lado a: ";
    cin >> a;

    cout << "Ingresa lado b: ";
    cin >> b;

    cout << "Ingresa lado c: ";
    cin >> c;
}

/*
Función: proceso
Descripción:
Valida si los lados forman un triángulo y
determina su tipo.
*/
void proceso(){

    // Validación de existencia del triángulo
    if(a + b > c && a + c > b && b + c > a){
        esTri = 1;
    }

    if(esTri == 0){
        cout << "No es un triangulo." << endl;
    }
    else{

        if(a == b && b == c){
            cout << "Es un triangulo equilatero." << endl;
        }
        else if(a == b || a == c || b == c){
            cout << "Es un triangulo isosceles." << endl;
        }
        else{
            cout << "Es un triangulo escaleno." << endl;
        }

    }
}

/*
Función principal
*/
int main(){
    leerDatos();
    proceso();
    return 0;
}
  
