
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  float Arquivo, MegabytesPorSegundo, TempoDeDownload;
  cout << "Quantos MBs tem o arquivo que voce quer baixar?" << endl;
  cin >> Arquivo;
  cout << "Quantos Megabytes Por Segundo sua internet faz download?" << endl;
  cin >> MegabytesPorSegundo;
  TempoDeDownload = Arquivo / MegabytesPorSegundo;
  cout << "Esse Download ira demorar aproximadamente " << fixed << setprecision(2) << TempoDeDownload / 60 << " minutos" << endl;




  return 0;
}
 
  


















    