#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int tabuada, num_inicial, num_final;
    cin >> tabuada;
    cin >> num_inicial;
    cin >> num_final;
    while(num_final < num_inicial){
        cin >> num_final;
    }
    for(int i = num_inicial; i <= num_final; i++){
        cout << tabuada << " X " << i << " = " << i * tabuada << endl;
    }
    return 0;
}