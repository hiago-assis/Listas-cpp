#include <iostream>
using namespace std;

const int TAM = 5;
bool procurarVetor(int v[],int tamanho, int pos, int n);

int main()
{

    int num;
    int vetor[TAM];

    cout << "Digite os 5 elementos do vetor: ";
    for(int i = 0;i < TAM; i++){
        cin >> vetor[i];
    }

    cout << "Digite o numero a ser procurado: ";
    cin >> num;

    if(procurarVetor(vetor, TAM, 0, num)){
        cout << "Esta no vetor";
    }else {
        cout << "Nao esta no vetor" << endl;
    }
    return 0;
}

bool procurarVetor(int v[],int tamanho, int pos, int n)
{
    if(pos == tamanho){
        return false;
    }
    if(v[pos] == n){
        return true;
    }

    return procurarVetor(v, tamanho, pos + 1, n);
    
}