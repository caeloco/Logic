#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int base, expoente, resultado = 1;
    cin >> base >> expoente;
    for (int i = 0; i < expoente; i++){
        resultado *= base;
        //if (resultado > base){
            //resultado *= base;
        //}
    }
    cout << resultado;
    
}