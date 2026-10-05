#include <iostream>
using namespace std;

const int TAM = 5;
int qntd(int v[],int tamanho, int posi, int maiorValor, int indiceMaior);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << qntd(vetor,TAM,0,0,0);

}

int qntd(int v[],int tamanho,int posi, int maiorValor, int indiceMaior)
{
   

    if (posi == tamanho - 1)
    {
        return indiceMaior;
    }

    if(v[posi] > maiorValor){
        maiorValor = v[posi];
        indiceMaior = posi;
    }

    return qntd(v, tamanho, posi + 1, maiorValor, indiceMaior);
    
}