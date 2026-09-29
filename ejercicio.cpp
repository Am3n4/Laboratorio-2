#include <iostream>
#include <string>

using namespace std;

struct Producto {
    int codigo;
    string nombre;
    float precio;
};

struct Nodo{
    Producto producto;
    Nodo* siguiente;
};

void imprimir(Nodo* inicio){

    Nodo* actual = inicio;
    while (actual != nullptr)
    {
        cout << "Codigo: " <<actual->producto.codigo <<endl;
        cout << "Nombre: " <<actual->producto.nombre <<endl;
        cout << "Precio: $ " <<actual->producto.precio <<endl;
        actual = actual->siguiente;

    }  
}