#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int tamanho;
    float soma = 0;
    float media;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    while (tamanho < 0)
    {
        cout << "Digite um numero positivo: ";
        cin >> tamanho;
    }

    int *v = (int *)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        cin >> *(v + i);
    }

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(v + i);
    }

    media = soma / tamanho;

    cout << "A media dos elementos do vetor e: " << media;

    free(v);
    v = NULL;
}