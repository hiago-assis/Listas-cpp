#include <iostream>
using namespace std;

const int TAM = 5;
int maiorValor(int v[], int tamanho, int posicao);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << maiorValor(vetor, TAM, 0);
}

int maiorValor(int v[], int tamanho, int posicao)
{
    int numAtual;
    int maiorNum;

    if (posicao == tamanho - 1)
    {
        return v[posicao];
    }

    numAtual = v[posicao];
    maiorNum = maiorValor(v, tamanho, posicao + 1);

    if (numAtual > maiorNum)
    {
        return numAtual;
    }
    else
    {
        return maiorNum;
    }
}