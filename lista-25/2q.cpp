#include <iostream>
using namespace std;

const int TAM = 5;
int qntd(int v[], int tamanho, int posi, int valorBuscado);

int main()
{

    int vetor[TAM];
    int X;


    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << "Digite o valor a ser buscado: ";
    cin >> X;

    cout << qntd(vetor, TAM, 0, X);
}

int qntd(int v[], int  tamanho, int posi,int valorBuscado)
{

    if (posi == tamanho)
    {
        return 0;
    }

    if(v[posi] == valorBuscado){
            return 1 + qntd(v,tamanho,posi + 1, valorBuscado);
    }else{
            return 0 + qntd(v,tamanho,posi + 1, valorBuscado);
    }

    
}