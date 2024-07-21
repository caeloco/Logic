#include <iostream>
using namespace std;

int main() {
    int linhas, colunas, soma = 0;
    cin >> linhas >> colunas;
    int plantacao[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> plantacao[i][j];
        }
    }

    char aux;
    cin >> aux;
    int colher;
    cin >> colher;

    if (aux == 'L' || aux == 'l') {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                soma += plantacao[i][j];
            }
        }
    }

    else if (aux == 'C' || aux == 'c') {
        for (int j = 0; j < colunas; i++) {
            for (int i = 0; i < linhas; i++) {
                soma += plantacao[i][j];
            }
        }
    }

    cout << soma;
  return 0;
}