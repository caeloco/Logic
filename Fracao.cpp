#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
   float soma = 0;
   int n, m = 1;
   cin >> n;

   for (int i = 1; i <= n; i++){
    cout << i << "/" << m;
    if (i < n && n > 1){
        cout << " + ";
    }
    else {
        cout << ". ";
    }
    soma += (float)i / (float)m;
    m += 2;
   }
   cout << endl;
   cout << soma;
    return 0;
}