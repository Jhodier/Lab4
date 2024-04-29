#include "aseo.h"
#include "Comestible.h"
#include "cuentacorriente.h"
#include "electronico.h"
#include "Producto.h"
#include "tienda.h"
#include "memory"
using namespace std;

int main() {

  // Creando una tienda
  Tienda miTienda;

  miTienda.cargarDatosIniciales();

  int opcion;
  do {
    cout << "\n\nMENU PRINCIPAL" << endl;
    cout << "1. Mostrar productos" << endl;
    cout << "2. Agregar producto" << endl;
    cout << "3. Modificar producto" << endl;
    cout << "4. Realizar compra" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;

    switch (opcion) {
      case 1:
        miTienda.mostrarProductos();
        break;
      case 2:
        string nombreProducto;
        string marcaProducto;
        int precioProducto;
        int cantidadProducto;
        int descuentoProducto;
        string materialProducto;

        cout << "\nIngrese el nombre del producto: ";
        cin >> nombreProducto;
        cout << "Ingrese la marca del producto: ";
        cin >> marcaProducto;
        cout << "Ingrese el precio del producto: ";
        cin >> precioProducto;
        cout << "Ingrese la cantidad del producto: ";
        cin >> cantidadProducto;
        cout << "Ingrese el descuento del producto: ";
        cin >> descuentoProducto;
        cout << "Ingrese el material del producto: ";
        cin >> materialProducto;

        shared_ptr<Aseo> nuevoProducto = make_shared<Aseo>(nombreProducto, marcaProducto, precioProducto, descuentoProducto, cantidadProducto, materialProducto);

        // Se agrega el nuevo producto al inventario de la tienda
        miTienda.agregarProducto(nuevoProducto);

        cout << "\nProducto agregado exitosamente." << endl;
        break;

      case 3:
        // Se le pide al usuario ingresar el índice del producto que desea modificar
        int indiceProducto;
        cout << "\nIngrese el índice del producto que desea modificar: ";
        cin >> indiceProducto;

        // Se modifica el producto en el índice especificado
        miTienda.modificarProducto(indiceProducto);

        cout << "\nProducto modificado exitosamente." << endl;
        break;

      case 4:
        // Se realiza la compra
        miTienda.realizarCompra();

        cout << "\nCompra realizada exitosamente." << endl;
        break;

      case 5:
        cout << "\nSaliendo del programa..." << endl;
        break;

      default:
        cout << "\nOpción no válida." << endl;
    }
  } while (opcion != 5);

  return 0;
}
