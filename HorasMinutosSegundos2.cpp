#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int segundos, m, h, s, resto;
  cin >> segundos;
  h = segundos / 3600;
  resto = segundos % 3600;
  m = resto / 60;
  s = resto % 60;
  cout << h << "h " << m << "m " << s << "s" << endl;
  return 0;
}