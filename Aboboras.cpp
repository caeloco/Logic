#include <iostream>
using namespace std;

int main()
{
    int harry = 0, ron = 0;
    int tamanhoplantacao;
    cin >> tamanhoplantacao;
    int plantacao[tamanhoplantacao][tamanhoplantacao];

    for (int i = 0; i < tamanhoplantacao; i++) { 
        for (int j = 0; j < tamanhoplantacao; j++) {
            cin >> plantacao[i][j];
        }
    }

    int linha, coluna;
    cin >> linha >> coluna;
    int aux = 0;

    while (true) {
        
        ron += plantacao[aux][coluna];       
        plantacao[aux][coluna] = 0;
        
        harry += plantacao[linha][aux];
        plantacao[linha][aux] = 0;
        
        aux++;
        if (aux == tamanhoplantacao){
            break;
        }
    }

    cout << "Harry " << harry << endl;
    cout << "Ron " << ron;
    return 0;
}