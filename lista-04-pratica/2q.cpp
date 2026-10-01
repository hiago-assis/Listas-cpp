#include <iostream>
using namespace std;

const int TAM = 8;
void somarK(int v[], int tamanho, int pos, int k);

int main()
{
    int vetor[TAM];
    int K;

    for (int i = 0; i < 8; i++)
    {
        cin >> vetor[i];
    }

    cin >> K;


    for (int i = 0; i < 8; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    somarK(vetor,TAM,0,K);

      for (int i = 0; i < 8; i++)
    {
        cout << vetor[i] << " ";
    }
     cout << endl;

}

void somarK(int v[], int tamanho, int pos, int k)
{
    if(pos == tamanho){
        return;
    }

    v[pos] += k;

    return somarK(v, tamanho, pos + 1, k);
}