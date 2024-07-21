#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  double salariobruto, salarioliquido, valorhora, horatrabalhada, IR, INSS, FGTS;
  cout << "Digite o valor da sua hora e quantas horas voce trabalhou no mes: " << endl;
  cin >> valorhora >> horatrabalhada;
  salariobruto = valorhora * horatrabalhada;


  if (salariobruto <= 900){
    IR = salariobruto * 0.00;
    INSS = salariobruto * 0.10;
    FGTS = salariobruto * 0.11;
    salarioliquido = salariobruto - IR - INSS;
    cout << fixed << setprecision(2) << "Salario Bruto: " << "(" << valorhora << " * " << horatrabalhada << ")  : R$ " << salariobruto << endl;
    cout << fixed << setprecision(2) << "(-) IR (0%)                     : R$ " << IR << endl;
    cout << fixed << setprecision(2) << "(-) INSS (10%)                  : R$ " << INSS << endl;
    cout << fixed << setprecision(2) << "FGTS (11%)                      : R$ " << FGTS << endl;
    cout << fixed << setprecision(2) << "Total de descontos              : R$ " << IR + INSS << endl;
    cout << fixed << setprecision(2) << "Salario Liquido                 : R$ " << salarioliquido << endl;
  }
   else if (salariobruto > 900 && salariobruto <= 1500){
    IR = salariobruto * 0.05;
    INSS = salariobruto * 0.10;
    FGTS = salariobruto * 0.11;
    salarioliquido = salariobruto - IR - INSS;
    cout << fixed << setprecision(2) << "Salario Bruto: " << "(" << valorhora << " * " << horatrabalhada << ")  : R$ " << salariobruto << endl;
    cout << fixed << setprecision(2) << "(-) IR (5%)                     : R$ " << IR << endl;
    cout << fixed << setprecision(2) << "(-) INSS (10%)                  : R$ " << INSS << endl;
    cout << fixed << setprecision(2) << "FGTS (11%)                      : R$ " << FGTS << endl;
    cout << fixed << setprecision(2) << "Total de descontos              : R$ " << IR + INSS << endl;
    cout << fixed << setprecision(2) << "Salario Liquido                 : R$ " << salarioliquido << endl;
  }
  else if (salariobruto > 1500 && salariobruto <= 2500){
    IR = salariobruto * 0.10;
    INSS = salariobruto * 0.10;
    FGTS = salariobruto * 0.11;
    salarioliquido = salariobruto - IR - INSS;
    cout << fixed << setprecision(2) << "Salario Bruto: " << "(" << valorhora << " * " << horatrabalhada << ") : R$ " << salariobruto << endl;
    cout << fixed << setprecision(2) << "(-) IR (10%)                    : R$ " << IR << endl;
    cout << fixed << setprecision(2) << "(-) INSS (10%)                  : R$ " << INSS << endl;
    cout << fixed << setprecision(2) << "FGTS (11%)                      : R$ " << FGTS << endl;
    cout << fixed << setprecision(2) << "Total de descontos              : R$ " << IR + INSS << endl;
    cout << fixed << setprecision(2) << "Salario Liquido                 : R$ " << salarioliquido << endl;
  }
  else if (salariobruto > 2500){
    IR = salariobruto * 0.20;
    INSS = salariobruto * 0.10;
    FGTS = salariobruto * 0.11;
    salarioliquido = salariobruto - IR - INSS;
    cout << fixed << setprecision(2) << "Salario Bruto: " << "(" << valorhora << " * " << horatrabalhada << ") : R$ " << salariobruto << endl;
    cout << fixed << setprecision(2) << "(-) IR (20%)                    : R$ " << IR << endl;
    cout << fixed << setprecision(2) << "(-) INSS (10%)                  : R$ " << INSS << endl;
    cout << fixed << setprecision(2) << "FGTS (11%)                      : R$ " << FGTS << endl;
    cout << fixed << setprecision(2) << "Total de descontos              : R$ " << IR + INSS << endl;
    cout << fixed << setprecision(2) << "Salario Liquido                 : R$ " << salarioliquido << endl;
  }
 
  
 
    
    
    
    
  return 0;
}