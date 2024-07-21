#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double litros;
    double precoGasolina = 2.50, precoAlcool = 1.90, precoTotal, disconto;
    char combustivel;
    cin >> litros >> combustivel;
    switch (combustivel) {
        case 'g':  if (litros <= 20) {
            precoTotal = litros * precoGasolina;
            disconto = precoTotal * 0.04;
            precoTotal -= disconto;
            cout << fixed << setprecision(2) << "R$ " << precoTotal  << endl;
        } else if (litros > 20) {
            precoTotal = litros * precoGasolina;
            disconto = precoTotal * 0.06;
            precoTotal -= disconto;
            cout << fixed << setprecision(2) <<  "R$ " << precoTotal  << endl;
        }
        break;
        case 'a': if (litros <= 20) {
            precoTotal = litros * precoAlcool;
            disconto = precoTotal * 0.03;
            precoTotal -= disconto;
            cout << fixed << setprecision(2) <<  "R$ " << precoTotal  << endl;
        } else if (litros > 20) {
            precoTotal = litros * precoAlcool;
            disconto = precoTotal * 0.05;
            precoTotal -= disconto;
            cout << fixed << setprecision(2) <<  "R$ " << precoTotal  << endl;
        }
    }
    return 0;
}