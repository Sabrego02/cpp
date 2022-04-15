#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (int argc, char const *argv[])

{
    int filas =5;
    int columnas = 5;
  	int numero11 = 0;
    int numero21 = 0;
    int numero31 = 0;
    int numero41 = 0;
    int numero51 =0;
    int numero12 = 0;
    int numero22= 0;
    int numero32 = 0;
    int numero42 = 0;
    int numero52 = 0;
    int numero13 = 0;
    int numero23= 0;
    int numero33 = 0;
    int numero43 = 0;
    int numero53 = 0;
    int numero14 = 0;
    int numero24= 0;
    int numero34 = 0;
    int numero44 = 0;
    int numero54 = 0;
    int numero15 = 0;
    int numero25= 0;
    int numero35 = 0;
    int numero45 = 0;
    int numero55 = 0;
    int suma=0;
    
    srand (time(NULL));
       for (int i=0; i< 20; i++)
    {
        // genera un numero entre 1 y 10
        numero11 = rand() %10+1;
        numero21 = rand() %10+1;
        numero31 = rand() %10+1;
        numero41 = rand() %10+1;
        numero51 = rand() %10+1;
        numero12 = rand() %10+1;
        numero22= rand() %10+1;
        numero32 = rand() %10+1;
        numero42 = rand() %10+1;
        numero52 = rand() %10+1;
        numero13 = rand() %10+1;
        numero23= rand() %10+1;
        numero33 = rand() %10+1;
        numero43 = rand() %10+1;
        numero53 = rand() %10+1;
        numero14 = rand() %10+1;
        numero24= rand() %10+1;
        numero34 = rand() %10+1;
        numero44 = rand() %10+1;
        numero54 = rand() %10+1;
        numero15 = rand() %10+1;
        numero25= rand() %10+1;
        numero35 = rand() %10+1;
        numero45 = rand() %10+1;
        numero55 = rand() %10+1;
        suma=(numero11+numero21+numero31+numero41+numero51+numero12+numero22+numero32+numero42+numero52+numero13+numero23+numero33+numero43+numero53+numero14+numero24+numero34+numero44+numero54+numero15+numero25+numero35+numero45+numero55);
    }

    int numeros [filas][columnas]=
    {
     	{numero11, numero21, numero31, numero41, numero51},
        {numero12, numero22, numero32, numero42, numero52},
        {numero13, numero23, numero33, numero43, numero53},
        {numero14, numero24, numero34, numero44, numero54},
        {numero15, numero25, numero35, numero45, numero55},

    };

    for (int i=0; i<filas; i++)
    {
        for (int j=0; j<columnas; j++)
        {
            cout << numeros [i][j]<< " ";
        }

        cout << endl;
    }
 	
 	 cout << "La suma total de los numeros es "  << suma << endl;
    
   //{
    //    cout <<nombres [i][0] << " "<< nombres [i][1]<< endl;
   // }
   

    return 0;
}
