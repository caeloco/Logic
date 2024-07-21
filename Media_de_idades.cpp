#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int idades, pessoas, media = 0;
    cin >> pessoas;

    for (int i = 0; i < pessoas; i++){
        cout << "Digite a sua idade pessoa numero " << i + 1 << ": " << endl;
        cin >> idades;
        media += idades;
    }
    media /= pessoas;
    if (media > 0 && media < 26) {
        cout << "Essa turma eh jovem ";
    }
    else if (media > 25 && media < 61) {
        cout << "Essa turma eh adulta ";
    }
    else {
        cout << "Essa turma eh idosa ";
    }
    

    return 0;
}