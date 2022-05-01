#include <iostream>

using namespace std;

double subtotal;
double tarifaEnvio = 0;
double total = 0;
string listaProductos;


void TtarifaEnvio (int  depto)
{

     switch (depto)
    {
    case 1:
        depto== 1;
        tarifaEnvio=100;
        break;

    case 2:
        depto== 2;
        tarifaEnvio=110;
        break;
    
    case 3:
        depto== 3;
        tarifaEnvio=100;
        break;
    
    case 4:
        depto== 4;
        tarifaEnvio=130;
        break;
    
    case 5:
        depto== 5;
        tarifaEnvio=140;
        break;
    
    case 6:
        depto== 6;
        tarifaEnvio=100;
        break;
    case 7:
        depto== 7;
        tarifaEnvio=115;
        break;
    case 8:
        depto== 8;
        tarifaEnvio=110;
        break;
    case 9:
        depto== 9;
        tarifaEnvio=150;
        break;
     case 10:
        depto== 10;
        tarifaEnvio=170;
        break;
     case 11:
        depto== 11;
        tarifaEnvio=180;
        break;

     case 12:
        depto== 12;
        tarifaEnvio=190;
        break;
    
     case 13:
        depto== 13;
        tarifaEnvio=180;
        break;

    case 14:
        depto== 14;
        tarifaEnvio=200;
        break;

     case 15:
        depto== 15;
        tarifaEnvio=230;
        break;

    case 16:
        depto== 16;
        tarifaEnvio=210;
        break;

    case 17:
        depto== 17;
        tarifaEnvio=80;
        break;

    default:
        {
            cout << "opcion no valida" << endl << endl;
            system("pause");
            return;
            break;
        }
    }
    
}

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    tarifaEnvio=tarifaEnvio;
}


void imprimirFactura()
{

    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl; 

    cout <<"Productos: " << endl;
    cout << listaProductos;
    cout << endl;

    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;

    cout << "Tarifa de envio: " << tarifaEnvio;
    cout << endl;
    cout << endl;


    total = (subtotal + tarifaEnvio);

    cout << "Total a pagar: L. " << total;
    cout << endl;
    cout << endl;

    system("pause");

}

