#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
   int numero;
   cin >> numero;
   if (numero == 2 || numero == 3){
      cout << "Esse numero eh um numero primo ";
   }
   if (numero % 2 == 0  || numero % 3 == 0 || numero % 5 == 0 || numero % 7 == 0){
      cout << "Esse numero nao eh um numero primo " << endl;
      for (int i = 1; i <= numero; i++){
         if (numero % i == 0){
            cout << numero << " / " << i << endl;
         }
      }
   }
   else {
      cout << "Esse numero eh um numero primo ";
   }
   return 0;
}