#include <iostream>


using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void damas()
{
    system("cls");
    int opcionProducto = 0;

    cout << "\t   ABREGOs FASHION" << endl;
    cout << endl;
    cout << endl;
    cout << "\t   ******************" << endl;
    cout << "\t   * PEDIDOS PARA DAMA *" << endl;
    cout << "\t   ******************" << endl;
    cout << "1 - Vestido Casual - L 450.00" << endl;
    cout << "2 - Vestido de Noche - L 600.00" << endl;
    cout << "3 - Traje de baño - L 350.00" << endl;
    cout << "4 - Falda Corta - L 350.00" << endl;
    cout << "5 - Pantalón Jeans  - L 700.00" << endl;
    cout << "6 - Blusa con moda - L 450.00" << endl;
    cout << "7 - Blusa con escote - L 150.00" << endl;
    cout << "8 - Camiseta - L 100.00" << endl;
    cout << "9 - short corto - L 250.00" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("Vestido Casuale - L 450.00", 1, 450);
        break;

    case 2:
        agregarProducto("1  Vestido de Noche - L 600.00", 1, 600);
        break;
    
    case 3:
        agregarProducto("1 Traje de baño - L 350.00", 1, 100);
        break;
    
    case 4:
        agregarProducto("1 Falda Corta - L 350.00", 1, 350);
        break;
    
    case 5:
        agregarProducto("1Pantalon Jeans  - L 700.00", 1, 700);
        break;
    
    case 6:
        agregarProducto("1  Blusa con moda - L 450.00", 1, 450);
        break;
    
    case 7:
        agregarProducto("1 Blusa con escote - L 150.00", 1, 150);
        break;
    
    case 8:
        agregarProducto("1 Camiseta - L 100.00", 1, 100);
        break;

    case 9:
        agregarProducto("1 short corto - L 250.00", 1, 250);
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

void caballeros()
{
    system("cls");
    int opcionProducto = 0;

    cout << "\t   ABREGOs FASHION" << endl;
    cout << endl;
    cout << "\t   *******************" << endl;
    cout << "\t   * PEDIDOS PARA CABALLERO *" << endl;
    cout << "\t   *******************" << endl;
    cout << "1 - Pantalon casual jeans- L 800.00" << endl;
    cout << "2 - Pantalon Deportivo - L 750.00" << endl;
    cout << "3 - Pantalon de tela formal- L 850.00" << endl;
    cout << "4 - short corto de baño - L 245.00" << endl;
    cout << "5 - Short Deportivo - L 350.00" << endl;
    cout << "6 - Polo de manga corta  - L 290.00" << endl;
    cout << "7 - Camiseta  - L 200.00" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("1 Pantalon casual jeans- L 800.00", 1, 800);
        break;

    case 2:
        agregarProducto("1 Pantalon Deportivo - L 750.00", 1, 750);
        break;
    
    case 3:
        agregarProducto("1 Pantalon de tela formal - L 850.00", 1, 350);
        break;
    
    case 4:
        agregarProducto("1 short corto de baño - L 245.00", 1, 245);
        break;
    
    case 5:
        agregarProducto("1 Short Deportivo - L 350.00", 1, 350);
        break;
    
    case 6:
        agregarProducto("1 Polo de manga corta  - L 290.00", 1, 290);
        break;
    case 7:
        agregarProducto("1 Camiseta  - L 200.00", 1, 200);
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

void ninos()
{
    system("cls");
    int opcionProducto = 0;
    
    cout << "\t   ABREGOs FASHION" << endl;
    cout << endl;
    cout << "\t   ************************" << endl;
    cout << "\t   * PEDIDOS PARA NINOS *" << endl;
    cout << "\t   ************************" << endl;
    cout << "1 - Camisa- L 200.00" << endl;
    cout << "2 - Abrigo  - L 300.00" << endl;
    cout << "3 - Pantalon corto - L 350.00" << endl;
    cout << "4 - Short - L 280.00" << endl;
    cout << "5 - Pantalon Jeans- L 300.00" << endl;
    cout << "6 - pijama - L 250" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("1 Camisa- L 200.00", 1, 200);
        break;

    case 2:
        agregarProducto("1 Abrigo  - L 300.00", 1, 300);
        break;
    
    case 3:
        agregarProducto("1 Pantalon corto - L 350.00", 1, 350);
        break;
    
    case 4:
        agregarProducto("1 Short - L 280.00", 1, 280);
        break;
    
    case 5:
        agregarProducto("1 Pantalon Jeans- L 300.00", 1, 300);
        break;
    
    case 6:
        agregarProducto("1 pijama - L 250", 1, 250);
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

void ninas()
{
        system("cls");
    int opcionProducto = 0;

    cout << "\t   *************************" << endl;
    cout << "\t   * PEDIDOS PARA NINAS *" << endl;
    cout << "\t   *************************" << endl;
    cout << "1 - Vestido - L 300.00" << endl;
    cout << "2 - Blusa de moda  - L 250.00" << endl;
    cout << "3 - Pantalon Jeans - L 320.00" << endl;
    cout << "4 - Falda- L 180.00" << endl;
    cout << "5 - Short - L 130.00" << endl;
    cout << "6 - Traje y conjunto - L 500" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("1 Vestido - L 300.00", 1, 300);
        break;

    case 2:
        agregarProducto("1  Blusa de moda  - L 250.00", 1, 250);
        break;
    
    case 3:
        agregarProducto("1 Pantalon Jeans - L 320.00", 1, 320);
        break;
    
    case 4:
        agregarProducto("1 Falda- L 180.00", 1, 180);
        break;
    
    case 5:
        agregarProducto("1 Short - L 130.00 ", 1, 130);
        break;
    
    case 6:
        agregarProducto("1 Traje y conjunto -L500.00 ", 1, 500);
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

