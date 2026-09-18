#include <iostream>
using namespace std;

const int TAM = 5;

int pontoEquilibrio(int vetor[], int tamanho);

int main(){

   int vetor[TAM];
   int pontoEq;


    cout << "Digite os numeros inteiros:" << endl;
    for(int i = 0; i < TAM; i++){
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }


    pontoEq =  pontoEquilibrio(vetor, TAM);
        

    if(pontoEq == 0){
       cout << "Nenhum ponto de equilibrio encontrado";
    }else{
        cout << "Foram encontrados " << pontoEq << " pontos de equilibrio";
    }


    return 0;
}

int pontoEquilibrio(int vetor[], int tamanho){

    int somaEsquerda;
    int somaDireita;
    int qntdIndices = 0;

    for(int i = 0; i < tamanho; i++){

        somaEsquerda = 0;
        somaDireita = 0;

        for(int j = 0; j < i;j++){
            somaEsquerda += vetor[j];

        }
        for(int z = i + 1; z < tamanho; z++){
                somaDireita += vetor[z];
        }

        if(somaEsquerda == somaDireita){
            cout << "Indice " << i << " e um ponto de equilibrio." << endl;
            qntdIndices++;
        }
    }

    return qntdIndices;

}