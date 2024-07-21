#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int vida, dano, ataques = 0;
    cin >> vida >> dano;
    while (vida > 0){
        dano--;
        vida -= dano;
        ataques++;
        if (dano == 0){
            cout << "F" << endl;
            return 0;
        }
    }
    cout << ataques << endl;
    return 0;
}