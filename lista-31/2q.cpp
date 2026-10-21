#include <iostream>
using namespace std;

const int TAM = 10;

void substituirNegativos(int *v, int tamanho);

int main(){

    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];
    }

    cout << "Vetor antes:" << endl;
    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }

    substituirNegativos(vetor, TAM);
    cout << endl;
    
    cout << "Vetor depois:" << endl;
    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }
}


void substituirNegativos(int *v, int tamanho){
   
    for(int i = 0; i < tamanho;i++){
        if(*v < 0){
            *v = 0;
        }
        v++;
    }
    
}
