#include <iostream>
#include "Productos.h"

using namespace std;

double subtotal;
double impuestoPagar;
double totalPagar;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuestoPagar=(subtotal*0.15);
    totalPagar=(subtotal+impuestoPagar);
}

void imprimirFactura()
{
    system ("cls");
    cout << "****************"<< endl;
    cout << "FACTURA"<< endl;
    cout << "****************"<< endl;
    cout << endl;

    cout << "Productos: "<< endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal:  "<< subtotal;
    cout << endl;
    cout << "Impuesto a Pagar:  "<< impuestoPagar;
    cout << endl;
    cout << "Total a Pagar:  "<< totalPagar;
    cout << endl;
    cout << endl;
    system("pause");

}