
/*
Autor: Diego Fernando Lozano Gomez
Curso: Programación Orientada a Objetos
Semestre: 2
Guía: 01
Ejercicio: 14

Descripción:
Leer el nombre de un artículo, tipo (A, B o C), precio de compra y cantidad.
- Calcular precio de venta al público aumentando el precio de compra en 50%.
- Aplicar descuento base:
  A: 10%   B: 20%   C: 30%
- Si el tipo es B, aplicar descuento adicional según cantidad:
  < 5   : 0%
  5 a 15: 5%
  > 15  : 2%
- Calcular IVA del 16% sobre el precio con descuento.
- Mostrar factura con la información de la venta.
*/

#include <iostream>
using namespace std;

string np;
char tipo;
double pc, pv;
double db, da;
int cant;

void leerDatos(){
    cout << "======================================" << endl;
    cout << "           REGISTRO DE VENTA          " << endl;
    cout << "======================================" << endl;

    cout << "Ingrese nombre del producto: ";
    cin >> np;

    cout << "Ingrese tipo del producto (A, B o C): ";
    cin >> tipo;

    cout << "Ingrese precio de compra: ";
    cin >> pc;

    cout << "Ingrese cantidad a vender: ";
    cin >> cant;
}

void precioDeVenta(){
    pv = pc + (pc * 0.50);
}

void descuentos(){
    // Inicializamos descuentos
    db = 0;
    da = 0;

    // Descuento base por tipo
    if(tipo == 'A'){
        db = pv * 0.10;
    }else if(tipo == 'B'){
        db = pv * 0.20;
    }else if(tipo == 'C'){
        db = pv * 0.30;
    }

    // Descuento adicional solo para tipo B
    if(tipo == 'B'){
        if(cant < 5){
            da = 0;
        }else if(cant >= 5 && cant <= 15){
            da = pv * 0.05;
        }else{
            da = pv * 0.02;
        }
    }

    // Pasamos descuentos a valores totales (por cantidad)
    db = db * cant;
    da = da * cant;
}

void factura(){
    double subtotal = pv * cant;
    double subtotalConDescuento = subtotal - db - da;
    double valorIVA = subtotalConDescuento * 0.16;
    double total = subtotalConDescuento + valorIVA;

    cout << "\n======================================" << endl;
    cout << "               FACTURA                " << endl;
    cout << "======================================" << endl;
    cout << "Producto:       " << np << endl;
    cout << "Tipo:           " << tipo << endl;
    cout << "Cantidad:       " << cant << endl;
    cout << "Precio unitario:$ " << pv << endl;
    cout << "--------------------------------------" << endl;
    cout << "Subtotal:               $ " << subtotal << endl;
    cout << "Descuento base:         $ " << db << endl;
    cout << "Descuento adicional:    $ " << da << endl;
    cout << "Subtotal con descuento: $ " << subtotalConDescuento << endl;
    cout << "IVA (16%):              $ " << valorIVA << endl;
    cout << "--------------------------------------" << endl;
    cout << "TOTAL A PAGAR:          $ " << total << endl;
    cout << "======================================" << endl;
}

int main(){
    leerDatos();
    precioDeVenta();
    descuentos();
    factura();
    return 0;
}
