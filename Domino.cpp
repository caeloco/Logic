#include <iostream>
using namespace std;

int main() {
    int matriz[7][7];
    int pecas = 0;
    bool aux = true;

    for (int i=0; i < 7; i++) {
        for (int j=0; j < 7; j++) {
            cin >> matriz[i][j];
        }
    }
    while (aux) {
        for (int i = 0; i < 7; i++) {
            for (int j=0; j < i + 1; j++) {
                if (matriz[i][j] == 1){
                    pecas++;
                }
            }
            if (i == 6) {
                aux = false;
            }
        }  
    }

    cout << pecas;
  return 0;
}