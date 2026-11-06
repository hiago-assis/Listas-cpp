#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int tamanho;
    int soma = 0;

    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> tamanho;


    int *m = (int *)malloc(tamanho * tamanho * sizeof(int));

    for (int i = 0; i < tamanho * tamanho; i++)
    {
            cin >> *(m + i);
    }



    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if(i == j){
                soma += *(m + i * tamanho + j);
            }
        }
    }

    cout << "A soma dos elementos da diagonal principal e: " << soma;

    free(m);
    m = NULL;
}
