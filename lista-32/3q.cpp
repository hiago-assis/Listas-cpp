#include <iostream>
using namespace std;

const int LINHA = 4;
const int COLUNA = 4;

int maiorElementoColuna(int* m, int indiceColuna);

int main()
{
    int matriz[LINHA][COLUNA];
    int indiceColuna;
    int *mPtr = &matriz[0][0];

    for (int i = 0; i < LINHA * COLUNA; i++)
    {
        cout << "Linha: " << i / COLUNA << " Coluna: " << i % COLUNA << ": ";
        cin >> *(mPtr++);
    }

    cout << "Digite o indice da coluna escolhida: ";
    cin >> indiceColuna;

    mPtr = &matriz[0][0];

    cout << maiorElementoColuna(mPtr, indiceColuna);

    
    return 0;
}

int maiorElementoColuna(int* m, int indiceColuna){
    
    int numAtual;
    int maior = *(m + indiceColuna);

            for(int i = 0; i < LINHA; i++){
               numAtual = *(m + i * COLUNA + indiceColuna);
                if(numAtual > maior){
                     maior = numAtual;
                }
    }

    return maior;
}





