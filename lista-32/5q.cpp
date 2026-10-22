#include <iostream>
using namespace std;

const int LINHA = 3;
const int COLUNA = 4;

double media(int *m);
int qntdAcimaDaMedia(int* m, double media);

int main()
{
    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];
    double mediaMatriz;

    for (int i = 0; i < LINHA * COLUNA; i++)
    {
        cout << "Linha: " << i / COLUNA << " Coluna: " << i % COLUNA << ": ";
        cin >> *(mPtr++);
    }

    mPtr = &matriz[0][0];

    mediaMatriz = media(mPtr);
    cout << "Quantidades acima da media e: " << qntdAcimaDaMedia(mPtr, mediaMatriz);

    return 0;
}

double media(int *m)
{
    int totalNumeros = LINHA * COLUNA;
    double media = 0;
    double soma = 0;

    for (int i = 0; i < LINHA * COLUNA; i++)
    {
       soma += *m;
       m++;
    }

    media = soma / totalNumeros;

    return media;
}

int qntdAcimaDaMedia(int* m, double media){
    int qntd = 0;
    
    for (int i = 0; i < LINHA * COLUNA; i++)
    {
       if(*m > media){
         qntd++;
       }
       m++;
    }

    return qntd;
}
