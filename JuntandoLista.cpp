#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int lista1[10], lista2[10], lista3[20];
    for (int i = 0, j = 0; i < 10; i++, j += 2) {
        cout << "Escreva o " << i + 1 << " numero da 1 lista" << endl;
        cin >> lista1[i];
       lista3[j] = lista1[i];

        cout << "Escreva o " << i + 1 << " numero da 2 lista" << endl;
        cin >> lista2[i];

        lista3[j + 1] = lista2[i];
    }
    for (int i = 0; i < 20; i++){
        cout << lista3[i] << endl;
    }
    return 0;
}