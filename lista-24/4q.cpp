#include <iostream>
using namespace std;

const int TAM = 4;
void exibirVetor(int v[], int tamanho, int posicao);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    exibirVetor(vetor, TAM, 0);
}

void exibirVetor(int v[], int tamanho, int posicao)
{

    if (posicao == tamanho)
    {
        return;
    }

    exibirVetor(v, tamanho, posicao + 1);

    cout << v[posicao] << " ";
}