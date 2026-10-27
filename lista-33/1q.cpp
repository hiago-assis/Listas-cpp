#include <iostream>
using namespace std;


int maiorDiferencaAbsoluta(int* v, int tamanho);

const int TAM = 5;

int main(){

    int vetor[TAM];
    int *vPtr = &vetor[0];

    for(int i = 0; i < TAM; i++){

        cin >> *(vPtr++);
    }

    vPtr = &vetor[0];

    cout << maiorDiferencaAbsoluta(vPtr, TAM);


}


int maiorDiferencaAbsoluta(int* v, int tamanho){

    int diferencaAtual;
    int maiorDiferenca = 0;

    for(int i = 0; i < tamanho - 1; i++){

        diferencaAtual = *(v + 1) - *v;

        if(diferencaAtual < 0){
            diferencaAtual = -diferencaAtual;
        }

        if(diferencaAtual > maiorDiferenca){
            maiorDiferenca = diferencaAtual;
        }

        v++;
    }

    return maiorDiferenca;

}