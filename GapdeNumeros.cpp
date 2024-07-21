#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int numero1, numero2;
    cin >> numero1 >> numero2;
    int soma = 0;
    if (numero1 > numero2) {
    for (int i = numero2 + 1; i < numero1; i++) {
        //cout << i << " ";
        soma += i;
    }
    }
    if (numero2 > numero1) {
        for (int i = numero1 + 1; i < numero2; i++) {
            //cout << i << " ";
            soma += i;
        }
    }
    cout << soma;
    return 0;
}