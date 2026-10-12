#include <iostream>
using namespace std;

const int TAM = 6;
bool verificarSomaPares(int v[], int tamanho, int inicial, int final, int somaParAnterior);

int main()
{
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << verificarSomaPares(vetor, TAM, 1, TAM - 2, vetor[0] + vetor[TAM - 1]);
}

bool verificarSomaPares(int v[], int tamanho, int inicial, int final, int somaParAnterior)
{
    int somaParAtual;

    if (inicial > final)
    {
        return true;
    }

    somaParAtual = v[inicial] + v[final];

    if (somaParAnterior != somaParAtual)
    {
        return false;
    }

    return verificarSomaPares(v, tamanho, inicial + 1, final - 1, somaParAnterior);
}