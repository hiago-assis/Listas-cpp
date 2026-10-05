#include <iostream>
using namespace std;

const int TAM = 5;
int somaIndicePar(int v[],int tamanho, int posi);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << somaIndicePar(vetor,TAM,0);

}

int somaIndicePar(int v[],int tamanho,int posi)
{
    int soma = 0;

    if (posi == tamanho)
    {
        return 0;
    }

    if(posi % 2 == 0){
        soma+= v[posi];
    }

    return soma + somaIndicePar(v, tamanho, posi + 1);
    
}