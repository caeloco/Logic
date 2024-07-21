#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int dia, mes, ano;
    cin >> dia >> mes >> ano;
    if (ano < 0 || ano > 2023) {
        cout << "Data invalida" << endl;
    } else if (mes < 1 || mes > 12) {
        cout << "Data invalida" << endl;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia < 1 || dia > 30) {
            cout << "Data invalida" << endl;
        }
    }    
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
                 mes == 10 || mes == 12)
        {
            if (dia > 0 && dia < 32)
                printf("Data valida");
            else
                printf("Dia invalida");
        }
     else if (ano % 4 == 0 && mes == 2) {
        if (dia < 1 || dia > 29) {
            cout << "Data invalida" << endl;
        } 
    } else if (mes == 2 ) {
        if (dia < 1 || dia > 28){
        cout << "Data invalida" << endl;
            }
    } else {
        cout << "Data valida" << endl;
    }    
          
    

    return 0;
}