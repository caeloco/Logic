#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float salario[100], abono[100], maior_abono = 0;
    int num_funcionarios = 0, abono_total = 0, aux = 0, min_abono = 0;

    while (true) {
        cin >> salario[aux];
        if (salario[aux] == 0) {
            break;
        }
        abono[aux] = salario[aux] * 0.20;
        if (abono[aux] < 100 || abono[aux] == 100){
            abono[aux] = 100;
            min_abono++;
        }
        num_funcionarios++;
        abono_total += abono[aux];
        aux++;
    }

    for (int i = 0; i < aux; i++) {
        if (abono[i] > maior_abono) {
            maior_abono = abono[i];
        }
    }

    for (int i = 0; i < aux; i++) {
        cout << "Salario: " << salario[i] << " ";
    }
    cout << endl;

    cout << "Salario - Abono ";
    for (int i = 0; i < aux; i++) {
        cout << "R$ " << salario[i] << " - R$ " << abono[i] << " ";
    }
    cout << endl;

    cout << "Foram processados " << num_funcionarios << " funcionarios Total gasto com abonos: " << abono_total << " Valor minimo foi pago a " << min_abono << endl;
    cout << "Maior valor de abono pago: R$ " << maior_abono;


    return 0;
}