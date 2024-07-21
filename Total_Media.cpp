#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int total = 0, aux;
    for (int i = 0; i < 5; i++){
        cin >> aux;
        total += aux;
    }
    //for (int i = 0; i < 5; i++){
        //if (numero[i] > 0){
            //soma += numero[i];
        //}
    //}
    cout << total << " " << total / 5 << endl;
    return 0;
}