#include <iostream>
using namespace std;
 
void calculaMedia() {
   float vetor[5];
   float soma = 0;
   float media;
 
   cout << "Digite 5 valores reais:" << endl;
   for (int i = 0; i < 5; i++) {
      cout << "Valor " << (i + 1) << ": ";
      cin >> vetor[i];
   }
 
   for (int i = 0; i < 5; i++) {
      soma += vetor[i];
   }
 
   media = soma / 5;
 
   cout << "\nA media dos valores informados e: " << media << endl;
}
 
int main() {
   calculaMedia();
 
   return 0;
}
 