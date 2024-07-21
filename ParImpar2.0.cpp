#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int numeros[10], pares[10], impares[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> numeros[i];
        pares[i] = numeros[i];
        impares[i] = numeros[i];
    }
    cout << "Os numeros foram: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << numeros[i] << endl;
    }
    cout << "Os pares foram: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (pares[i] % 2 == 0)
        {
            cout << pares[i] << endl;
        }
    }
    cout << "Os impares foram: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (impares[i] % 2 == 1)
        {
            cout << impares[i] << endl;
        }
    }
    return 0;
}