#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int termo = 1, n, aux = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        termo += aux;
        cout << termo << " ";
        if (termo > aux){
            aux = termo - aux;
         }
    }
    return 0;
}
// int termos, numero = 1, numero_anterior = 0, aux;
    // cin >> termos;
    // for (int i = 0; i < termos; i++)
    // {
        // cout << numero
        // aux = numero;
        // numero += numero_anterior;
        // numero_anterior = aux;
    // }
// }
    
