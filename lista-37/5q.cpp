
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int linhas;
    int colunas;
    int somaColuna;

    cout << "Digite a quantidade de linhas da matriz: ";
    cin >> linhas;

    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> colunas;

    int *m = (int *)malloc(linhas * colunas * sizeof(int));

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite o valor da linha " << i
                 << " e coluna " << j << ": ";

            cin >> *(m + i * colunas + j);
        }
    }

    int *v = (int *)malloc(colunas * sizeof(int));

    for (int j = 0; j < colunas; j++)
    {
        somaColuna = 0;

        for (int i = 0; i < linhas; i++)
        {
            somaColuna += *(m + i * colunas + j);
        }

        *(v + j) = somaColuna;
    }

    cout << endl;
    cout << "vetor com as somas das colunas:" << endl;

    for (int j = 0; j < colunas; j++)
    {
        cout << *(v + j) << " ";
    }

    free(m);
    free(v);

    m = NULL;
    v = NULL;

    return 0;
}