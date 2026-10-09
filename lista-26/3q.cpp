#include <iostream>
using namespace std;

const int TAM = 7;
int contarPicos(int v[], int tamanho, int pos);


int main()
{

    int vetor[TAM];
    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];  
    }

    cout << contarPicos(vetor, TAM, 1);

   

    return 0;
}


int contarPicos(int v[], int tamanho, int pos){
    if(pos == tamanho - 1){
        return 0;
    }

    if(v[pos] > v[pos - 1] && v[pos] > v[pos + 1]){
        return 1 + contarPicos(v, tamanho, pos + 1);
    }else{
        return 0 + contarPicos(v, tamanho, pos + 1);
    }
    
}
