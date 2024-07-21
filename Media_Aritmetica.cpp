#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    float nota[n], media = 0;

    for (int i = 0; i < n; i++){
        cin >> nota[i];
        media += nota[i];
    }
    cout << fixed << setprecision(2) << media / n;
    

    return 0;
}