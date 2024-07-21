#include <iostream>
using namespace std;

int main() {
  int linha, coluna;
  cin >> linha >> coluna;
  int matriz[linha][coluna];

  int soma = 0;
  int maior = 0;

  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      cin >> matriz[i][j];
      soma += matriz[i][j];
      if (soma > maior) {
        maior = soma;
      }
    }
    soma = 0;
  }

  for (int j = 0; j < coluna; j++) {
    for (int i = 0; i < linha; i++) {
      soma += matriz[i][j];
       if (soma > maior) {
        maior = soma;
      }
    }
    soma = 0;
  }

  cout << maior;

  return 0;
}