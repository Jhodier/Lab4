#ifndef ELECTRONICO_H
#define ELECTRONICO_H
#include <string>

using namespace std;

class Electronico {
private:
    int garantia;
public:
    virtual void mostrarInformacionElectrico() const = 0;
    Electronico();
    string nombre;
    string marca;
    int precio;
    int cantidad;
    int descuento;

};

#endif // ELECTRONICO_H
