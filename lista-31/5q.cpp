#include <iostream>
using namespace std;

const int TAM = 10;

void removerRepetidos(int *v, int *tamanho);

int main(){
    int vetor[TAM];
    int tamanho = TAM;

    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];
    }

    removerRepetidos(vetor, &tamanho);

    cout << "Vetor sem repeticoes: ";
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Novo tamanho: " << tamanho << endl;

    return 0;
}

void removerRepetidos(int *v, int *tamanho){
    int i = 0;

    while(i < *tamanho){
        bool repetido = false;

        for(int j = 0; j < i; j++){            
            if(v[j] == v[i]){
                repetido = true;
                break;
            }
        }

        if(repetido){
            for(int k = i; k < *tamanho - 1; k++){   // desloca tudo que vem depois, 1 posição p/ esquerda
                v[k] = v[k + 1];
            }
            (*tamanho)--;                              // vetor "logicamente" encolheu
        }else{
            i++;                                        
        }
    }
}