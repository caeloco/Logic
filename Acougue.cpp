#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double fileduplo, alcatra, picanha, valortotal, disconto;
    string cartao, carne;

    cout << "Escolha o tipo de carne: " << endl;
    getline(cin, carne);
    if (carne == "file duplo") {
        cout << "Quantos quilos de file duplo voce quer:  " << endl;
        cin >> fileduplo;
        if (fileduplo < 5) {
            valortotal = fileduplo * 4.90;
        }
        else {
            valortotal = fileduplo * 5.80;
        }
    }
    else if (carne == "alcatra") {
        cout << "Quantos quilos de alcatra voce quer:  " << endl;
        cin >> alcatra;
        if (alcatra < 5) {
            valortotal = alcatra * 5.90;
        }
        else {
            valortotal = alcatra * 6.80;
        }
    }
    else if (carne == "picanha") {
        cout << "Quantos quilos de picanha voce quer:  " << endl;
        cin >> picanha;
        if (picanha < 5) {
            valortotal = picanha * 6.90;
        }
        else {
            valortotal = picanha * 7.80;
        }
    }
    cout << "Tem o cartao tabajara" << endl;
        cin >> cartao;
        //getline(cin, cartao);
        if (cartao == "s") {
            disconto = valortotal * 0.05;
            valortotal -= disconto;
            cout << fixed << setprecision(2) << valortotal;
            return 0;
        }
        else {
            cout << fixed << setprecision(2) <<  valortotal;
            return 0;
        }
        
    
}