#include <iostream>
using namespace std;

const int LINHAS = 3;
const int COLUNAS = 6;

void contarPares(int matriz[][COLUNAS], int vetor[]);

int main()
{
    int valorDigitado;

    int matriz[LINHAS][COLUNAS];
    int vetor[3];

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }

    contarPares(matriz, vetor);

    for (int i = 0; i < LINHAS; i++)
    {
        cout << vetor[i] << " ";
    }
    return 0;
}

void contarPares(int matriz[][COLUNAS], int vetor[])
{
    int qntdElementos = 0;

    for (int i = 0; i < LINHAS; i++)
    {   
        qntdElementos = 0;
        
        for (int j = 0; j < COLUNAS; j++)
        {
            if(matriz[i][j] % 2 == 0){
                qntdElementos++;
            }
            
        }
        vetor[i] = qntdElementos;
    }
}