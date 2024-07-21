#include <iostream>
using namespace std;

void SelectionSort(int vetor[], int n) {
  for (int i = 0; i < n-1; i++) {
    int menorindice = i;
      for (int j = i + 1; j < n; j++) {
        if (vetor[j] < vetor[menorindice]) {
          menorindice = j;
        }
    }
    if (i != menorindice) {
      //swap
      int aux = vetor[i];
      vetor[i] = vetor[menorindice];
      vetor[menorindice] = aux;
    }
  }
}

int main() {
  int numeros = 10;
  int lista[numeros];

  for (int i = 0; i < 10; i++) {
    cin >> lista[i];
  }

  SelectionSort(lista, numeros);

  for (int i = 0; i < 10; i++) {
      cout << lista[i] << " ";
    }

  
  return 0;
}