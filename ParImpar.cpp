#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int numeros, par = 0, impar = 0;
    for (int i = 0; i < 10; i++){
        cin >> numeros;
        if (numeros % 2 == 1){
            impar++;
        }
        else {
            par++;
        }
    }
    cout << par << " " << impar;
    
}