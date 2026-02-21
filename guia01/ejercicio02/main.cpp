/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 02

Descripción:
Leer una calificación entre 0 y 100 puntos y mostrar:
A (90-100)
B (80-89)
C (70-79)
D (60-69)
F (menor a 60)
Mostrar error si está fuera del rango.
*/

#include <iostream>
using namespace std;

// Variable global para almacenar los puntos
int puntos = 0;

/*
Función: leer_puntos
Descripción:
Solicita al usuario la puntuación obtenida.
*/
void leer_puntos(){
    cout << "Ingrese puntos obtenidos: ";
    cin >> puntos;
}

/*
Función: proceso
Descripción:
Determina la letra correspondiente según el rango de la calificación.
*/
void proceso(){

    if(puntos < 0 || puntos > 100){
        cout << "Error: la nota debe estar entre 0 y 100." << endl;
    }
    else if(puntos >= 90){
        cout << "Calificacion obtenida: A" << endl;
    }
    else if(puntos >= 80){
        cout << "Calificacion obtenida: B" << endl;
    }
    else if(puntos >= 70){
        cout << "Calificacion obtenida: C" << endl;
    }
    else if(puntos >= 60){
        cout << "Calificacion obtenida: D" << endl;
    }
    else{
        cout << "Calificacion obtenida: F" << endl;
    }
}

/*
Función principal
Ejecuta la lectura y evaluación de la calificación.
*/
int main(){
    leer_puntos();
    proceso();
    return 0;
}
