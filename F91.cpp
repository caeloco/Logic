#include <iostream>
using namespace std;

int f91(int x)
{
    return x - 10;
}

int main()
{
    int a[100];
    int aux = -1;

    for (int i = 0; i < 100; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            i = 101;
        }
        aux++;
    }

    for (int i = 0; i < aux; i++) {
        if (a[i] > 100) { 
        cout << "f91(" << a[i] << ") = " << f91(a[i]) << endl;
        }
        else {
            cout << "f91(" << a[i] << ") = " << a[i] << endl;
        }
    }

    return 0;
}