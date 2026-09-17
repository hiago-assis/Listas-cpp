#include <iostream>
using namespace std;

const int LINHAS = 4;
const int COLUNAS = 4;

void mediaColunas(float matriz[][COLUNAS], float vetor[]);
int maiorColuna(float vetor[]);

int main()
{
    float valorDigitado;

    float matriz[LINHAS][COLUNAS];
    float vetor[4];

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }

    mediaColunas(matriz, vetor);
    int colunaMaior = maiorColuna(vetor);

    cout << endl << "Medias de cada coluna: ";
    for (int j = 0; j < COLUNAS; j++)
    {
        cout << vetor[j] << " ";
    }
    cout << endl;

    cout << "A coluna com a maior media e a coluna " << (colunaMaior + 1) << endl;
    return 0;
}

void mediaColunas(float matriz[][COLUNAS], float vetor[])
{
    float soma = 0;
    float media = 0;

    for (int j = 0; j < COLUNAS; j++)
    {
        soma = 0;

        for (int i = 0; i < LINHAS; i++)
        {
            soma += matriz[i][j];
        }

        media = soma / LINHAS;

        vetor[j] = media;
    }
}

int maiorColuna(float vetor[])
{

    int maiorValor = vetor[0];
    int maiorColuna = 0;

    for (int i = 0; i < 4; i++)
    {
        if (vetor[i] > maiorValor)
        {
            maiorValor = vetor[i];
            maiorColuna = i;
        }
    }
    return maiorColuna;
}