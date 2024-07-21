#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int salario, salarioreajustado, aumento;
  cout << "Digite o salario do colaborador: " << endl;
  cin >> salario;

  if (salario <= 280){
    aumento = salario * 0.20;
    salarioreajustado = salario + aumento;
    cout << "Salario antes do reajuste: " << salario << endl;
    cout << "Percentual do aumento aplicado: 20%" << endl;
    cout << "Valor do aumento: " << fixed << setprecision(2) << aumento << endl;
    cout << "Salario reajustado: " << fixed << setprecision(2) << salarioreajustado << endl;
  }
  else if (salario > 280 && salario <= 700){
    aumento = salario * 0.15;
    salarioreajustado = salario + aumento;
    cout << "Salario antes do reajuste: " << salario << endl;
    cout << "Percentual do aumento aplicado: 15%" << endl;
    cout << "Valor do aumento: "  << fixed << setprecision(2) << aumento << endl;
    cout << "Salario reajustado: " << fixed << setprecision(2) << salarioreajustado << endl;
  }
  else if (salario > 700 && salario <= 1500){
    aumento = salario * 0.10;
    salarioreajustado = salario + aumento;
    cout << "Salario antes do reajuste: " << salario << endl;
    cout << "Percentual do aumento aplicado: 10%" << endl;
    cout << "Valor do aumento: " << fixed << setprecision(2) << aumento << endl;
    cout << "Salario reajustado: " << fixed << setprecision(2) << salarioreajustado << endl;
  }
  if (salario > 1500){
    aumento = salario * 0.05;
    salarioreajustado = salario + aumento;
    cout << "Salario antes do reajuste: " << salario << endl;
    cout << "Percentual do aumento aplicado: 5%" << endl;
    cout << "Valor do aumento: " << fixed << setprecision(2) << aumento << endl;
    cout << "Salario reajustado: " << fixed << setprecision(2) << salarioreajustado << endl;
  }
 
  
 
    
    
    
    
  return 0;
}