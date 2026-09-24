#include <iostream>
using namespace std;

const int TAM = 10;


bool verificarOrdem(int vetor[], int tamanho);

int main(){

    int vetor[TAM];


    for (int i = 0; i < TAM; i++){

        cin >> vetor[i];
    }

    if (verificarOrdem(vetor,TAM))
    {
        cout << "Esta em ordem crescente";
    }else{
        cout << "Nao esta em ordem crescente";
    }
}

bool verificarOrdem(int vetor[], int tamanho){


    for(int i = 0; i < tamanho - 1 ; i++){
        if(vetor[i] > vetor[i + 1]){
            return false;
        }
    }
    return true;

}