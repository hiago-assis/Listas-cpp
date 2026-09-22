#include <iostream>
using namespace std;

const int TAM = 10;

bool verificarOrdenado(int vetor[], int tamanho);
int posicaoQuebrada(int vetor[], int tamanho);

int main(){
    int vetor[TAM];


    for(int i = 0; i < TAM ; i++){
        cin >> vetor[i];
    }

    cout << endl;

    if(verificarOrdenado(vetor,TAM)){
        cout << "Vetor esta ordenado" << endl;
    }else{
        cout << "Vetor nao esta ordenado" << endl;
    }


    cout << "A posicao que a ordem quebra e: " << posicaoQuebrada(vetor,TAM);
    return 0;
}


bool verificarOrdenado(int vetor[], int tamanho){

    for(int i = 0; i < tamanho - 1 ; i++){
        if(vetor[i] > vetor[i + 1]){
            return false;
        }    
    }
    return true;
}

int posicaoQuebrada(int vetor[], int tamanho){


    for(int i = 0; i < tamanho - 1 ; i++){
        if(vetor[i] > vetor[i + 1]){
                return i;
        }    
    }
    return -1;
    
}