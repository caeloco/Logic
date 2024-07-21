
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  float AreaDaParede, Rendimentodolitro = 6.0, Litrosporlatas = 18.0, PrecoLata = 80.0, Precototal;
  float Galoes = 3.6, PrecoGalao = 25.0;
  int Latasacomprar, Galoesacomprar;

  cout << "Digite quantos metros de parede serao pintados: " << endl;
  cin >> AreaDaParede;

  int Opcao;
  cout << "Qual opcao voce quer: Latas = 1, Galoes = 2, Misto = 3" << endl;
  cin >> Opcao;
 switch(Opcao){

  case 1: Latasacomprar = ceil (AreaDaParede / (Litrosporlatas * Rendimentodolitro));
 Precototal = Latasacomprar * PrecoLata;
 cout << "Voce devera comprar " << Latasacomprar << " latas e o valor total sera: " << Precototal << endl;
 break;

 case 2: Galoesacomprar = ceil (AreaDaParede / (Galoes * Rendimentodolitro));
 Precototal = Galoesacomprar * PrecoGalao;
 cout << "Voce devera comprar " << Galoesacomprar << " galoes e o valor total sera: " << Precototal << endl;
 break;

 case 3: if(AreaDaParede < 65){
   Galoesacomprar = ceil (AreaDaParede / (Galoes * Rendimentodolitro));
   Precototal = Galoesacomprar * PrecoGalao;
   cout << "Voce devera comprar " << Galoesacomprar << " galoes e o valor total sera: " << Precototal << endl;

   } else if(AreaDaParede >= 65 && AreaDaParede <= 108){
    Latasacomprar = ceil (AreaDaParede / (Litrosporlatas * Rendimentodolitro));
    Precototal = Latasacomprar * PrecoLata;
    cout << "Voce devera comprar " << Latasacomprar << " latas e o valor total sera: " << Precototal << endl;

   } else if(AreaDaParede > 108){
    Latasacomprar = (AreaDaParede / (Litrosporlatas * Rendimentodolitro));

    Galoesacomprar = ceil(Latasacomprar % 108);
    Precototal = (Latasacomprar * PrecoLata) + (Galoesacomprar * PrecoGalao);
    cout << " Voce deve comprar " << Latasacomprar << " latas e " << Galoesacomprar << " galoes e o valor total sera " << Precototal << endl;
   }
 
 break;
  }
 


  return 0;
}
 
  


















    