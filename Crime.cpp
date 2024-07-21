#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    char resposta;
    int auxiliar = 0;
    cout << "telefonou para a vitima?" << endl;
    
    cin >> resposta;
    if (resposta == 's') {
        auxiliar ++;
    } 
    cout << "Esteve no local do crime?" << endl;
    
    cin >> resposta;
    if (resposta == 's') {
        auxiliar ++;
    } 
    cout << "Mora perto da vítima?" << endl;
    
    cin >> resposta;
    if (resposta == 's') {
        auxiliar++;
    }
    cout << "Devia para a vítima?" << endl;
    
    cin >> resposta;
    if (resposta == 's') {
        auxiliar++;
    }
    cout << "Já trabalhou com a vítima?" << endl;
    
    cin >> resposta;
    if (resposta == 's') {
        auxiliar ++;
    }
    if (auxiliar == 2) {
        cout << "Suspeito" << endl;
    }
    else if (auxiliar == 3 || auxiliar == 4) {
        cout << "Cumplice" << endl;
    }
    else if ( auxiliar == 5) {
        cout << "Culpado" << endl;
    }
    else {
        cout << "Inocente" << endl;
    }
    
    
    return 0;
}