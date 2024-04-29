#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

using namespace std;

class Producto {

private:
    string nombre;
    string marca;
    int precio;
    int cantidad;
    int descuento;

public:
   virtual void mostrarInformacioProducto() const = 0;
   void modificarNombre(const string& nuevoNombre);
   void modificarPrecio(int nuevoPrecio);
   void modificarDescuento(int nuevoDescuento);
   int obtenerPrecio() const;
   int obtenerCantidad() const;
   void vender(int cantidadVendida);


   Producto(string nombre, string marca, int precio, int cantidad, int descuento);


};

#endif // PRODUCTO_H
