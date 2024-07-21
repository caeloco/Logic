#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int numero[50];
    for (int i = 0; i < 50; i++) {   
        if(i % 2 == 1) {
            cout << i << " ";
        }
    }
    //ou esse jeito mais pratico
    //for (int i = 1; i < 50; i += 2)
        //printf("%d\n", i);
    //return 0;
}