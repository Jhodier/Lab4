#include "electronico.h"
#include <iostream>


Electronico::Electronico() {
    garantia = 1;
    nombre = "";
    marca = "";
    precio = 0;
    cantidad = 0;
    descuento = 0;
}

void Electronico::mostrarInformacionElectrico() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: " << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "Garantía: " << garantia << " años" << endl;
}

