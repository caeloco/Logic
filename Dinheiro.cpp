#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int valor, cem, cinquenta, dez, cinco, um;
    cout << "Insira o valor desejado" << endl;
    cin >> valor;
    if (valor < 10 || valor > 600) {
        cout << "Valor invalido" << endl;
        return 0;
    }
    cem = valor / 100;
    valor -= cem * 100;
    cinquenta = valor / 50;
    valor -= cinquenta * 50;
    dez = valor / 10;
    valor -= dez * 10;
    cinco = valor / 5;
    valor -= cinco * 5;
    um = valor;
    if (cem > 0) {
        cout << "Notas de 100: " << cem << endl;
    }
    if (cinquenta > 0) {
        cout << "Notas de 50: " << cinquenta << endl;
    }
    if (dez > 0) {
        cout << "Notas de 10: " << dez << endl;
    }
    if (cinco > 0) {
        cout << "Notas de 5: " << cinco << endl;
    }
    if (um > 0) {
        cout << "Notas de 1: " << um << endl;
    }

    return 0;
}
