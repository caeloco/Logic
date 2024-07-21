#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float soma = 0;
    int h = 1, n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (i == 1){
            cout << h;
            soma += h;
        }
        else {
            cout << h << "/" << i;
            soma += (float)h / (float)i;
        }
        if (i < n){
            cout << " + ";
        }
    }
    cout << endl;
    cout << soma;
    return 0;
}