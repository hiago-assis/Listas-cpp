#include <iostream>
using namespace std;

const int TAM = 5;
int procurarVetor(int v[],int tamanho, int pos);

int main()
{

    int vetor[TAM];

    cout << "Digite os 5 elementos do vetor: ";
    for(int i = 0;i < TAM; i++){
        cin >> vetor[i];
    }

    cout << procurarVetor(vetor, TAM, 0);
        
  
}

int procurarVetor(int v[],int tamanho, int pos)
{
    if(pos == tamanho){
       return 0;
    }

    if(v[pos] < 0){
        return 1 + procurarVetor(v, tamanho, pos + 1);
    }else{
        return 0 + procurarVetor(v, tamanho, pos + 1);
    }

    
}