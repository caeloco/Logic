#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int pessoas, candidato1 = 0, candidato2 = 0, candidato3 = 0, nulo = 0;
    cin >> pessoas;
    char voto[pessoas];
    

    for (int i = 0; i < pessoas; i++){
        cin >> voto[i];
        if (voto[i] == '1'){
            candidato1++;
        }
        else if (voto[i] == '2'){
            candidato2++;
        }
        else if (voto[i] == '3'){
            candidato3++;
        }
        else{
            nulo++;
        }
    }
    cout << "O candidato 1 obteve " <<  candidato1 << " votos" << endl;
    cout << "O candidato 2 obteve " <<  candidato2 << " votos" << endl;
    cout << "O candidato 3 obteve " <<  candidato3 << " votos" << endl;
    cout << "E " << nulo << " foram votos nulos" << endl;
    return 0;
}