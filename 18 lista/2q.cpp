#include <iostream>
using namespace std;

const int LINHAS = 5;
const int COLUNAS = 4;

void maiorElemento(int matriz[][COLUNAS], int vetor[]);

int main()
{
    int valorDigitado;

    int matriz[LINHAS][COLUNAS];
    int vetor[4];

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }

    maiorElemento(matriz, vetor);

    for (int i = 0; i < LINHAS; i++)
    {
        cout << vetor[i] << " ";
    }
    return 0;
}

void maiorElemento(int matriz[][COLUNAS], int vetor[])
{
    int maiorValor;
    
    for (int j = 0; j < COLUNAS; j++)
    {
       maiorValor = matriz[0][j];

        for (int i = 1; i < LINHAS; i++)
        {
            if (matriz[i][j] > maiorValor)
            {
                maiorValor = matriz[i][j];
            }
        }

        vetor[j] = maiorValor;
    }
}