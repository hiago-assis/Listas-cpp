#include <iostream>
using namespace std;

const int TAM = 6;
int qntdEstaveis(int v[], int tamanho, int pos, int qntd);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << qntdEstaveis(vetor, TAM, 0, 0);
}

int qntdEstaveis(int v[], int tamanho, int pos, int qntd)
{
    int diferenca;

    if (pos == tamanho - 1)
    {
        return qntd;
    }

    diferenca = v[pos] - v[pos + 1];

    if (diferenca < 0)
    {
        diferenca = diferenca * -1;
    }

    if (diferenca <= 3)
    {
        qntd++;
    }

    return qntdEstaveis(v, tamanho, pos + 1, qntd);
}