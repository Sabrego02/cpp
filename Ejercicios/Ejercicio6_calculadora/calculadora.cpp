#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{ 
   double a = 0;
   double b = 0;
   double suma, resta, multiplicacion, division = 0;
   
   cout << "Ingrese el valor de a: ";
   cin >> a;

   cout << endl;

   cout << "Ingrese el valor de b: ";
   cin >> b;

   cout << endl;

   // Proceso
   suma = a+b;
   resta= a-b;
   multiplicacion = a*b;
   division= a/b;

   // Salida

   cout << "La suma de a + b es: " << suma << endl;
   cout << "La resta de a - b es: " << resta << endl ;
   cout << "La multiplicacion de a * b es: " << multiplicacion << endl;
   cout << "La division de a / b es: " << division << endl;


    return 0;
}