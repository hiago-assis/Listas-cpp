#include <iostream>
using namespace std;

const int MAX = 10;
const int SEM_VEGETACAO = 0;
const int COM_VEGETACAO = 1;
const int EM_CHAMAS = 2;

void preencherEExibirMatriz(int matriz[][MAX], int n);
bool verificarVizinhoEmChamas(int matriz[][MAX], int linha, int coluna, int n);
void propagarFogo(int matrizOriginal[][MAX], int novaMatriz[][MAX], int n);
int contarNovasAreasQueimadas(int matrizOriginal[][MAX], int novaMatriz[][MAX], int n);
void exibirMatriz(int matriz[][MAX], int n);

int main()
{
    int n;

    cout << "Digite a ordem da matriz (N, entre 2 e 10): ";
    cin >> n;

    while (n < 2 || n > 10)
    {
        cout << "Valor invalido, digite novamente (2 a 10): ";
        cin >> n;
    }

    int matrizOriginal[MAX][MAX];
    int novaMatriz[MAX][MAX];

    preencherEExibirMatriz(matrizOriginal, n);

    propagarFogo(matrizOriginal, novaMatriz, n);

    int qntdNovasAreas = contarNovasAreasQueimadas(matrizOriginal, novaMatriz, n);

    cout << endl << "Matriz antes da propagacao:" << endl;
    exibirMatriz(matrizOriginal, n);

    cout << endl << "Matriz depois da propagacao:" << endl;
    exibirMatriz(novaMatriz, n);

    cout << endl << "Quantidade de novas areas atingidas pelo fogo: " << qntdNovasAreas << endl;
}

void preencherEExibirMatriz(int matriz[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << " (0-sem vegetacao, 1-com vegetacao, 2-em chamas): ";
            cin >> matriz[i][j];

            while (matriz[i][j] < 0 || matriz[i][j] > 2)
            {
                cout << "Valor invalido, digite novamente (0 a 2): ";
                cin >> matriz[i][j];
            }
        }
    }

    cout << endl << "Matriz digitada:" << endl;
    exibirMatriz(matriz, n);
}

void exibirMatriz(int matriz[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool verificarVizinhoEmChamas(int matriz[][MAX], int linha, int coluna, int n)
{
    if (linha - 1 >= 0 && matriz[linha - 1][coluna] == EM_CHAMAS) return true;   // acima
    if (linha + 1 < n && matriz[linha + 1][coluna] == EM_CHAMAS) return true;    // abaixo
    if (coluna - 1 >= 0 && matriz[linha][coluna - 1] == EM_CHAMAS) return true;  // esquerda
    if (coluna + 1 < n && matriz[linha][coluna + 1] == EM_CHAMAS) return true;   // direita

    return false;
}

void propagarFogo(int matrizOriginal[][MAX], int novaMatriz[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrizOriginal[i][j] == COM_VEGETACAO && verificarVizinhoEmChamas(matrizOriginal, i, j, n))
            {
                novaMatriz[i][j] = EM_CHAMAS;
            }
            else
            {
                novaMatriz[i][j] = matrizOriginal[i][j];
            }
        }
    }
}

int contarNovasAreasQueimadas(int matrizOriginal[][MAX], int novaMatriz[][MAX], int n)
{
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrizOriginal[i][j] == COM_VEGETACAO && novaMatriz[i][j] == EM_CHAMAS)
            {
                contador++;
            }
        }
    }

    return contador;
}