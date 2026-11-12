
#include <iostream>
#include <cstdlib>
using namespace std;

void removerMenorLinha(int *m, int linha, int coluna, int *tamLinha);

int main()
{
    int linhas;
    int colunas;

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

    removerMenorLinha(m, linhas, colunas, &linhas);

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

void removerMenorLinha(int *m, int linha, int coluna, int *tamLinha)
{

    int somaAtual = 0;
    int indiceMenorLinha;
    int menorLinha = 0;

    for (int j = 0; j < coluna; j++)
    {
        menorLinha += *(m + j);
    }

    for (int i = 1; i < linha; i++)
    {
        somaAtual = 0;
        for (int j = 1; j < coluna; j++)
        {
            somaAtual += *(m + i * coluna + j);
        }
        if (somaAtual < menorLinha)
        {
            menorLinha = somaAtual;
            indiceMenorLinha = i;
        }
    }

    for (int i = indiceMenorLinha; i < linha - 1; i++){
    
        for (int j = 0; j < coluna; j++)
        {
            *(m + i * coluna + j) = *(m + (i + 1) * coluna + j);
        }
    }

    (*tamLinha)--;
}