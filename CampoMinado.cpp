#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    int celulas;
    cin >> celulas;
    int bombas[celulas];
    int perto[celulas] = {};

    for (int i = 0; i < celulas; i++){
      cin >> bombas[i];
      if (bombas[i] == 1){
        perto[i - 1] += 1;
        perto[i] += 1;
        perto[i + 1] += 1;
      }
    }
    cout << endl;

    for (int i = 0; i < celulas; i++){
      cout << perto[i] << endl;
    }
  return 0;
}