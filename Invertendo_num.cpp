#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int numero;

    cin >> numero;
    
    while (numero > 0)
    {
        cout << numero % 10;
        numero -= numero % 10;
        numero /= 10;
    }
    return 0;
}