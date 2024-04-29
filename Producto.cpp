#include "Producto.h"
#include <iostream>

Producto::Producto(string nombre, string marca, int precio, int cantidad, int descuento) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->cantidad = cantidad;
    this->descuento = descuento;
}

void Producto::modificarNombre(const string& nuevoNombre) {
    this->nombre = nuevoNombre;
}

void Producto::modificarPrecio(int nuevoPrecio) {
    this->precio = nuevoPrecio;
}

void Producto::modificarDescuento(int nuevoDescuento) {
    this->descuento = nuevoDescuento;
}

int Producto::obtenerPrecio() const {
    return this->precio;
}

int Producto::obtenerCantidad() const {
    return this->cantidad;
}

void Producto::vender(int cantidadVendida) {
    if (cantidadVendida <= this->cantidad) {
        this->cantidad -= cantidadVendida;
    } else {
        cout << "No se puede vender una cantidad mayor a la disponible." << endl;
    }
}

// Definición de la función virtual mostrarInformacionProdcuto()
void Producto::mostrarInformacioProducto() const {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Marca: " << this->marca << endl;
    cout << "Precio: " << this->precio << endl;
    cout << "Cantidad: " << this->cantidad << endl;
    cout << "Descuento: " << this->descuento << "%" << endl;
}
