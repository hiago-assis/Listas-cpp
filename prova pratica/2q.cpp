#include <iostream>
using namespace std;

const int TAM = 8;

int maiorDiferencaAbsoluta(int vetor[], int tamanho);

int main(){

    int vetor[TAM];


    for (int i = 0; i < TAM; i++){

        cin >> vetor[i];
    }

    cout << "A maior diferenca e: " << maiorDiferencaAbsoluta(vetor, TAM);
}

int maiorDiferencaAbsoluta(int vetor[], int tamanho){

    int diferencaAtual;
    int maiorDiferenca;

    for(int i = 0; i < tamanho - 1;i++){

        
        if(i == 0){
            maiorDiferenca =  vetor[0] - vetor[1];
        
        }

        if(vetor[i] < vetor[i + 1]){
            diferencaAtual = vetor[i + 1] - vetor[i];
        }else{
            diferencaAtual = vetor[i] - vetor[i + 1];
        }

        if(diferencaAtual > maiorDiferenca){
            maiorDiferenca = diferencaAtual;
             
        }
    }

    return maiorDiferenca;
}