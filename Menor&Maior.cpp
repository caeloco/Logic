#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n, soma = 0;
    cin >> n;
    int numeros[n];
    for (int i = 0; i < n; i++){
        cin >> numeros[i];        
        if (numeros[i] > 1000 || numeros[i] < 0){
            cout << "Numero invalido " << endl;
            i--;
        }
        else {
            soma += numeros[i];
        }
    }

    float maiornumero = -INFINITY, menornumero = INFINITY;

    for (int i = 0; i < n; i++) {
        if (numeros[i] > maiornumero){
            maiornumero = numeros[i];
        }
        else if (numeros[i] < menornumero){
            menornumero = numeros[i];
        }
    }
    cout << "A soma eh: " << soma << endl; 
    cout << "O maior numero eh: " <<  maiornumero << endl;
    cout << "O menor numero eh: " << menornumero;
   return 0;
}