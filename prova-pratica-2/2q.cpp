#include <iostream>
using namespace std;

void diminuirVetor(int *v, int *tamanhoLogico);

int main()
{
    int TAM = 10;
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> *(vetor + i);
    }

    diminuirVetor(vetor, &TAM);

    cout << endl;

    for (int i = 0; i < TAM; i++)
    {
        cout << *(vetor + i) << " ";
    }

    cout << endl
         << TAM;

         return 0;
}
void diminuirVetor(int *v, int *tamanhoLogico)
{
    for (int i = 0; i < *tamanhoLogico; i++)
    {
        int j = i;
        while (j < *tamanhoLogico)
        {
            if (*(v + j) < 0)
            {
                for (int k = j; k < *tamanhoLogico - 1; k++)
                {
                    *(v + k) = *(v + k + 1);
                }
                (*tamanhoLogico)--;
            }
            else
                j++;
        }
    }
}

