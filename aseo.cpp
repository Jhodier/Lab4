#include "Producto.h"
#include "aseo.h"
#include <iostream>


using namespace std;

Aseo::Aseo(string nombre, string marca, int precio, int descuento, int cantidadInventario, string material)
    :nombre(nombre), marca(marca), precio(precio), cantidad(cantidadInventario), descuento(descuento * 100), material(material) {}


Aseo::Aseo() : nombre(""), marca(""), precio(0), cantidad(0), descuento(0), material("") {}


string Aseo::getMaterial() const {
    return material;
}

void Aseo::setMaterial(string material) {
    if (!material.empty()) {
        this->material = material;
    } else {
        cout << "Error: Material cannot be empty." << endl;
    }
}


float Aseo::calculadoraPreciofinal() const {
    return precio * (1 - descuento / 100.0f);  // Assuming discount is a percentage
}


void Aseo::mostrarInformacion() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: $" << precio << endl;
    cout << "Descuento: " << descuento << "%" << endl;
    cout << "Cantidad en inventario: " << cantidad << endl;
    cout << "Material: " << material << endl;
}
