#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int numero[100], aux, a = 0, soma = 0, media;
    
    while(true){
        cin >> aux;
        if (aux == -1){
            break;
        }
        numero[a] = aux;
        soma += aux;
        a++;
    }
    media = soma / a;
    cout << "A quantidades de valores lidos foi: " << a << endl;
    cout << "Os valores inseridos foram: ";
    for (int i  = 0; i < a; i ++){
        cout << numero[i] << " ";
    }
    cout << endl;
    cout << "Os valores inseridos em ordem reversa foram: " << endl;
    for (int i = a - 1; i >= 0; i--){
        cout << numero[i] << endl;
    }
    cout << "A soma dos valores eh: " << soma << endl;
    cout << "A media dos valores eh: " << media << endl;
    cout << "Os valores inseridos maiores que a media foram: " << endl;
    for (int i = 0; i < a; i ++){
        if (numero[i] > media){
            cout << numero[i] << endl;
        }
    }
    cout << "Os valores inseridos menores que 7 foram: " << endl;
    for (int i = 0; i < a; i ++){
        if (numero[i] < 7){
            cout << numero[i] << endl;
        }
    }
    cout << "Acabou";
    return 0;
}