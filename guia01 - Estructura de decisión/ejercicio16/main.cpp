//  
/*
Autor: Diego Fernando Lozano Gomez
Ejercicio 16: Clasificación de Productos
Tema: Estructuras de Decisión (if / else)

Descripción:
Solicita la clasificación de un producto y muestra el tipo correspondiente.
Además, informa si el producto tiene descuento según la categoría.
Si la clasificación no existe, muestra "Producto inválido".
*/

#include <iostream>
using namespace std;

char clasificacion;
string tipo;
string descuento;

//--------------------------------------------------
// Función para leer la clasificación
//--------------------------------------------------
void leerClasificacion() {
    cout << "==========================================" << endl;
    cout << "      CLASIFICACION DE PRODUCTOS          " << endl;
    cout << "==========================================" << endl;
    cout << "Ingrese clasificacion (F,V,L,B,D,C,N,P,M,E,H,J): ";
    cin >> clasificacion;
    cout << endl;
}

//--------------------------------------------------
// Función para determinar el tipo de producto
//--------------------------------------------------
void procesarClasificacion() {

    if (clasificacion == 'F') {
        tipo = "Frutas";
    }
    else if (clasificacion == 'V') {
        tipo = "Verduras";
    }
    else if (clasificacion == 'L') {
        tipo = "Lacteos";
    }
    else if (clasificacion == 'B') {
        tipo = "Bebes";
    }
    else if (clasificacion == 'D') {
        tipo = "Damas";
    }
    else if (clasificacion == 'C') {
        tipo = "Caballeros";
    }
    else if (clasificacion == 'N') {
        tipo = "Ninos";
    }
    else if (clasificacion == 'P') {
        tipo = "Perfumeria";
    }
    else if (clasificacion == 'M') {
        tipo = "Medicamento Farmaceutico";
    }
    else if (clasificacion == 'E') {
        tipo = "Electronicos";
    }
    else if (clasificacion == 'H') {
        tipo = "Hogar";
    }
    else if (clasificacion == 'J') {
        tipo = "Jugueteria";
    }
    else {
        tipo = "Producto invalido";
    }
}

//--------------------------------------------------
// Función para aplicar descuentos
//--------------------------------------------------
void aplicarDescuento() {

    descuento = "";

    if (clasificacion == 'E') {
        descuento = "Tiene un 15% de descuento todos los fines de semana.";
    }
    else if (clasificacion == 'F' || clasificacion == 'V') {
        descuento = "Tiene un 20% de descuento todos los martes.";
    }
    else if (clasificacion == 'H' || clasificacion == 'J') {
        descuento = "Tiene un 25% de descuento en temporada navidena y si el cliente es afiliado.";
    }
}

//--------------------------------------------------
// Función para mostrar resultados
//--------------------------------------------------
void mostrarResultado() {

    cout << "==========================================" << endl;
    cout << "RESULTADO:" << endl;
    cout << "Tipo de producto: " << tipo << endl;

    if (tipo != "Producto invalido" && descuento != "") {
        cout << descuento << endl;
    }

    cout << "==========================================" << endl;
}

//--------------------------------------------------
// Función principal
//--------------------------------------------------
int main() {

    leerClasificacion();
    procesarClasificacion();
    aplicarDescuento();
    mostrarResultado();

    return 0;
}
  
  
