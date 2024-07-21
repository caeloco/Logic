#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int valor, cds, valor_total = 0;
    cin >> cds;
    for (int i = 0; i < cds; i++) {
        cin >> valor;
        valor_total += valor;
    }
    cout << valor_total << " " << valor_total / cds; 


    return 0;
}