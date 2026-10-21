#include <iostream>
using namespace std;

const int TAM = 5;

int* maiorValor(int *v, int tamanho);

int main(){

    int vetor[TAM];
    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];
    }

    int *res = maiorValor(vetor, TAM);

    cout << "Valor: " << *res<< endl;          
    cout << "Indice: " << (res - vetor) << endl;  
}


int* maiorValor(int *v, int tamanho){
    int *maiorValorPtr = v; //

    for(int i = 0; i < tamanho;i++){

        if(*v > *maiorValorPtr){
            maiorValorPtr = v;
        }
        v++;
    }
    return maiorValorPtr;
}
