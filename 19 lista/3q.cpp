#include <iostream>
using namespace std;

const int MAX = 10;

bool matrizEspelhada(int matriz[][MAX], int colunas, int linhaUm, int linhaDois);

int main()
{

    int linhas;
    int colunas;
    int valorDigitado;
    int linhaUm;
    int linhaDois;
    bool matrizVerificacao;

    int matriz[MAX][MAX];

    cout << "Digite a dimensao das linhas:";
    cin >> linhas;

    cout << "Digite o tamanho das dimensoes das colunas:";
    cin >> colunas;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }

    cout << "Digite indice da linha" << "(ate " << linhas - 1 << "):";
    cin >> linhaUm;
    while (linhaUm >= linhas || linhaUm < 0)
    {
        cout << "Numero incorreto, digite um numero valido:";
        cin >> linhaUm;
    }

    cout << "Digite indice da segunda linha" << "(ate " << linhas - 1 << "):";
    cin >> linhaDois;
    while (linhaDois >= linhas || linhaDois < 0)
    {
        cout << "Numero incorreto, digite novamente um numero valido:";
        cin >> linhaDois;
    }

    matrizVerificacao = matrizEspelhada(matriz, colunas, linhaUm, linhaDois);

    if (matrizVerificacao)
    {
        cout << "Os dois indices sao espelhados";
    }
    else
    {
        cout << "Nao e espelhada";
    }
}

bool matrizEspelhada(int matriz[][MAX], int colunas, int linhaUm, int linhaDois)
{

    for (int j = 0; j < colunas; j++)
    {
        if (matriz[linhaUm][j] != matriz[linhaDois][colunas - j - 1])
        {
            return false;
        }
    }

    return true;
}