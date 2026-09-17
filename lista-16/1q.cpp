#include <iostream>
using namespace std;

const int TAMANHO = 4;
int somaDaLinha(int matriz[][TAMANHO], int linhaMatriz);

int main()
{

    int matriz[TAMANHO][TAMANHO];
    int linhaDaMatriz;

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    do
    {
        cout << "Digite uma linha valida da matriz(0 A 3):";
        cin >> linhaDaMatriz;
    } while (linhaDaMatriz >= TAMANHO || linhaDaMatriz < 0);

    cout << "A soma da linha da Matriz e: " << somaDaLinha(matriz, linhaDaMatriz);
}

int somaDaLinha(int matriz[][TAMANHO], int linhaMatriz)
{
    int soma = 0;

    for (int i = 0; i < TAMANHO; i++)
    {
        soma += matriz[linhaMatriz][i];
    }

    return soma;
}
