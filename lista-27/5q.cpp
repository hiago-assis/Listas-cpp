#include <iostream>
using namespace std;

const int TAM = 6;

int somaAbsoluta(int v[], int inicial, int final, int maiorDiferencaAbsoluta, int somaAbsolutaAnterior);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << somaAbsoluta(vetor, 0, TAM - 1, 0, 0);
}

int somaAbsoluta(int v[], int inicial, int final, int maiorDiferencaAbsoluta, int somaAbsolutaAnterior)
{
    int somaAtual;
    int diferenca;

    if (inicial > final)
    {
        return maiorDiferencaAbsoluta;
    }

    somaAtual = v[inicial] + v[final];

    if (inicial == 0)
    {
        somaAbsolutaAnterior = somaAtual;
    }
    else
    {
        diferenca = somaAtual - somaAbsolutaAnterior;
        if (diferenca < 0)
        {
            diferenca = diferenca * -1;
        }
        if (diferenca > maiorDiferencaAbsoluta)
        {
            maiorDiferencaAbsoluta = diferenca;
        }
    }

    somaAbsolutaAnterior = somaAtual;

    return somaAbsoluta(v, inicial + 1, final - 1, maiorDiferencaAbsoluta, somaAbsolutaAnterior);
}