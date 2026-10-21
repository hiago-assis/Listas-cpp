#include <iostream>
using namespace std;

const int TAM = 8;

void inverterVetor(int *v, int tamanho);

int main(){

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];
    }


    cout << "Vetor antes:" << endl;
    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }
    
    inverterVetor(vetor, TAM);

    cout << "Vetor depois:" << endl;
    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }
}

void inverterVetor(int *v, int tamanho){
    int *inicio = v;
    int *fim = v + (tamanho - 1);
    int temp = *inicio;

    while(inicio < fim){
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }

}