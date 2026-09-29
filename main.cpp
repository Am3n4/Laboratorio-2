#include <iostream>
#include <string>

struct Producto {
    std::string Nombre;
    int codigo;
    double Precio;
};


struct Nodo{
    Producto producto;
    Nodo* siguiente;
};


void insertarProducto(Nodo*& lista, Producto producto);
void eliminarProducto(Nodo*& lista, int codigo);

int main() {

    std::cout << "Bienvenido al sistema de inventario" << std::endl;
    std::cout << "Ingrese el nombre del producto: ";
    Producto producto;
    std::cin >> producto.Nombre;
    std::cout << "Ingrese el codigo del producto: ";
    std::cin >> producto.codigo;
    std::cout << "Ingrese el precio del producto: ";
    std::cin >> producto.Precio;
    return 0;
}

void eliminarProducto(Nodo*& lista, int codigo) {
    Nodo* actual = lista;
    Nodo* anterior = nullptr;

    while (actual != nullptr && actual->producto.codigo != codigo) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == nullptr) {
        std::cout << "Producto no encontrado." << std::endl;
        return;
    }

    if (anterior == nullptr) {
        lista = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }

    delete actual;
    std::cout << "Producto eliminado." << std::endl;
}

void insertarInicio(Nodo*& lista, Producto producto){
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->producto = producto;
    nuevoNodo->siguiente = lista;
    lista = nuevoNodo;
    std::cout << "Producto insertado al inicio de la lista" << std::endl;
}
