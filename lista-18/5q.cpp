#include <iostream>
using namespace std;

const int LINHAS = 5;
const int COLUNAS = 5;

void copiar(int matriz[][COLUNAS], int vetor[]);
int somaElementos(int vetor[]);

int main()
{
    int valorDigitado;
    int soma;

    int matriz[LINHAS][COLUNAS];
    int vetor[5];

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }

    copiar(matriz, vetor);
    soma = somaElementos(vetor);

    cout << endl << "Vetor com a diagonal principal: ";
    for (int i = 0; i < LINHAS; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Soma dos elementos da diagonal: " << soma << endl;

    return 0;
}

void copiar(int matriz[][COLUNAS], int vetor[])
{
     for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if(i == j){
                vetor[i] = matriz[i][j];
            }
        }
    }
}

int somaElementos(int vetor[])
{
    int soma = 0;

    for(int i = 0; i < 5; i++){
        soma+= vetor[i];
    }

    return soma;
}