#include <iostream>
using namespace std;
 
int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}
 
int main() {
    int vetor[8];
    int resultado;
 
    cout << "Digite 8 numeros inteiros:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }
 
    resultado = somaVetor(vetor, 8);
 
    cout << "\nA soma dos elementos do vetor e: " << resultado << endl;
 
    return 0;
}
 