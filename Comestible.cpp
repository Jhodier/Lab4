#include "Comestible.h"
#include <string>
#include <iostream>

Comestible::Comestible() {
    fechaVencimiento = "";
    Nombre = "";
    Marca = "";
    Precio = 0;
    Cantidad = 0;
    Descuento = 0;
}

void Comestible::mostrarInformacionComestible() const {
    cout << "Nombre: " << Nombre << endl;
    cout << "Marca: " << Marca << endl;
    cout << "Precio: " << Precio << endl;
    cout << "Cantidad: " << Cantidad << endl;
    cout << "Descuento: " << Descuento << endl;
    cout << "Fecha de vencimiento: " << fechaVencimiento << endl;
}

