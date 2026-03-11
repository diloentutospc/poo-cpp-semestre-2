/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 02
Ejercicio: 10

Descripción:
Leer la calificación de n estudiantes, donde cada calificación
es una letra entre A y F. Al final mostrar cuántas hubo de
cada calificación.
*/

#include <iostream>
using namespace std;

int n, ca = 0, cb = 0, cc = 0, cd = 0, ce = 0, cf = 0;
char nota;

void leerNotasEstudiantes(){

    do{
        cout << "Ingrese cantidad de estudiantes: ";
        cin >> n;

        if(n <= 0){
            cout << "ERROR: Debe ingresar una cantidad mayor que 0.\n";
        }

    }while(n <= 0);

    for(int i = 1; i <= n; i++){

        do{
            cout << "Ingrese calificacion del estudiante " << i << ": ";
            cin >> nota;

            if(nota != 'A' && nota != 'B' && nota != 'C' &&
               nota != 'D' && nota != 'E' && nota != 'F'){
                cout << "ERROR: Debes ingresar nota A, B, C, D, E o F.\n";
            }

        }while(nota != 'A' && nota != 'B' && nota != 'C' &&
               nota != 'D' && nota != 'E' && nota != 'F');

        if(nota == 'A'){
            ca++;
        }else if(nota == 'B'){
            cb++;
        }else if(nota == 'C'){
            cc++;
        }else if(nota == 'D'){
            cd++;
        }else if(nota == 'E'){
            ce++;
        }else{
            cf++;
        }
    }
}

void imprimirResultados(){
    cout << "\nResultados:\n";
    cout << "A: " << ca << endl;
    cout << "B: " << cb << endl;
    cout << "C: " << cc << endl;
    cout << "D: " << cd << endl;
    cout << "E: " << ce << endl;
    cout << "F: " << cf << endl;
}

int main(){

    leerNotasEstudiantes();
    imprimirResultados();

    return 0;
}
