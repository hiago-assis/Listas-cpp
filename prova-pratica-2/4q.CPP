#include <iostream>
using namespace std;

const int LIN = 4;
const int COL = 5;

int qntdValoresPares(int m[][COL], int indiceLinha, int coluna, int qntdPares);
void linhaMaisPares(int m[][COL], int linha, int *indiceMelhor, int *qntdMelhor);

int main()
{
    int matriz[LIN][COL];
    int indiceMelhor = 0;
    int qntdMelhor = -1;

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> matriz[i][j];
        }
    }

    linhaMaisPares(matriz, 0, &indiceMelhor, &qntdMelhor);

    cout << "Linha com mais pares: " << indiceMelhor << endl;
    cout << "Quantidade de pares: " << qntdMelhor << endl;

    return 0;
}

int qntdValoresPares(int m[][COL], int indiceLinha, int coluna, int qntdPares)
{
    if (coluna == COL)
    {
        return qntdPares;
    }

    if (m[indiceLinha][coluna] % 2 == 0)
    {
        qntdPares++;
    }

    return qntdValoresPares(m, indiceLinha, coluna + 1, qntdPares);
}

void linhaMaisPares(int m[][COL], int linha, int *indiceMelhor, int *qntdMelhor)
{
    if (linha == LIN)
    {
        return;
    }

    int qntdAtual = qntdValoresPares(m, linha, 0, 0);

    if (qntdAtual > *qntdMelhor)
    {
        *qntdMelhor = qntdAtual;
        *indiceMelhor = linha;
    }

    linhaMaisPares(m, linha + 1, indiceMelhor, qntdMelhor);
}