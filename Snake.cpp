#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  int linha, coluna;
  cin >> linha >> coluna;
  int matriz[linha][coluna];
  //bool aux = true;

  int soma = 0;
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      cin >> matriz[i][j];
    }
  }
  
//while (aux) { 
    for (int i = 0; i < linha; i++) {
      //if (i % 2 == 0) { 
        for (int j = 0; j < coluna; j++) {
          //if (i == linha - 1 && j == coluna - 1) {
            //aux = false;
          //}
          //else { 
          soma += matriz[i][j];
          //}
        }
      /*}
      //else if (i % 2 == 1) { 
        //for (int j = coluna; j > 0; j--) {
          //if (i == linha - 1 && j == 0) {
            //aux = false;
          //}
          //else { 
          //soma += matriz[i][j];
          //}
        //}
      //}
    }*/
}

  cout << soma;
  return 0;
}