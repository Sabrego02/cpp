#include <iostream>

using namespace std;

string clientes[7][5]
{
    {"C001", "Ana", "Perez",  "32018778", "any.abrego@gmail.com"},
    {"C002", "Rosa" "Perez", "88694065","rosa.perez@gmail.com"},
    {"", "", "",""},
    {"", "", "",""},
    {"", "", "",""},
    {"", "", "",""},
    {"", "", "",""},
};

int clientesActuales = 2;
int conteoClientes = 2;

void agregarClientes()

{
    system ("cls");
    cout << "''''''''''''''''''''''''''''''''" << endl;
    cout << "* DATOS CLIENTE  *" << endl;
    cout << "'''''''''''''''''''''''''''''''" << endl << endl;

    cout << "Ingrese el codigo del cliente: ";
    cin >> clientes[conteoClientes][0];
    cout << endl;
    cout << "Ingrese el nombre del cliente: ";
    cin >> clientes[conteoClientes][1];
    cout << endl;
    cout << "Ingrese el apellido: ";
    cin >> clientes[conteoClientes][2];
    cout << endl << endl;
    cout << "Ingrese el numero de telefono del cliente: ";
    cin >> clientes[conteoClientes][3];
    cout << endl << endl;
    cout << "Ingrese el correo electronico del cliente: ";
    cin >> clientes[conteoClientes][4];
    cout << endl << endl;
    cout << "Datos guardados" << endl;
    clientesActuales++;
    conteoClientes++;
    system("pause");
    system("cls");
}

void mostrarClientes()
{
    cout << "'''''''''''''''''''''''''" << endl;
    cout << "* Reporte de clientes *" << endl;
    cout << "'''''''''''''''''''''''''" << endl << endl;
    for (int i = 0; i < clientesActuales; i++)
    {
        cout << "Datos cliente No: " << i + 1 << endl;
        cout << "'''''''''''''''''''''" << endl;
        cout << "Codigo Cliente: " << clientes[i][0] << endl;
        cout << "Nombre: " << clientes[i][1]  << endl;
        cout << "Apellido: " << clientes[i][2]  << endl;
        cout << "Numero de telefono: " << clientes[i][3] << endl;
        cout << "Correo electronico: " << clientes[i][4] << endl;
        
        cout << endl;
    }
    system("pause");
    
}