#include <iostream>
using namespace std;

const int TAM = 6;
bool verificar(int v[], int tamanho, int pos);

int main()
{
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }


    if(verificar(vetor, TAM, 0)){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}

bool verificar(int v[], int tamanho, int pos)
{

    if (pos == tamanho - 1)
    {
        return true;
    }

    if ((v[pos] > 0 && v[pos + 1] > 0) || (v[pos] < 0 && v[pos + 1] < 0 ))
    {
        return false;
    }

    return verificar(v, tamanho, pos + 1);
}