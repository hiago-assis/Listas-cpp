#include <iostream>
#include <cstdlib>
using namespace std;

void maiorDiferenca(int *m, int linha, int coluna, int *maiorValorLinha, int *menorValorLinha, int *linhaEncontrada);

int main()
{

    int linha;
    int coluna;
    int menorValorLinha;
    int maiorValorLinha;
    int linhaEncontrada;
    int maiorDif;

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

    maiorDiferenca(m, linha, coluna, &maiorValorLinha, &menorValorLinha, &maiorDif);

     cout << "Linha com maior amplitude: " << linhaEncontrada << endl;
    cout << "Maior valor da linha: " << maiorValorLinha << endl;
    cout << "Menor valor da linha: " << menorValorLinha << endl;
    cout << "Maior amplitude: " << maiorValorLinha - menorValorLinha << endl;

    free(m);
    m = NULL;
}

void maiorDiferenca(int *m, int linha, int coluna, int *maiorValorLinha, int *menorValorLinha, int *linhaEncontrada)
{
    int maiorNum;
    int menorNum;
    int diferencaAtual;
    int maiorDif;

    *linhaEncontrada = 0;

    for (int i = 0; i < linha; i++)
    {
        maiorNum = *(m + i * coluna);
        menorNum = *(m + i * coluna);

        for (int j = 0; j < coluna; j++)
        {
            if (*(m + i * coluna + j) > maiorNum)
            {
                maiorNum = *(m + i * coluna + j);
            }

            if (*(m + i * coluna + j) < menorNum)
            {
                menorNum = *(m + i * coluna + j);
            }
        }

        diferencaAtual = maiorNum - menorNum;

        if (i == 0 || diferencaAtual > maiorDif)
        {
            maiorDif = diferencaAtual;

            *linhaEncontrada = i;
            *maiorValorLinha = maiorNum;
            *menorValorLinha = menorNum;
        }
    }
}