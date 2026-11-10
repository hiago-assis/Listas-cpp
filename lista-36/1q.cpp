#include <iostream>
#include <cstdlib>
using namespace std;

int buscarSubMatriz(int *m, int linha, int coluna, int *colunaEncontrada, int *linhaEncontrada);

int main()
{

    int linha;
    int coluna;
    int linhaEncontrada;
    int colunaEncontrada;
    int maiorSomaEncontrada;

    cout << "Digite a quantidade de linhas(Pelo menos duas linhas): ";
    cin >> linha;

    while (linha < 2)
    {
        cout << "Quantidade de linhas incorreta. Digite novamente: ";
        cin >> linha;
    }

    cout << "Digite a quantidade de colunas(Pelo menos duas colunas): ";
    cin >> coluna;

    while (coluna < 2)
    {
        cout << "Quantidade de colunas incorreta. Digite novamente: ";
        cin >> coluna;
    }

    int *m = (int *)malloc(linha * coluna * sizeof(int));
    
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> *(m + i * coluna + j);
        }
    }

    maiorSomaEncontrada = buscarSubMatriz(m, linha, coluna, &colunaEncontrada, &linhaEncontrada);

    cout << "A maior soma encontrada foi: " << maiorSomaEncontrada << endl;
    cout << "A linha e: " << linhaEncontrada << endl;
    cout << "A coluna encontrada e: " << colunaEncontrada;

    free(m);
    m = NULL;
}

int buscarSubMatriz(int *m, int linha, int coluna, int *colunaEncontrada, int *linhaEncontrada)
{

    int somaAtual;
    int maiorSoma = *m + *(m + 1) + *(m + coluna) + *(m + coluna + 1);
    *linhaEncontrada = 0;
    *colunaEncontrada = 0;

    for (int i = 0; i < linha - 1; i++)
    {
        somaAtual = 0;
        for (int j = 0; j < coluna - 1; j++)
        {

            somaAtual = *(m + i * coluna + j) +          // superior esquerdo
                        *(m + i * coluna + j + 1) +      // superior direito
                        *(m + (i + 1) * coluna + j) +    // inferior esquerdo
                        *(m + (i + 1) * coluna + j + 1); // inferior direito

            if (somaAtual > maiorSoma)
            {
                maiorSoma = somaAtual;
                *linhaEncontrada = i;
                *colunaEncontrada = j;
            }
        }
    }

    return maiorSoma;
}