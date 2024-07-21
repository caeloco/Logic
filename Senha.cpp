#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    string nome, senha;
    cout << "Escolha um nome: " << endl;
    getline(cin, nome);
    cout << "Escolha uma senha diferente de seu nome: " << endl;
    getline(cin, senha);
    while(nome == senha) {
        cout << "Escolha outra senha: " << endl;
        getline(cin, senha);
    }
    return 0;
}