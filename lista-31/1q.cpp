#include <iostream>
using namespace std;

const int TAM = 8;

int somaPares(int *v, int tamanho);

int main(){

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];
    }

     cout << somaPares(vetor, TAM);
}


int somaPares(int *v, int tamanho){
    int somaPar = 0;

    for(int i = 0; i < tamanho;i++){
        if(*v % 2 == 0){
            somaPar += *v;
        }
        v++;
    }
    return somaPar;
}
