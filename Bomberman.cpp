#include <iostream>
using namespace std;

int main() {
   int linhas, colunas, segundos;
    cin >> linhas >> colunas;
    char campo[linhas][colunas];
    int l = - 1, k = - 1;
    int aux = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> campo[i][j];
        }
    }
    cin >> segundos;

    while (segundos > 0)
    {
        //Movimentos na horizontal
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (campo[i][j] == 'b' && j == l && i == k) {
                  //if (j + 1 != colunas){ 
                    j++;
                    l = - 1;
                    k = - 1;
                  //}
                }
                
                // Movimento a direita
                else if (campo[i][j] == 'd' && campo[i][j + 1] == 'o' && j + 1 != colunas)
                {
                    campo[i][j + 1] = campo[i][j];
                    campo[i][j] = 'o';
                    j++;
                }
                else if (campo[i][j] == 'd' && campo[i][j + 1] != 'o' && j + 1 != colunas)
                {
                    campo[i][j] = 'e';
                }
                else if (campo[i][j] == 'd' && j + 1 == colunas) {
                    campo[i][j] = 'e';
                }
                //Movimento a esquerda
                else if (campo[i][j] == 'e' && campo[i][j - 1] == 'o' && j != 0)
                {
                    campo[i][j - 1] = campo[i][j];
                    campo[i][j] = 'o';
                }
                else if (campo[i][j] == 'e' && campo[i][j - 1] != 'o' && j != 0)
                {
                    campo[i][j] = 'd';
                }
                else if (campo[i][j] == 'e' && j == 0) {
                    campo[i][j] = 'd';
                }
                // Movimento a cima
                else if (campo[i][j] == 'c' && campo[i - 1][j] == 'o' && i != 0)
                {
                    campo[i - 1][j] = campo[i][j];
                    campo[i][j] = 'o';
                }
                else if (campo[i][j] == 'c' && campo[i - 1][j] != 'o' && i != 0)
                {
                    campo[i][j] = 'b';
                }
                else if (campo[i][j] == 'c' && i == 0) {
                    campo[i][j] = 'b';
                }
                //Movimento a baixo
                else if (campo[i][j] == 'b' && campo[i + 1][j] == 'o' && i + 1 != linhas)
                {
                    campo[i + 1][j] = campo[i][j];
                    campo[i][j] = 'o';
                    l = j;
                    k = i + 1;
                }
                else if (campo[i][j] == 'b' && campo[i + 1][j] != 'o' && i + 1 != linhas)
                {
                    campo[i][j] = 'c';
                }
                else if (campo[i][j] == 'b' && i + 1 == linhas) {
                    campo[i][j] = 'c';
                }
            }
        }
        segundos--;
    }
        

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << campo[i][j];
            if (j + 1 == colunas) {
                cout << endl;
            }
        }
    }
    return 0;
}