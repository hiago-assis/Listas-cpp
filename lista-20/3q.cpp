#include <iostream>
using namespace std;

const int TAM = 6;

int sequenciaAlternada(int vetor[], int tamanho);

int main()
{

    int vetor[TAM];

    cout << "Digite os numeros inteiros:" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    cout << "A maior sequencia alternada e: " << sequenciaAlternada(vetor, TAM);

    return 0;
}

int sequenciaAlternada(int vetor[], int tamanho)
{

    int sequencia = 1;
    int tempSequencia = 1;
    for (int i = 0; i < tamanho - 1; i++)
    {
        if ((vetor[i] % 2 == 0 && vetor[i + 1] % 2 != 0) ||
            (vetor[i] % 2 != 0 && vetor[i + 1] % 2 == 0))
        {
            tempSequencia++;
            sequencia = tempSequencia;
        }
        else
        {
            tempSequencia = 1;
        }

        if (tempSequencia > sequencia)
        {
            sequencia = tempSequencia;
        }
    }

    return sequencia;
}