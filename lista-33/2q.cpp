#include <iostream>
using namespace std;


const int LINHA = 4;
const int COLUNA = 5;

void maiorEmenor(int *m, int *maior, int *linhaMaior, int *colunaMaior,
                 int *menor, int *linhaMenor, int *colunaMenor);

int main(){ 

    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];

    int maior, menor;
    int linhaMaior, colunaMaior;
    int linhaMenor, colunaMenor;

    for(int i = 0; i < LINHA * COLUNA; i++){
            cin >> *(mPtr++);
        }


    maiorEmenor(&matriz[0][0], &maior, &linhaMaior, &colunaMaior,
                &menor, &linhaMenor, &colunaMenor);

    cout << "Maior: " << maior << " em Linha: " << linhaMaior << " Coluna: " << colunaMaior << endl;
    cout << "Menor: " << menor << " em Linha: " << linhaMenor << " Coluna: " << colunaMenor << endl;

}

void maiorEmenor(int *m, int *maior, int *linhaMaior, int *colunaMaior,
                 int *menor, int *linhaMenor, int *colunaMenor)
{
    *maior = *m;
    *linhaMaior = 0;
    *colunaMaior = 0;

    *menor = *m;
    *linhaMenor = 0;
    *colunaMenor = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (*m > *maior)
            {
                *maior = *m;
                *linhaMaior = i;
                *colunaMaior = j;
            }

            if (*m < *menor)
            {
                *menor = *m;
                *linhaMenor = i;
                *colunaMenor = j;
            }

            m++;
        }
    }
}