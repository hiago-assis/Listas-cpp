#include <iostream>
using namespace std;

const int TAM = 3;
int potencia(int base, int expoente);
int cubo(int v[], int tamanho, int pos);

int main()
{
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << cubo(vetor, TAM, 0);
}

int potencia(int base, int expoente)
{

    if (expoente == 0)
    {
        return 1;
    }

    return potencia(base, expoente - 1) * base;
}

int cubo(int v[], int tamanho, int pos)
{

    int numElevado;

    if (pos == tamanho)
    {
        return 0;
    }

    numElevado = potencia(v[pos], 3);

    return numElevado + cubo(v, tamanho, pos + 1);
}
