#include <iostream>
using namespace std;

int main()
{
    int Fileiras, Cadeiras;
    cin >> Fileiras >> Cadeiras;
    int sala[Fileiras][Cadeiras];
    int x, y, f;

    for (int i = 1; i < Fileiras + 1; i++)
    {
        for (int j = 1; j < Cadeiras + 1; j++)
        {
            cin >> sala[i][j];
            if (sala[i][j] == 0 && sala[i][j - 1] == 0 && j - 1 != 0)
            {
                x = j - 1;
                y = j;
                f = i;
            }
        }
    }

    cout << "Fileira: " << f << endl;
    cout << "Assentos: " << x << " e " << y;
    return 0;
}
