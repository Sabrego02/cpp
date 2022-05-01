#include <iostream>


using namespace std;

extern void agregarClientes();
extern void damas();
extern void caballeros();
extern void ninos();
extern void ninas();
extern void TtarifaEnvio(int depto);

void catpedido()
{
    int opcion = 0;
    int depto = 0;

    agregarClientes();

    system("cls");
    cout <<" *******Escriba el dapartamento al que enviará el pedido****** "<< endl;;   
    cout <<"1. Atlantida"<< endl;
    cout <<"2. Choluteca" << endl;
    cout <<"3. Colon"<< endl;
    cout <<" 4. Copan"<< endl;
    cout << "5. Cortes"<< endl;
    cout << "6. El Paraiso"<< endl;
    cout << "7. Francisco Morazan"<< endl;
    cout << "8. Gracias a Dios"<< endl;
    cout << "9. Intibuca"<< endl;
    cout << "10. Islas de la Bahia"<< endl;
    cout << "11. La Paz"<< endl;
    cout << "12. Lempira"<< endl;
    cout << "13. Ocotepeque"<< endl;
    cout << "14. Olancho"<< endl;
    cout << "15. Santa Barbara"<< endl;
    cout << "16. Valle" << endl;
    cout << "17. Yoro" << endl;

    cin >> depto;
    TtarifaEnvio(depto);
    cout << endl;
   
    cout << "Lugar de destino guardado" << endl;
    system("pause");

    while (true)
    {
        system ("cls");

        cout << "\t   ******************" << endl;
        cout << "\t   *  CATEGORIA DE PEDIDOS  *" << endl;
        cout << "\t   ******************" << endl;
        cout << endl << endl << endl;

        cout << "1. - Pedido Ropa para Dama" << endl;
        cout << "2. - Pedido Ropa para Caballero" << endl;
        cout << "3. - Pedido Ropa para ninos " << endl;
        cout << "4. - Pedido Ropa para ninas" << endl;
        cout << "0. - Salir" << endl;
        
        cout << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 0){
        break;
        }
        if (opcion == 1)
        {
            damas();
        } 
        else if (opcion == 2) 
        {
            caballeros();
        } 
        else if (opcion == 3) 
        {
            ninos();
        }
        else if (opcion == 4) 
        {
            ninas();
        }
    }
}    
