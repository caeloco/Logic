#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int numero;
    string b;
    cin >> numero;
    cin.ignore();
    getline(cin, b);
    for (int i = 1; i <= numero; i++) {
        cout << i << ". " << b << endl;
    }

    
    return 0;
}