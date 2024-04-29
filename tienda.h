#ifndef TIENDA_H
#define TIENDA_H
#include "aseo.h"
#include <vector>
#include <memory>
#include "Producto.h"


using namespace std;


class Tienda {
private:
    vector<std::shared_ptr<Producto>> inventario;

public:
    Tienda();
    void agregarProducto(shared_ptr<Producto> producto);
    void modificarProducto(int indice);
    void realizarCompra();
    void mostrarProductos() const;
    void cargarDatosIniciales();
    double imprimirRecibo();


};

#endif // TIENDA_H
