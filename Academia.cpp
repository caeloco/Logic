#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int clientes = 0, codigo_alto, codigo_baixo, codigo_pesado, codigo_leve;
    float altura, peso, codigo, media_altura, media_peso;
    float altura_alto = 0;
    float altura_baixo = 1000;
    float peso_pesado = 0;
    float peso_leve = 1000; 

    while(true){
        cout << "Insira o codigo do cliente: ";
        cin >> codigo;
        cout << endl;
        if(codigo == 0)
        break;
        clientes++;
        cout << "Insira a altura desse cliente: ";
        cin >> altura;
        cout << endl;
        if (altura > altura_alto){
            codigo_alto = codigo;
            altura_alto = altura;
        }
        if (altura < altura_baixo){
            codigo_baixo = codigo;
            altura_baixo = altura;
        }
        cout << "Insira o peso desse cliente: ";
        cin >> peso;
        cout << endl;
        if (peso > peso_pesado){
            codigo_pesado = codigo;
            peso_pesado = peso;
        }
        if (peso < peso_leve){
            codigo_leve = codigo;
            peso_leve = peso;
        }
        media_altura += altura;
        media_peso += peso;
    }
    cout << "Codigo do cliente mais alto: " << codigo_alto << " Altura do cliente mais alto: " << fixed << setprecision(2) << altura_alto << endl;
    cout << "Codigo do cliente mais baixo: " << codigo_baixo << " Altura do cliente mais baixo: " << altura_baixo << endl;
    cout << "Codigo do cliente mais pesado: " << codigo_pesado << " Peso do cliente mais pesado: " << peso_pesado << endl;
    cout << "Codigo do cliente mais leve: " << codigo_leve << " Peso do cliente mais leve: " << peso_leve << endl;
    cout << "A media de altura dos clientes eh de: " << media_altura / clientes << " A media de peso dos clientes eh de: " << media_peso / clientes;
    
    return 0;
}