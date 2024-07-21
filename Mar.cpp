#include <iostream>
using namespace std;

int main()
{
    int territorio[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            cin >> territorio[i][j];
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            if (territorio[i][j] == 't') {
                if (territorio[i + 1][j] == '*') {
                    territorio[i + 1][j] = 'p';
                }
                if (territorio[i - 1][j] == '*') {
                    territorio[i - 1][j] = 'p';
                }
                if (territorio[i][j + 1] == '*') {
                    territorio[i][j + 1] = 'p';
                }
                if (territorio[i][j - 1] == '*') {
                    territorio[i][j - 1] 'p';
                }
            }
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            cout << territorio[i][j];
        }
    }
    return 0;
}