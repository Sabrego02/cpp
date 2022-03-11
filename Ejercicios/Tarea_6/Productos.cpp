 #include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos (int opcion)
{
    system ("cls");

int opcionProducto=0;
    switch (opcion)
    {
    case 1:
    {
       
        cout << " Bebidas Calientes" << endl;
        cout <<" ******************" << endl;
        cout <<"  1- Capuccino" << endl;
        cout <<"  2- Expresso" << endl;
        cout <<"  3- Latte" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto( "Capuccino - L 40.00", 1, 40);
            break;  
         case 2:
            agregarProducto( "Expresso - L 30.00", 1, 30);
        case 3:
            agregarProducto( "Latte - L 50.00", 1, 50);
        
            break; 
        default:
            {
                cout << "Opcion no valida";
                return;
                break;

            }
            
        }
        
        cout << endl;
        cout << "Producto agregado"<< endl;
        system("pause");
        break;
    }

    case 2:
    {
       
        cout << " Bebidas Frias" << endl;
        cout <<" ******************" << endl;
        cout << " 1- Mochaccino" << endl;
        cout <<"  2- Frapuchatta" << endl;
        cout <<"  3- Pistachio" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto( "Mochaccino - L 80.00", 1, 80);
            break;  
         case 2:
            agregarProducto( "Frapuchatta - L 70.00", 1, 70);
        case 3:
            agregarProducto( "Pistachio - L 60.00", 1, 60);
        
            break; 
        default:
            {
                cout << "Opcion no valida";
                return;
                break;

            }
            
        }
        
        cout << endl;
        cout << "Producto agregado"<< endl;
        system("pause");
        break;
    }
    case 3:
    {
       
        cout << "  Reposteria" << endl;
        cout <<" ******************" << endl;
        cout <<" 1- BROWNIE" << endl;
        cout <<"  2- CHEESECAKE" << endl;
        cout <<"  3- CHILENA" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto( "BROWNIE - L 100.00", 1, 100);
            break;  
         case 2:
            agregarProducto( "CHEESECAKE - L 90.00", 1, 90);
        case 3:
            agregarProducto( "CHILENA - L 85.00", 1, 85);
        
            break; 
        default:
            {
                cout << "Opcion no valida";
                return;
                break;

            }
            
        }
        
        cout << endl;
        cout << "Producto agregado"<< endl;
        system("pause");
        break;
    }
        
    
    default:
        break;
    }
}