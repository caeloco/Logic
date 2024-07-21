#include <iostream>
using namespace std;

int main() {
  int quadrados, capturas = 0;
  cin >> quadrados;
  int tabuleiro[quadrados][quadrados];

  for (int i = 0; i < quadrados; i++) {
    for (int j = 0; j < quadrados; j++) {
        cin >> tabuleiro[i][j];
        }
    }

  int linha, coluna;
  cin >> linha >> coluna;

    for (int j = coluna + 1; j < quadrados; j++) {
        if (tabuleiro[linha][j] == 1) {
            j = 8;
        }
        else if (tabuleiro[linha][j] == 2) {
            capturas++;
            j = 8;
        }
    }
    for (int j = coluna + 1; j < -1; j--) {
        if (tabuleiro[linha][j] == 1) {
            j = -1;
        }
        else if (tabuleiro[linha][j] == 2) {
            capturas++;
            j = -1;
        }
    }
    for (int i = linha + 1; i < quadrados; i++) {
        if (tabuleiro[i][coluna] == 1) {
            i = quadrados;
        }
        else if (tabuleiro[i][coluna] == 2) {
            capturas++;
            i = quadrados;
        }
    }
    for (int i = linha + 1; i < -1; i--) {
        if (tabuleiro[i][coluna] == 1) {
            i = -1;
        }
        else if (tabuleiro[i][coluna] == 2) {
            capturas++;
            i = -1;
        }
    }

    cout << capturas;
    
    return 0;
}