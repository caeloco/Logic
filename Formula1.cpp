#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
  char pneu;

  float Soft = 4.8;
  float Medium = 3.3;
  float Hard = 2.8;

  int volta;

  cin >> pneu;
  if (pneu == 'S'){
    volta = (100 / Soft) * 0.8;
  }
  if (pneu == 'M'){
    volta = (100 / Medium) * 0.8;
  }
  if (pneu == 'H'){
    volta = (100 / Hard) * 0.8;
  }
  cout << volta;

  return 0;
}
