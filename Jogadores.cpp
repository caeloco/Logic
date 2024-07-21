#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int votos[23] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int total = 0;
    int camisas;
    int maior_votos = 0, jogador;
    
    while (true)
    {
        cout << "Digite o numero do jogador: ";
        cin >> camisas;
        if (camisas > 0 && camisas < 24)
        {
            votos[camisas - 1]++;
            total++;
        }
        if (camisas == 0)
        {
            for (int i = 0; i < 23; i++)
            {
                
                if (votos[i] > 0)
                {
                    cout << "Jogador " << i + 1 << ": " << votos[i] << " | " << votos[i] * 100 / total << "%" << endl;
                    if (votos[i] > maior_votos) {
                        maior_votos = votos[i];
                        jogador = i + 1;
                    }
                }
            }
            cout << "O jogador com mais votos foi o " << jogador << " com " << maior_votos << " votos";

            break;
        }
        else if (camisas > 23 || camisas < 0){
            cout << "Jogador invalido" << endl;
        }
    }
    
    return 0;
}