#include <iostream>
#include <cstdlib>
using namespace std;


int maiorQntdPares(int *m, int linha, int coluna, int *qntdValoresPares); 

int main()
{
    int linhas;
    int colunas;
    int qntdValoresPares;

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

     int resultado = maiorQntdPares(m, linhas, colunas, &qntdValoresPares);

     cout << resultado << endl;

     cout << qntdValoresPares;


    free(m);
    m = NULL;

    return 0;
}

int maiorQntdPares(int *m, int linha, int coluna, int *qntdValoresPares){

    int indiceMaior;
    int quantidadeParesAtual;
    int maiorQntdPar = 0;
    *qntdValoresPares = 0;
    

    for (int i = 0; i < linha; i++)
    {
        quantidadeParesAtual = 0;
        for (int j = 0; j < coluna; j++)
        {
            if(*(m + i * coluna + j) % 2 == 0){
                quantidadeParesAtual++;
                
            }
        }
        if(quantidadeParesAtual > maiorQntdPar){
            indiceMaior = i;
            maiorQntdPar = quantidadeParesAtual;
            *qntdValoresPares = quantidadeParesAtual;
        }
    }


    return indiceMaior;



}