#include <iostream>
using namespace std;

const int TAM = 5;
bool ordemCrescente(int v[], int tamanho, int posi);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    if (ordemCrescente(vetor, TAM, 0))
    {
        cout << "Esta em ordem crescente";
    }
    else
    {
        cout << "Nao esta em ordem crescente";
    }
}

bool ordemCrescente(int v[], int tamanho, int posi)
{

    if (posi == tamanho - 1)
    {
        return true;
    }

    if (v[posi] >= v[posi + 1])
    {
        return false;
    }

    return ordemCrescente(v, tamanho, posi + 1);
}