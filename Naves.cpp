#include <iostream>
using namespace std;

int main() {
    int espaco, teleportes;
    cin >> espaco >> teleportes;
    int matriz[espaco][espaco];

    for (int i=0; i < espaco; i++) {
        for (int j=0; j < espaco; j++) {
            cin >> matriz[i][j];
        }
    }
    int naves = 0;
    
    int portal1;
    int portal2;

    for (int i = 0; i < teleportes; i++) {
        cin >> portal1;
        cin >> portal2;

        while (portal1 > -1) {
            if (matriz[portal1][portal2] = 1) {
                matriz[portal1][portal2] = 0;
                naves++;
                break;
            }
            portal1--;
        }
    }
        
    cout << naves;
         
  return 0;
}