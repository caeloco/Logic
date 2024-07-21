#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
     int a;
    cout << "Insira uma nota de 0 a 10: " << endl;
    cin >> a;
    while(a > 10 || a < 0) {
        cout << "Valor Invalido " << endl;
        cin >> a;
       //if (a >= 0 && a <= 10) {
            //return 0;
        //}
    }
    
    return 0;
}