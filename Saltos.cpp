#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float saltos[5], melhor = 0, pior = 1000, media;

    for (int i = 0; i < 5; i++) {
        cin >> saltos[i];
        media += saltos[i];
        if (saltos[i] > melhor) {
            melhor = saltos[i];
        }
        else if (saltos[i] < pior) {
            pior = saltos[i];
        }
    }
    media -= melhor + pior;

    for (int i = 0; i < 5; i++) {
        if (i == 0){
            cout << "Primeiro salto: " << saltos[i] << " m" << endl;
        }
        else if (i == 1) {
            cout << "Segundo salto: " << saltos[i] << " m" << endl;
        }
        else if (i == 2) {
            cout << "Terceiro salto: " << saltos[i] << " m" << endl;
        }
        else if (i == 3) {
            cout << "Quarto salto: " << saltos[i] << " m" << endl;
        }
        else if (i == 4) {
            cout << "Quinto salto: " << saltos[i] << " m" << endl;
        }  
    }

    cout << endl;

    cout << "Melhor salto: " << melhor << " m" << endl;
    cout << "Pior salto: " << pior << " m" << endl;
    cout << "Media dos demais saltos: " << fixed << setprecision(1) << media / 3 << " m" << endl;

    cout << endl;

    cout << "Resultado final: " << endl;
    cout << media / 3 << " m";

    return 0;
}
   
