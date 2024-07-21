#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    int passageiros;
    cin >> passageiros;
    int bilhetes[passageiros];
    int premiado;
    int premio = 0;
    bool aux = false;
    for (int i = 0; i < passageiros; i++){
        cin >> bilhetes[i];
    }
    cin >> premiado;

    while (premio < passageiros){
        if (bilhetes[premio] == premiado){
            aux = true;
            break;
        }
        premio++;
    }
    if (aux == true) {
        cout << "Numero da poltrona do vencedor: " << premio;
    }
    else {
        cout << "Nao ha vencedor";
    }



  return 0;
}