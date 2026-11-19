#include <iostream>
using namespace std;

const int TAM = 4;
void somaDasColunas(int *m, int *v);

int main()
{   
    int matriz[TAM][TAM];
    int *m = &matriz[0][0];
    int vetor[TAM];
    int maiorValor;
    int maiorColuna;

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            cin >> *(m + i * TAM + j);
        }
    }

    somaDasColunas(m, vetor);

    maiorValor = *(vetor + 0);

    for (int i = 0; i < TAM; i++)
    {
        if(*(vetor + i) > maiorValor){
            maiorColuna = i;
        }
    }

    cout << "Vetor de soma: ";
    for (int i = 0; i < TAM; i++)  
    {
        cout << *(vetor + i) << " ";
    }

    cout << "Maior coluna e: " << maiorColuna;



    return 0;
}

void somaDasColunas(int *m, int *v)
{
    int soma;

    for (int j = 0; j < TAM; j++)
    {
        soma = 0;
        for (int i = 0; i < TAM; i++)
        {
           soma += *(m + i * TAM + j);
        }
        *(v + j) = soma;
    }

}