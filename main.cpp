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


void insertarInicio(Nodo*& lista, Producto producto);
void eliminarProducto(Nodo*& lista, int codigo);
void imprimir(Nodo* inicio);

int main() {
    Nodo* lista = nullptr;
    Producto producto;

    std::cout << "Bienvenido al sistema de inventario" << std::endl;

    producto.Nombre = "Producto 1";
    producto.codigo = 1;
    producto.Precio = 100.0;
    insertarInicio(lista, producto);

    producto.Nombre = "Producto 2";
    producto.codigo = 2;
    producto.Precio = 200.0;
    insertarInicio(lista, producto);

    producto.Nombre = "Producto 3";
    producto.codigo = 3;
    producto.Precio = 300.0;
    insertarInicio(lista, producto);

    std::cout << "Lista de productos:" << std::endl;
    imprimir(lista);

    eliminarProducto(lista, 2);

    std::cout << "Lista despues de eliminar el producto 2:" << std::endl;
    imprimir(lista);
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


void imprimir(Nodo* inicio){

    Nodo* actual = inicio;
    while (actual != nullptr)
    {
        std::cout << "Codigo: " <<actual->producto.codigo <<std::endl;
        std::cout << "Nombre: " <<actual->producto.Nombre <<std::endl;
        std::cout << "Precio: $ " <<actual->producto.Precio <<std::endl;
        actual = actual->siguiente;

    }  
}
