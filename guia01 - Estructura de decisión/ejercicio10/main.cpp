/*
Autor: Diego Fernando Lozano Gomez
Ejercicio 10: Menu con 5 opciones
Tema: Estructuras de Decision (if - switch)

Descripcion:
Mostrar un menu con cinco opciones y una opcion para salir.
Cada opcion ejecuta una tarea simple.
El programa se ejecuta una sola vez (sin ciclos).
*/

#include <iostream>
using namespace std;

//--------------------------------------------
// Opcion 1
//--------------------------------------------
void opcion1() {
    cout << "Ejecutando opcion 1..." << endl;
}

//--------------------------------------------
// Opcion 2
//--------------------------------------------
void opcion2() {
    cout << "Ejecutando opcion 2..." << endl;
}

//--------------------------------------------
// Opcion 3
//--------------------------------------------
void opcion3() {
    cout << "Ejecutando opcion 3..." << endl;
}

//--------------------------------------------
// Opcion 4
//--------------------------------------------
void opcion4() {
    cout << "Ejecutando opcion 4..." << endl;
}

//--------------------------------------------
// Opcion 5
//--------------------------------------------
void opcion5() {
    cout << "Ejecutando opcion 5..." << endl;
}

//--------------------------------------------
// Menu
//--------------------------------------------
void menu() {

    int opcion;

    cout << "==================================" << endl;
    cout << "              MENU                " << endl;
    cout << "==================================" << endl;
    cout << "1. Opcion 1" << endl;
    cout << "2. Opcion 2" << endl;
    cout << "3. Opcion 3" << endl;
    cout << "4. Opcion 4" << endl;
    cout << "5. Opcion 5" << endl;
    cout << "0. Salir" << endl;
    cout << "Seleccione opcion: ";
    cin >> opcion;

    switch(opcion) {

        case 1: opcion1(); break;
        case 2: opcion2(); break;
        case 3: opcion3(); break;
        case 4: opcion4(); break;
        case 5: opcion5(); break;
        case 0: cout << "Saliendo..." << endl; break;

        default:
            cout << "Opcion invalida." << endl;
    }
}

//--------------------------------------------
int main() {

    menu();

    return 0;
}
