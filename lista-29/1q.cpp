#include <iostream>
using namespace std;

const int TAM = 6;

int contarRepeticao(int v[], int tamanho, int pos, int sequenciaAtual, int maiorSequencia);

int main(){
    
    int vetor[TAM];


    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];

    }

    cout << contarRepeticao(vetor, TAM, 0, 0, 0);


}

int contarRepeticao(int v[], int tamanho, int pos, int sequenciaAtual, int maiorSequencia){

    if(pos == tamanho - 1){
        return maiorSequencia;
    }

    if(v[pos] == v[pos + 1]){ 
        sequenciaAtual++;
    }else{
        sequenciaAtual = 0;
    }

    if(sequenciaAtual > maiorSequencia){
        maiorSequencia = sequenciaAtual;
    }

    


    return contarRepeticao(v, tamanho, pos + 1, sequenciaAtual, maiorSequencia);


}