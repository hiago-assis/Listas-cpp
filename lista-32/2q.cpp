#include <iostream>
using namespace std;

const int LINHA = 4;
const int COLUNA = 5;

int somaDaLinha(int* m, int indiceLinha);

int main()
{
    int matriz[LINHA][COLUNA];
    int indiceLinha;
    int *mPtr = &matriz[0][0];

    for (int i = 0; i < LINHA * COLUNA; i++)
    {
        cin >> *(mPtr++);
    }

    cout << "Digite o indice da linha escolhida para a soma:";
    cin >> indiceLinha;

    mPtr = &matriz[0][0];

    cout << somaDaLinha(mPtr, indiceLinha);

    
    return 0;
}

int somaDaLinha(int* m, int indiceLinha){

    int soma = 0;

            for(int j = 0; j < COLUNA; j++){
                soma += *(m + indiceLinha * COLUNA + j);
    }

    return soma;
}





