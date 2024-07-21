#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  char aproveitamento;
  double nota1, nota2, nota3;
  cout << "Insira as duas notas do aluno: " << endl;
  cin >> nota1 >> nota2;
  nota3 = nota1 / nota2;


  if(nota3 <= 10.0 && nota3 >= 9.0){
    aproveitamento = 'A';
  }
  else if(nota3 < 9.0 && nota3 >= 7.5){
    aproveitamento = 'B';
  }
  else if(nota3 < 7.5 && nota3 >= 6.0){
    aproveitamento = 'C';
  }
  else if(nota3 < 6.0 && nota3 >= 4.0){
    aproveitamento = 'D';
  }
  else if(nota3 < 4.0 && nota3 >= 0.0){
    aproveitamento = 'E';
  }
  if(aproveitamento == 'D' || aproveitamento == 'E'){
    cout << "Aprovado" << endl;
  }
  else {
    cout << "Reprovado" << endl;
  }
  
  return 0;
}