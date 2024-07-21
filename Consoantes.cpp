#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    const int numchar = 5;
    char letras[numchar], consoantes;
    cout << "Digite " << numchar << " letras: " << endl;
    for (int i = 0; i < numchar; i++){
        cin >> letras[i];
    }
    cout << "As consoantes foram: " << endl;
    for (int i = 0; i < numchar; i++){ 
        consoantes = letras[i];
        if ((consoantes >= 'a' && consoantes <= 'z') && consoantes != 'a' && consoantes != 'e' && 
        consoantes != 'i' && consoantes != 'o' && consoantes != 'u'){
            cout << consoantes << " ";
        } 
    }
    return 0;
}