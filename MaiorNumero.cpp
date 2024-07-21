#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  float numeros[5];
  for (int i = 0; i < 5; i++) {
    cin >> numeros[i];
  }

  float maiornumero = 0;

  for (int i = 0; i < 5; i++) {

    if (numeros[i] > maiornumero){
        maiornumero = numeros[i];
    }
  }
  cout << maiornumero << endl;
  return 0;
}