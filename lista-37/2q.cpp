#include <iostream>
#include <cstdlib>
using namespace std;


int maiorColuna(int *m, int linhas, int colunas, int *maiorSoma);

int main()
{

    int linhas;
    int colunas;
    int maiorSoma = 0;

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

    cout << "A indice da maior coluna e: " << maiorColuna(m, linhas, colunas, &maiorSoma) << endl;
    cout << "A maior soma e: " << maiorSoma;

    free(m);
    m = NULL;

}

int maiorColuna(int *m, int linhas, int colunas, int *maiorSoma){

    int somaAtual = 0;
    int indiceDaColuna;

    for (int j = 0; j < colunas; j++)
    {
        somaAtual = 0;
        for (int i = 0; i < linhas; i++)
        {
            somaAtual += *(m + i * colunas + j);
        }

        if(somaAtual > *maiorSoma){
            *maiorSoma = somaAtual;
            indiceDaColuna = j;
            }
    }

    return indiceDaColuna;
}