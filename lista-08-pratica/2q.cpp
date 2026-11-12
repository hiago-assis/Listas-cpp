#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int linhas;
    int colunas;
    int qntd = 0;


    cout << "Digite a quantidade de linhas da matriz: ";
    cin >> linhas;

    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> colunas;

    int *m = (int *)malloc(linhas * colunas * sizeof(int));

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite o valor da linha " << i << " e coluna " << j << ": ";

            cin >> *(m + i * colunas + j);
        }
    }

     for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(*(m + i * colunas + j) < 0){
                qntd++;
            }
        }
    }

    cout << qntd;

    free(m);
    m = NULL;
}