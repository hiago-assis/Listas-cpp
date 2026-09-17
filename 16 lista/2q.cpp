#include <iostream>
using namespace std;

const int TAMANHOLINHA = 3;
const int TAMANHOCOLUNA = 4;
float media(float matriz[][TAMANHOCOLUNA]);
int superior(float matriz[][TAMANHOCOLUNA], float mediaCalculada);

int main()
{

    float matriz[TAMANHOLINHA][TAMANHOCOLUNA];
    float mediaCalculada;

    for (int i = 0; i < TAMANHOLINHA; i++)
    {
        for (int j = 0; j < TAMANHOCOLUNA; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    mediaCalculada = media(matriz);
    cout << mediaCalculada << endl;
    cout << superior(matriz, mediaCalculada);
}

float media(float matriz[][TAMANHOCOLUNA])
{
    float soma = 0;
    float resultado = 0;
    int totalElementos = TAMANHOLINHA * TAMANHOCOLUNA;

    for (int i = 0; i < TAMANHOLINHA; i++)
    {
        for (int j = 0; j < TAMANHOCOLUNA; j++)
        {
            soma += matriz[i][j];
        }
    }

    resultado = soma / totalElementos;

    return resultado;
}

int superior(float matriz[][TAMANHOCOLUNA], float mediaCalculada)
{
    int qntdElementos = 0;
    for (int i = 0; i < TAMANHOLINHA; i++)
    {
        for (int j = 0; j < TAMANHOCOLUNA; j++)
        {
            if(matriz[i][j] > mediaCalculada){
                qntdElementos++;
            }
        }
    }

    return qntdElementos;

}
