#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int NumeroDoProcesso;
    cout << "Escreva o numero do processo" << endl;
    cin >> NumeroDoProcesso;
  if(NumeroDoProcesso % 42 == 0){
    cout << "Sim" << endl;
  }
  else{
    cout << "Nao" << endl;
  }
}