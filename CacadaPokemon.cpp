#include <iostream>
using namespace std;

int main() {
  int linha, coluna, tipo;
  cin >> linha >> coluna;
  int matriz[linha][coluna];

  int soma = 0;
  

  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      cin >> matriz[i][j]; 
    }
  }
  cin >> tipo;

  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      if (matriz[i][j] == tipo) {
        soma++;
      }
    }
  }

  cout << "Ash pegou " << soma << " pokemon" << endl;
  return 0;
}