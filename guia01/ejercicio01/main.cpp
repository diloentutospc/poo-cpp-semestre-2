/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 01

Descripción:
Leer la calificación de un estudiante y determinar si:
- Aprueba (nota > 2.9)
- Habilita (2.0 <= nota <= 2.9)
- Reprueba (nota < 2.0)
*/

#include <iostream>
using namespace std;

// Variable global que almacena la nota ingresada
double nota = 0;

/*
Función: leer_notas
Descripción:
Solicita al usuario que ingrese la nota y la almacena en la variable global.
*/
void leer_notas(){
    cout << "Por favor ingresa la nota a evaluar: ";
    cin >> nota;
}

/*
Función: proceso
Descripción:
Evalúa la nota ingresada y determina el estado académico del estudiante.
*/
void proceso(){
    if(nota > 2.9){
        cout << "Resultado: Aprobo la asignatura." << endl;
    }
    else if(nota >= 2.0){
        cout << "Resultado: Habilita la asignatura." << endl;
    }
    else{
        cout << "Resultado: Reprueba la asignatura." << endl;
    }
}

/*
Función principal
Ejecuta la lectura de la nota y el proceso de evaluación.
*/
int main() {
    leer_notas();
    proceso();
    return 0;
}
