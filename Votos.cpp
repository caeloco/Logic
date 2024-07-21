#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    char Sistemas[6][50] = {"Windows Server", "Unix", "Linux", "Netware", "Mac OS", "Outro"};
    int SO[6] = {0, 0, 0, 0, 0, 0};
    int total = 0, voto, aux = 0;

    while (true)
    {
        cout << "As possíveis respostas sao: " << endl
             << "1- Windows Server 2- Unix 3- Linux 4- Netware 5- Mac OS 6- Outro" << endl;
        cin >> voto;
        if (voto <= 0)
        {
            break;
        }
        SO[voto - 1]++;
        total++;
    }
    int maior = 0;
    for (int i = 0; i < 6; i++)
    {
        if (SO[i] > maior)
        {
            maior = SO[i];
            aux++;
        }
    }
    cout << "Total " << total  << " votos"<< endl;
    cout << "Sistema Operacional Votos %" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Windows Server " << SO[0] << " votos " << SO[0] * 100 / total << "%"
                                                                 " Unix "
         << SO[1] << " votos " << SO[1] * 100 / total << "%"
                                            " Linux "
         << SO[2] << " votos " << SO[2] * 100 / total;
    cout << "% Netware " << SO[3] << " votos " << SO[3] * 100 / total << "% Mac " << SO[4] << " " << SO[4] * 100 / total << "%"
                                                                                                        " Outros "
         << SO[5] << " votos " << SO[5] * 100 / total << "% " << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "O Sistema Operacional mais votado foi o " << Sistemas[aux - 1] << " com " << maior << " votos, correspondendo a " << maior * 100 / total << "% "
                                                                                                                                                     "dos votos totais";
    return 0;
}