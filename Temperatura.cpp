#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    char meses[12][10] = {"janeiro",  "fevereiro", "marco",    "abril",
                          "maio",     "junho",     "julho",    "agosto",
                          "setembro", "outubro",   "novembro", "dezembro"};
    float temperatura[12], media = 0;

    for(int i = 0; i < 12; i++){
        cin >> temperatura[i];
        media += temperatura[i];
    }
    media = media / 12;
    for (int i = 0; i < 12; i++){
        if (temperatura[i] > media){
            cout << fixed << setprecision(2) << i + 1 << " - "  << meses[i] << " " << temperatura[i] << " ";
    }
    }
    return 0;
}