#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int segundos, minutos, horas, auxiliar1, auxiliar2;
  cin >> segundos;
  


  for(int i = segundos; i >= 60; i--){
    minutos = ceil (segundos / 60);
  }
  for(int i = minutos; i >= 60; i--){
    horas = ceil (minutos / 60);
  }
  auxiliar1 = horas * 60;
  auxiliar2 = minutos * 60;
  cout << horas << "h " << minutos - auxiliar1 << "m " << segundos - auxiliar2 << "s" << endl;
  return 0;
}