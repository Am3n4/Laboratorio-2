#include <iostream>
#include <string>

struct Producto {
    std::string Nombre;
    int codigo;
    double Precio;
};

int main() {

    std::cout << "Vienvenido al sistema de inventario" << std::endl;
    std::cout << "Ingrese el nombre del producto: ";
    Producto producto;
    std::cin >> producto.Nombre;
    std::cout << "Ingrese el codigo del producto: ";
    std::cin >> producto.codigo;
    std::cout << "Ingrese el precio del producto: ";
    std::cin >> producto.Precio;
    return 0;
}