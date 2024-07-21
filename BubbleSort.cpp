#include <iostream>
using namespace std;

void BubbleSort(int vetor[], int n) {
    bool verificar = false;
    int aux = 0;
    int UltimoAtrocar = -1;
     do
    {
        verificar = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (vetor[i] < vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                verificar = true;
                UltimoAtrocar = i;
            }
        }
        n = UltimoAtrocar;
    } while (verificar);
}

int main()
{
    int numeros;
    cin >> numeros;
    int lista[numeros];

    for (int i = 0; i < numeros; i++) {
        cin >> lista[i];
    }

    BubbleSort(lista, numeros);


    for (int i = 0; i < numeros; i++)
    {
        cout << lista[i] << " ";
    }

    return 0;
}