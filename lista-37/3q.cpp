#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int linhas;
    int colunas;
    int somaLinha = 0;
    int quantidadeAcimaMedia = 0;
    float media;

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

    for (int i = 0; i < linhas; i++)
    {

        somaLinha = 0;
        quantidadeAcimaMedia = 0;

        for (int j = 0; j < colunas; j++)
        {
            somaLinha += *(m + i * colunas + j);
        }

        media = (float)somaLinha / colunas;

        for (int z = 0; z < colunas; z++)
        {
            if (*(m + i * colunas + z) > media)
            {
                quantidadeAcimaMedia++;
            }
        }

        cout << "A media da linha " << i << " e: " << media << endl;
        cout << "A quantidade acima da media da linha " << i << " e: " << quantidadeAcimaMedia << endl;
    }

    free(m);
    m = NULL;

    return 0;
}
