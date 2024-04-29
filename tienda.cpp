#include "tienda.h"
#include <iostream>
#include <vector>
#include "Producto.h"
#include "aseo.h"

using namespace std;

Tienda::Tienda() {
}

void Tienda::agregarProducto(shared_ptr<Producto> producto) {
    inventario.push_back(producto);
}

void Tienda::modificarProducto (int indice){
    if (indice >= 0 && indice <static_cast<int> (inventario.size())) {

    } else {
        cout << "Índice inválido. No se pudo modificar el producto." << endl;
    }
}

void Tienda::realizarCompra() {
}

void Tienda::mostrarProductos() const {

}

void Tienda::cargarDatosIniciales() {
}
