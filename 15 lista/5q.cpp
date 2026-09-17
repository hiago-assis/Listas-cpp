#include <iostream>
using namespace std;

int elementosIguais(int vetor[], int tamanho);
const int TAMANHO = 12;

int main(){

    int vetor[TAMANHO];

    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    cout << "A maior quantidade de elementos iguais consecutivos e: " << elementosIguais(vetor, TAMANHO);

    return 0;
}

int elementosIguais(int vetor[], int tamanho){

    int contadorAtual = 1;
    int maiorContador = 1;

    for(int i = 1; i < tamanho; i++){

        if(vetor[i] == vetor[i - 1]){
            contadorAtual++;
        } else {
            contadorAtual = 1;
        }

        if(contadorAtual > maiorContador){
            maiorContador = contadorAtual;
        }
    }

    return maiorContador;
}