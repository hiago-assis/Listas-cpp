#include <iostream>
#include <cstdlib>
using namespace std;

int qntdPositivos(int *m, int linha, int coluna, int qntd, int pos);

int main()
{

    int linha;
    int coluna;

    cout << "Digite o tamanho da linha da matriz: ";
    cin >> linha;

    cout << "Digite o tamanho da coluna da matriz: ";
    cin >> coluna;

    int *m = (int *)malloc(linha * coluna * sizeof(int));

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> *(m + i * coluna + j);
        }
    }

    cout << "A quantidade de positivos e: " << qntdPositivos(m, linha, coluna, 0, 0);

    free(m);
    m = NULL;
}

int qntdPositivos(int *m, int linha, int coluna, int qntd, int pos)
{

    if (pos == linha * coluna)
    {
        return qntd;
    }

    if (*m > 0)
    {
        qntd++;
    }

    return qntdPositivos(m + 1, linha, coluna, qntd, pos + 1);
}
