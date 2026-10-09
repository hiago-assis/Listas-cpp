#include <iostream>
using namespace std;

const int TAM = 6;
int ultimaOcorrencia(int v[], int tamanho, int pos, int X);


int main()
{

    int vetor[TAM];
    int X;

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << "Digite um valor: ";
    cin >> X;

    cout << ultimaOcorrencia(vetor, TAM, 0, X);

   

    return 0;
}


int ultimaOcorrencia(int v[], int tamanho, int pos, int X){
    int resultadoResto;

    if(pos == tamanho){
        return -1;
    }

    resultadoResto = ultimaOcorrencia(v, tamanho, pos + 1, X);

    if(resultadoResto != -1){           
        return resultadoResto;           
    }

    if(v[pos] == X){                    
        return pos;
    }
    return -1;
}

