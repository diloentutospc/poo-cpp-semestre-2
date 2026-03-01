/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Guía: 01
Ejercicio: 06

Descripción:
Determinar la temporada del clima según el mes ingresado.
- Diciembre, Enero, Febrero  → Invierno
- Marzo, Abril, Mayo         → Primavera
- Junio, Julio, Agosto       → Verano
- Septiembre, Octubre, Noviembre → Otoño
*/

#include <iostream>
using namespace std;

// Variable global para almacenar el mes
string mes;

/*
Función: leerMes
Descripción:
Solicita al usuario el nombre de un mes.
*/
void leerMes() {
    cout << "====================================" << endl;
    cout << "   DETERMINAR TEMPORADA DEL CLIMA   " << endl;
    cout << "====================================" << endl;
    cout << "Ingrese el nombre del mes (en minuscula): ";
    cin >> mes;
}

/*
Función: determinarTemporada
Descripción:
Clasifica el mes ingresado en su respectiva temporada.
*/
void determinarTemporada() {

    cout << endl;
    cout << "Resultado: ";

    if (mes == "diciembre" || mes == "enero" || mes == "febrero") {
        cout << "Temporada de invierno." << endl;
    }
    else if (mes == "marzo" || mes == "abril" || mes == "mayo") {
        cout << "Temporada de primavera." << endl;
    }
    else if (mes == "junio" || mes == "julio" || mes == "agosto") {
        cout << "Temporada de verano." << endl;
    }
    else if (mes == "septiembre" || mes == "octubre" || mes == "noviembre") {
        cout << "Temporada de otono." << endl;
    }
    else {
        cout << "El texto ingresado no corresponde a un mes valido." << endl;
    }
}

/*
Función principal
*/
int main() {
    leerMes();
    determinarTemporada();
    return 0;
}
  
