#include <iostream>
using namespace std;

const int LINHAS = 4;
const int COLUNAS = 5;

void somaDalinha(int matriz[][COLUNAS], int vetor[]);

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

    somaDalinha(matriz, vetor);

    for (int i = 0; i < LINHAS; i++)
    {
        cout << vetor[i] << " ";
    }
    return 0;
}

void somaDalinha(int matriz[][COLUNAS], int vetor[])
{
    int soma = 0;

    for (int i = 0; i < LINHAS; i++)
    {
        soma = 0;
        for (int j = 0; j < COLUNAS; j++)
        {

            soma += matriz[i][j];
            vetor[i] = soma;
        }
    }
}