#include <iostream>
#include <stdlib.h> /*srand (seed rand), rand*/
#include <time.h> /*time*/

using namespace std;

int main (int argc, char const *argv[])

{
    srand (time (NULL));
    int numeroALAzar=0;
   while (true)
   {
       numeroALAzar=rand() % 1000 +1;
       cout << numeroALAzar<< endl;
   }

return 0;

}