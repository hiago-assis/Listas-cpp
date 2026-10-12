#include <iostream>
using namespace std;

const int TAM = 8;

int maiorAlternada(int v[], int tamanho, int pos, bool subiuAntes, int sequenciaAtual, int maiorSeq);

int main(){
    int vetor[TAM];
    bool primeiroSubiu;

    for(int i = 0; i < TAM; i++){
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    if(vetor[0] > vetor[1]){
        primeiroSubiu = true;
    }else{
        primeiroSubiu = false;
    }

    cout << maiorAlternada(vetor, TAM, 1, primeiroSubiu, 2, 2);

    return 0;
}

int maiorAlternada(int v[], int tamanho, int pos, bool subiuAntes, int sequenciaAtual, int maiorSeq){
    bool subiuAgora;

    if(pos == tamanho - 1){          
        return maiorSeq;
    }

    if(v[pos] > v[pos + 1]){
        subiuAgora = true;
    }else{
        subiuAgora = false;
    }

    if(subiuAgora != subiuAntes){     
        sequenciaAtual++;
    }else{                            
        sequenciaAtual = 2;            
    }

    if(sequenciaAtual > maiorSeq){
        maiorSeq = sequenciaAtual;
    }

    return maiorAlternada(v, tamanho, pos + 1, subiuAgora, sequenciaAtual, maiorSeq);
}