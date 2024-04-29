#ifndef ASEO_H
#define ASEO_H
#include <iostream>
#include <string>

using namespace std;

class Aseo {
private:
    string nombre;
    string marca;
    int precio;
    int cantidad;
    int descuento;
    string material;

public:
    Aseo(string nombre, string marca, int precio, int descuento, int cantidadInventario, string material);
    Aseo ();

    string getMaterial() const;
    void setMaterial(string material);

    virtual float calculadoraPreciofinal() const = 0;
    virtual void mostrarInformacion() const = 0;

};

#endif // ASEO_H
