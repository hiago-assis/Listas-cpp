#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int tamanho;
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> tamanho;

    int *m = (int *)malloc(tamanho * tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            cin >> *(m + i * tamanho + j);
        }
    }



     for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if(i == j){
                somaDiagonalPrincipal += *(m + i * tamanho + j);
            }

            if(i + j == tamanho - 1){
                    somaDiagonalSecundaria += *(m + i * tamanho + j);
            }
        }
    }


    cout << somaDiagonalPrincipal << endl;
    cout << somaDiagonalSecundaria;

    free(m);
    m = NULL;

    return 0;
}