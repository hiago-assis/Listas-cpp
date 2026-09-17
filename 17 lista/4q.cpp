#include <iostream>
using namespace std;

const int MAX = 10;

void preencherMatriz(int matriz[][MAX], int l, int c);
int maiorValorLinha(int matriz[][MAX], int linha, int c);
int menorValorColuna(int matriz[][MAX], int coluna, int l);
void localizarPontosDestaque(int matriz[][MAX], int l, int c);

int main()
{
    int l, c;

    cout << "Digite a quantidade de linhas (Maximo:10): ";
    cin >> l;

    while (l < 1 || l > 10)
    {
        cout << "Valor invalido, digite novamente (1 a 10): ";
        cin >> l;
    }

    cout << "Digite a quantidade de colunas (Maximo:10): ";
    cin >> c;

    while (c < 1 || c > 10)
    {
        cout << "Valor invalido, digite novamente (1 a 10): ";
        cin >> c;
    }

    int matriz[MAX][MAX];

    preencherMatriz(matriz, l, c);
    localizarPontosDestaque(matriz, l, c);
}

void preencherMatriz(int matriz[][MAX], int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }
}

int maiorValorLinha(int matriz[][MAX], int linha, int c)
{
    int maior = matriz[linha][0];

    for (int j = 1; j < c; j++)
    {
        if (matriz[linha][j] > maior)
        {
            maior = matriz[linha][j];
        }
    }

    return maior;
}

int menorValorColuna(int matriz[][MAX], int coluna, int l)
{
    int menor = matriz[0][coluna];

    for (int i = 1; i < l; i++)
    {
        if (matriz[i][coluna] < menor)
        {
            menor = matriz[i][coluna];
        }
    }

    return menor;
}

void localizarPontosDestaque(int matriz[][MAX], int l, int c)
{
    bool encontrouAlgum = false;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int maiorDaLinha = maiorValorLinha(matriz, i, c);
            int menorDaColuna = menorValorColuna(matriz, j, l);

            if (matriz[i][j] == maiorDaLinha && matriz[i][j] == menorDaColuna)
            {
                cout << "Ponto de destaque: " << matriz[i][j]
                     << " na posicao (Linha " << (i + 1) << ", Coluna " << (j + 1) << ")" << endl;
                encontrouAlgum = true;
            }
        }
    }

    if (!encontrouAlgum)
    {
        cout << "Nenhum ponto de destaque encontrado." << endl;
    }
}