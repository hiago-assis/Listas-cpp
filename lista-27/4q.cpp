#include <iostream>
using namespace std;

const int TAM = 6;

int somasPrimeira(int v[], int tamanho, int pos, int somaPrimeiraMetade);
int somasSegunda(int v[], int tamanho, int pos, int somaSegundaMetade);

int main()
{

    int vetor[TAM];
    int soma1;
    int soma2;

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    soma1 = somasPrimeira(vetor, TAM, 0, 0);
    soma2 = somasSegunda(vetor, TAM, TAM / 2, 0);

    if(soma1 == soma2){
        cout << "True";
    }else{
        cout << "False";
    }
}

int somasPrimeira(int v[], int tamanho, int pos, int somaPrimeiraMetade)
{

    if (pos == tamanho / 2)
    {
        return somaPrimeiraMetade;
    }

    somaPrimeiraMetade += v[pos];

    return somasPrimeira(v, tamanho, pos + 1, somaPrimeiraMetade);
}

int somasSegunda(int v[], int tamanho, int pos, int somaSegundaMetade)
{

    if (pos == tamanho)
    {
        return somaSegundaMetade;
    }

    somaSegundaMetade += v[pos];

    return somasSegunda(v, tamanho, pos + 1, somaSegundaMetade);
}