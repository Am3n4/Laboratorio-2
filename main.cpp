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
