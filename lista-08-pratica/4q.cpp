
#include <iostream>
#include <cstdlib>
using namespace std;
void mediaLinhas(int *m, int linha, int coluna, int *v);

int main()
{
    int linhas;
    int colunas;


    cout << "Digite a quantidade de linhas da matriz: ";
    cin >> linhas;

    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> colunas;

    int *m = (int *)malloc(linhas * colunas * sizeof(int));

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite o valor da linha " << i << " e coluna " << j << ": ";

            cin >> *(m + i * colunas + j);
        }
    }

    int *v = (int *)malloc(linhas * sizeof(int));

    mediaLinhas(m, linhas, colunas, v);

     for (int i = 0; i < linhas; i++)
    {
        cout << *(v + i) << " ";
    }


    free(m);
    free(v);

    m = NULL;
    v = NULL;

    return 0;
}

void mediaLinhas(int *m, int linha, int coluna, int *v){

    int somaAtual = 0;
    float media;


    for (int i = 0; i < linha; i++)
    {   
        somaAtual = 0;
        for (int j = 0; j < coluna; j++)
        {
            somaAtual += *(m + i * coluna + j);
            
        }
        media = (float)somaAtual / coluna;
        *(v + i) = media;
    }

}