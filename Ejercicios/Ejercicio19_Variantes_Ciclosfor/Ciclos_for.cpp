#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i =0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    for (int i = 9; 1 >= 0; i--)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << i << " ";
        if (i == 115)
        {
            break;
        }
    }
   
    return 0;
}