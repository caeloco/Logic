#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  int n;
  cin >> n;
  
  int vetor[n];
  for(int i = 0; i < n; i++) {
    cin >> vetor[i];
  }

  for (int i = n - 1; i >= 0; i--){
    cout << vetor[i] << " ";
  }
  cout << endl;
  return 0;
}
