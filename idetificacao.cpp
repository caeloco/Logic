#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    char nome[50], sexo, estadocivil;
    int idade, salario;
    cout << "Digite seu nome: ";
    cin >> nome;
    while (strlen(nome) < 4) {
        cout << "Nome invalido " << endl;
        cout << "Digite novamente: ";
        cin >> nome;
    }

    cout << "Digite a sua idade: ";
    cin >> idade;
    while (idade < 0 || idade > 150) {
        cout << "Idade invalida " << endl;
        cout << "Digite novamente: ";
        cin >> idade;
    }

    cout << "Digite o seu salario: ";
    cin >> salario;
    while (salario < 0) {
        cout << "Salario invalido " << endl;
        cout << "Digite novamente: ";
        cin >> salario;
    }

    cout << "Digite seu sexo: ";
    cin >> sexo;
    while (sexo != 'm' && sexo != 'f') {
        cout << "Sexo invalido" << endl;
        cout << "Digite novamente: ";
        cin >> sexo;
    }

    cout << "Digite o seu estado civil: " << endl;
    cin >> estadocivil;
    while (estadocivil != 's' && estadocivil != 'c' && estadocivil != 'v' && estadocivil != 'd') {
        cout << "Estado civil invalido " << endl;
        cout << "Digite novamente: ";
        cin >> estadocivil;
    }

    cout << nome << " " << idade << " " << salario << " " << sexo << " " << estadocivil << endl;
    return 0;
}