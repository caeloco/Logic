#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int cacada1, cacada2, cacada3, env1, env2, env3, total;
  cin >> cacada1 >> cacada2 >> cacada3;
  cin >> env1 >> env2 >> env3;
  while (env1 > 0) {
    cacada1 -= 3;
    env1--;
  } while (env2 > 0) {
    cacada2 -= 3;
    env2--;
  } while (env3 > 0) {
    cacada3 -= 3;
    env3--;
  }
  total = cacada1 + cacada2 + cacada3;
  cout << total << endl;
}
