#include <iostream>
using namespace std;

const int TAM = 5;

int maior(int vetor[], int tamanho);

int main()
{

    int vetor[TAM];

    cout << "Digite os numeros inteiros:" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    maior(vetor, TAM);

    return 0;
}

int maior(int vetor[], int tamanho)
{
    
    int qntdMaiores = 0;

    for (int i = 0; i < tamanho; i++)
    {
        int anterior = (i - 1 + tamanho) % tamanho;
        int seguinte = (i + 1) % tamanho;

        if(vetor[i] > vetor[anterior] && vetor[i] > vetor[seguinte]){
            qntdMaiores++;
        }
    }

}