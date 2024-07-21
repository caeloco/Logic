#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double morango, maca, precomorango, precomaca, precototal, pesototal, disconto;
    cin >> morango >> maca;

    if (morango < 5) {
        precomorango = morango * 2.50;
    } 
    else {
        precomorango = morango * 2.20;
    }
    if (maca < 5) {
        precomaca = maca * 1.80;
    }
    else {
        precomaca = maca * 1.80;
    }

    precototal = precomorango + precomaca;
    pesototal = maca + morango;
    
    if (precototal > 25.00 || pesototal > 8) {
        disconto = precototal * 0.10;
        precototal -= disconto; 
    }
    cout << fixed << setprecision(2) << precototal << endl;
    

    return 0;
}