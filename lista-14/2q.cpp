#include <iostream>
using namespace std;
 
void exibePares(int vetor[], int tamanho) {
   for (int i = 0; i < tamanho; i++) {
      if (vetor[i] % 2 == 0) {
         cout << vetor[i] << " ";
      }
   }
   cout << endl;
}
 
int main() {
   int vetor[10];
 
   cout << "Digite 10 numeros inteiros:" << endl;
   for (int i = 0; i < 10; i++) {
      cout << "Numero " << (i + 1) << ": ";
      cin >> vetor[i];
   }
 
   cout << "\nElementos pares do vetor: ";
   exibePares(vetor, 10);
 
   return 0;
}
 