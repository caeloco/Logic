#include <iostream>
using namespace std;

int main() {
  int linha, coluna;
  cin >> linha >> coluna;
  int matriz[linha][coluna];
  bool aux = true;

  int soma = 0;
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      cin >> matriz[i][j];
    }
  }
  

for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
         soma += matriz[i][j];        
    }
}

  cout << soma;
  return 0;
}