#include <iostream>
#include "seguridad.h"
#include "menu.h"
#include "clientes.h"
#include "catpedido.h"
#include "productos.h"
#include "factura.h"

using namespace std; 

int main (int argc, char const * argv[])

{
	bool respuesta =login ();
	
	if (respuesta== true){
		menu();
		return 0;
	}
	
	
}
