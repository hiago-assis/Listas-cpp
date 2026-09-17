#include <iostream>
using namespace std;

const int MAX = 10;

void preencherMatriz(int matriz[][MAX], int linhas, int colunas);
int armazenarPositivosUnicos(int matriz[][MAX], int linhas, int colunas, int vetor[]);

int main()
{
    int linhas, colunas;

    cout << "Digite a quantidade de linhas (Maximo:10): ";
    cin >> linhas;

    while (linhas < 1 || linhas > MAX)
    {
        cout << "Valor invalido, digite novamente (1 a 10): ";
        cin >> linhas;
    }

    cout << "Digite a quantidade de colunas (Maximo:10): ";
    cin >> colunas;

    while (colunas < 1 || colunas > MAX)
    {
        cout << "Valor invalido, digite novamente (1 a 10): ";
        cin >> colunas;
    }

    int matriz[MAX][MAX];
    int vetor[MAX * MAX];

    preencherMatriz(matriz, linhas, colunas);

    int quantidade = armazenarPositivosUnicos(matriz, linhas, colunas, vetor);

    cout << endl << "Vetor de positivos sem repeticao: ";
    for (int i = 0; i < quantidade; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Quantidade de valores positivos distintos: " << quantidade << endl;

    return 0;
}

void preencherMatriz(int matriz[][MAX], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }
}

int armazenarPositivosUnicos(int matriz[][MAX], int linhas, int colunas, int vetor[])
{
    int quantidade = 0;
    bool jaExiste;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] > 0)
            {
                 jaExiste = false;

                for (int k = 0; k < quantidade; k++)
                {
                    if (vetor[k] == matriz[i][j])
                    {
                        jaExiste = true;
                    }
                }

                if (!jaExiste)
                {
                    vetor[quantidade] = matriz[i][j];
                    quantidade++;
                }
            }
        }
    }

    return quantidade;
}