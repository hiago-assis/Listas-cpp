#include <iostream>
using namespace std;

const int MAX = 10;

void preencherMatriz(int matriz[][MAX], int n);
int somaRegiao(int matriz[][MAX], int n, int regiao);
int regiaoComMaiorSoma(int matriz[][MAX], int n);

int main()
{
    int n;

    cout << "Digite a ordem da matriz (deve ser par, Maximo:10): ";
    cin >> n;

    while (n < 2 || n > MAX || n % 2 != 0)
    {
        cout << "Valor invalido, digite novamente (par, entre 2 e 10): ";
        cin >> n;
    }

    int matriz[MAX][MAX];

    preencherMatriz(matriz, n);

    int regiaoVencedora = regiaoComMaiorSoma(matriz, n);
    int somaVencedora = somaRegiao(matriz, n, regiaoVencedora);

    cout << endl << "A regiao com a maior soma e a regiao " << regiaoVencedora
         << ", com soma igual a " << somaVencedora << endl;

    return 0;
}

void preencherMatriz(int matriz[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }
}

int somaRegiao(int matriz[][MAX], int n, int regiao)
{
    int metade = n / 2;
    int soma = 0;
    int linhaInicio, linhaFim, colunaInicio, colunaFim;

    if (regiao == 1)
    {
        linhaInicio = 0; linhaFim = metade;
        colunaInicio = 0; colunaFim = metade;
    }
    else if (regiao == 2)
    {
        linhaInicio = 0; linhaFim = metade;
        colunaInicio = metade; colunaFim = n;
    }
    else if (regiao == 3)
    {
        linhaInicio = metade; linhaFim = n;
        colunaInicio = 0; colunaFim = metade;
    }
    else
    {
        linhaInicio = metade; linhaFim = n;
        colunaInicio = metade; colunaFim = n;
    }

    for (int i = linhaInicio; i < linhaFim; i++)
    {
        for (int j = colunaInicio; j < colunaFim; j++)
        {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int regiaoComMaiorSoma(int matriz[][MAX], int n)
{
    int soma1 = somaRegiao(matriz, n, 1);
    int soma2 = somaRegiao(matriz, n, 2);
    int soma3 = somaRegiao(matriz, n, 3);
    int soma4 = somaRegiao(matriz, n, 4);

    int maiorSoma = soma1;
    int regiaoVencedora = 1;

    if (soma2 > maiorSoma) { maiorSoma = soma2; regiaoVencedora = 2; }
    if (soma3 > maiorSoma) { maiorSoma = soma3; regiaoVencedora = 3; }
    if (soma4 > maiorSoma) { maiorSoma = soma4; regiaoVencedora = 4; }

    return regiaoVencedora;
}