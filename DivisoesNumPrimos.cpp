#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int numeros, divisoes = 3;
    cin >> numeros;
    cout << 2 << " " << 3 << " " << 5 << " ";
    for (int i = 2; i < numeros; i++){
        if (i % 2 == 1){
            if (i % 3 != 0 && i % 5 != 0){
            cout << i << " ";
            divisoes++;
            }
        }
    }
    cout << "e " << divisoes << " divisoes";
   return 0;
}