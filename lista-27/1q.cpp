#include <iostream>
using namespace std;

const int TAM = 8;
int maiorSequencia(int v[], int tamanho, int pos, int sequenciaAtual, int maiorSeq);

int main()
{
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << "A maior sequencia foi: " << maiorSequencia(vetor, TAM, 0, 1, 1);
}

int maiorSequencia(int v[], int tamanho, int pos, int sequenciaAtual, int maiorSeq)
{
    if (pos == tamanho - 1)
    {
        return maiorSeq;
    }
    
    if (v[pos + 1] > v[pos])
    {
        sequenciaAtual++;
    }
    else
    {
        sequenciaAtual = 1;
    }

    if (sequenciaAtual > maiorSeq)
    {
        maiorSeq = sequenciaAtual;
    }

    return maiorSequencia(v, tamanho, pos + 1, sequenciaAtual, maiorSeq);
}