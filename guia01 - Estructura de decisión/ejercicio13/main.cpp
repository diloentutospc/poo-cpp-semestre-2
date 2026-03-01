/*
Autor: Diego Fernando Lozano Gomez
Ejercicio 13: Ordenar tres numeros enteros
Tema: Estructuras de Decision (if - else)

Descripcion:
Leer tres valores enteros y mostrarlos en forma ascendente
y descendente sin usar metodos de ordenamiento,
ni estructuras de datos, ni funciones max() o min().
*/

#include <iostream>
using namespace std;

int a, b, c;
int mayor, medio, menor;

//--------------------------------------------------
// Funcion para leer los datos
//--------------------------------------------------
void leerDatos() {
    cout << "==========================================" << endl;
    cout << "      ORDENAR TRES NUMEROS ENTEROS       " << endl;
    cout << "==========================================" << endl;

    cout << "Ingrese numero 1: ";
    cin >> a;

    cout << "Ingrese numero 2: ";
    cin >> b;

    cout << "Ingrese numero 3: ";
    cin >> c;

    cout << endl;
}

//--------------------------------------------------
// Funcion para determinar el orden
//--------------------------------------------------
void procesarOrden() {

    if (a > b) {
        if (a > c) {
            if (b > c) {
                mayor = a;
                medio = b;
                menor = c;
            } else {
                mayor = a;
                medio = c;
                menor = b;
            }
        } else {
            mayor = c;
            medio = a;
            menor = b;
        }
    } else {
        if (b > c) {
            if (a > c) {
                mayor = b;
                medio = a;
                menor = c;
            } else {
                mayor = b;
                medio = c;
                menor = a;
            }
        } else {
            mayor = c;
            medio = b;
            menor = a;
        }
    }
}

//--------------------------------------------------
// Funcion para mostrar resultados
//--------------------------------------------------
void mostrarResultado() {

    cout << "==========================================" << endl;

    cout << "En forma ascendente : "
         << menor << ", " << medio << ", " << mayor << endl;

    cout << "En forma descendente: "
         << mayor << ", " << medio << ", " << menor << endl;

    cout << "==========================================" << endl;
}

//--------------------------------------------------
// Funcion principal
//--------------------------------------------------
int main() {

    leerDatos();
    procesarOrden();
    mostrarResultado();

    return 0;
}
