#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int semana;
  cout << "Digite um numero representando um dia da semana: " << endl;
  cin >> semana;

  switch(semana){
  case 1: cout << "1-Domingo" << endl;
  break;
  case 2: cout << "2-Segunda" << endl;
  break;
  case 3: cout << "3-Terca" << endl;
  break;
  case 4: cout << "4-Quarta" << endl;
  break;
  case 5: cout << "5-Quinta" << endl;
  break;
  case 6: cout << "6-Sexta" << endl;
  break;
  case 7: cout << "7-Sabado" << endl;
  break;
  default: cout << "Valor invalido" << endl;
  break;
  }
  return 0;
}