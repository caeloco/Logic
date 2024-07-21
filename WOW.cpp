#include <iostream>
using namespace std;

int main()
{
    char CampoDeBatalha[10][10];
    int HordaBuff = 0;
    int aux = 0, aux2 = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> CampoDeBatalha[i][j];
            if (j < 5 && CampoDeBatalha[i][j] == 'm')
            {
                aux++;
            }
            if (j > 4 && CampoDeBatalha[i][j] == 'm')
            {
                aux2++;
            }
        }
    }

    int horda = 0;
    int alianca = 0;

    // Verifica a Horda com o mago
    if (aux == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (CampoDeBatalha[i][j] == 'o')
                {
                    horda++;
                    if (j != 0 && CampoDeBatalha[i][j - 1] == 'o')
                    {
                        HordaBuff++;
                    }
                    if (j != 4 && CampoDeBatalha[i][j + 1] == 'o')
                    {
                        HordaBuff++;
                        if (HordaBuff == 2)
                        {
                            horda += 2;
                            HordaBuff = -1;
                        }
                    }
                    if (i != 0 && CampoDeBatalha[i - 1][j] == 'o')
                    {
                        HordaBuff++;
                        if (HordaBuff == 2)
                        {
                            horda += 2;
                            HordaBuff = -1;
                        }
                    }
                    if (i != 9 && CampoDeBatalha[i + 1][j] == 'o')
                    {
                        HordaBuff++;
                        if (HordaBuff == 2)
                        {
                            horda += 2;
                            HordaBuff = -1;
                        }
                    }
                    HordaBuff = 0;
                }
                else if (CampoDeBatalha[i][j] == 'm')
                {
                    horda++;
                }
            }
        }
    }

    // Verifica a Horda sem o mago
    else
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (CampoDeBatalha[i][j] == 'o')
                {
                    horda++;
                }
            }
        }
    }

    // Verifica a Alianca com o mago
    if (aux2 == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 5; j < 10; j++)
            {
                if (CampoDeBatalha[i][j] == 'h')
                {
                    alianca++;
                    if (j != 5 && CampoDeBatalha[i][j - 1] == 'h')
                    {
                        alianca++;
                    }
                    if (j != 9 && CampoDeBatalha[i][j + 1] == 'h')
                    {
                        alianca++;
                    }
                    if (i != 0 && CampoDeBatalha[i - 1][j] == 'h')
                    {
                        alianca++;
                    }
                    if (i != 9 && CampoDeBatalha[i + 1][j] == 'h')
                    {
                        alianca++;
                    }
                }
                else if (CampoDeBatalha[i][j] == 'm')
                {
                    alianca++;
                }
            }
        }
    }

    // Verifica a Alianca sem o mago
    else
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 5; j < 10; j++)
            {
                if (CampoDeBatalha[i][j] == 'h')
                {
                    alianca++;
                }
            }
        }
    }

    if (horda > alianca)
    {
        cout << "Loktar Ogar!!!";
    }
    else if (alianca > horda)
    {
        cout << "Pela Alianca!";
    }
    else
    {
        cout << "Batalha lendaria!";
    }
    cout << endl << horda << endl << alianca;

    return 0;
}