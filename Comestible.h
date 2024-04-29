#ifndef COMESTIBLE_H
#define COMESTIBLE_H
#include <string>
#include "Producto.h"


class Comestible {
private:
    string fechaVencimiento;

public:
    virtual void mostrarInformacionComestible() const = 0;
    Comestible();
    string Nombre;
    string Marca;
    int Precio;
    int Cantidad;
    int Descuento;

};

#endif // COMESTIBLE_H
