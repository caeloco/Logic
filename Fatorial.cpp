#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int numero;
    char confirmacao;
    bool continuar = true;
    while (continuar == true){
        cin >> numero;
        if (numero > 16){
            cout << "Numero invalido, digite novamente: " << endl;
        }
        else if (numero <= 16){

        for (int i = numero - 1; i > 0; i--){
        numero *= i;
        }  

        cout << numero << endl;
        cout << "Deseja continuar? " << endl;
        cin >> confirmacao;
        if(confirmacao == 's'){
            continuar = true;
        }
        else {
            continuar = false;
        }     
    }
 }
   return 0;
}