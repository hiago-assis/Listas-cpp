#include <iostream>
using namespace std;

const int VAGA_LIVRE = 0;
const int MAX = 10;

int fileiraComMaisVagasLivres(int matriz[][MAX], int linhas, int colunas);

int main()
{

    int linhas;
    int colunas;
    int valorDigitado;
   
    cout << "Digite a quantidade de linhas da sua matriz(Maximo:10):";
    cin >> linhas;

    while (linhas > 10 || linhas < 1)
    {
        cout << "Valor de linhas da matriz incorreto, digite novamente:";
        cin >> linhas;
    }

    cout << "Digite a quantidade de colunas da sua matriz(Maximo:10):";
    cin >> colunas;

    while (colunas > 10 || colunas < 1)
    {
        cout << "Valor de colunas sda matriz incorreto, digite novamente:";
        cin >> colunas;
    }

    int matriz[MAX][MAX];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }

    
    cout << "O indice da fileira com a maior quantidade de vagas livres e: " << fileiraComMaisVagasLivres(matriz, linhas, colunas);

    
}

int fileiraComMaisVagasLivres(int matriz[][MAX], int linhas, int colunas)
{
    
    int contadorDeVagasLivres = 0;
    int maiorFila = 0;
    int recordeFileira = 0;

    for (int i = 0; i < linhas; i++)
    {
        contadorDeVagasLivres = 0;

        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == VAGA_LIVRE)
            {
                contadorDeVagasLivres++;
            }
            if (contadorDeVagasLivres > recordeFileira)
            {
                maiorFila = i;
               recordeFileira = contadorDeVagasLivres;
            }
        }
    }
    return maiorFila;
}
