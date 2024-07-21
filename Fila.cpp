#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    int tamanhofila;
    cin >> tamanhofila;
    int fila[tamanhofila];
    int aux = 0;

    for (int i = 0; i < tamanhofila; i++) {
        cin >> fila[i];
    }

    int numdesistentes;
    cin >> numdesistentes;
    int desistentes[numdesistentes];
    for (int i = 0; i < numdesistentes; i++){
        cin >> desistentes[i];
    }

   while (aux != numdesistentes) {
    for (int i = 0; i < tamanhofila; i++) {
        if (fila[i] == desistentes[aux]) {
            for (j = i; j < tamanhofila; j++) {
                fila[i] = fila[i + 1];
            }
        }
    }
    aux++;
   }

   for (int i = 0; i < tamanhofila - numdesistentes; i++) {
    cout << fila[i] << " ";
   }
  return 0;
}