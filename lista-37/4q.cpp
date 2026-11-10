#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int linhas;
    int colunas;
    int somaAtual;
    int maiorSoma = 0;
    int indiceMaior;
    int aux;

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
        somaAtual = 0;
        for (int j = 0; j < colunas; j++)
        {
            somaAtual +=  *(m + i * colunas + j);
        }

        if(somaAtual > maiorSoma){
            maiorSoma = somaAtual;
            indiceMaior = i;
        }
    }


    for(int j = 0; j < colunas; j++){

        aux = *(m + 0 * colunas + j);
        *(m + 0 * colunas + j) = *(m + indiceMaior * colunas + j);
        *(m + indiceMaior * colunas + j) = aux;

    }


     for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << *(m + i * colunas + j) << " ";
        }
        cout << endl;
    }

     free(m);
    m = NULL;

    return 0;

}