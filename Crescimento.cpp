#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int  b = 1;
  float populacao1, populacao2, anos = 0;
  float crescimento1, crescimento2;
  char repeticao;
  cin >> populacao1 >> populacao2;
  cin >> crescimento1 >> crescimento2;
  while (b == 1){
    populacao1 += populacao1 * (crescimento1 / 100);
    populacao2 += populacao2 * (crescimento2 / 100);
    anos++;
    if (populacao1 > populacao2){
      cout << anos << " " << populacao1 << " " << populacao2 << endl;
    cout << "Deseja repetir o processo? " << endl;
    cin >> repeticao;
    getchar();
    if (repeticao == 's') {
    anos = 0;
    populacao1 = 0;
    populacao2 = 0;
    crescimento1 = 0;
    crescimento2 = 0;
    cin >> populacao1 >> populacao2;
    cin >> crescimento1 >> crescimento2;
  }
  else{
    return 0;
  }
    }
  }
  
  
}