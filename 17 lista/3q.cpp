#include <iostream>
using namespace std;

const int LINHAS = 5;  //CIDADES
const int COLUNAS = 7;  //DIAS DA SEMANA

void preencherMatriz(float matriz[][COLUNAS]);
float temperaturaMedia(float matriz[][COLUNAS], int numeroCidade);
int diaComMaiorMedia(float matriz[][COLUNAS]);
int contarAbaixoDe15(float matriz[][COLUNAS]);

int main()
{
   float matriz[LINHAS][COLUNAS];
   float tempMedia;
   int numCidade;

   preencherMatriz(matriz);

   cout << "Digite o numero da cidade que deseja calcular a temperatura media (0 a 4): ";
   cin >> numCidade;

   while (numCidade < 0 || numCidade >= LINHAS)
   {
       cout << "Valor invalido, digite novamente (0 a 4): ";
       cin >> numCidade;
   }

   tempMedia = temperaturaMedia(matriz, numCidade);

   int diaMaisQuente = diaComMaiorMedia(matriz);
   int qntdAbaixoDe15 = contarAbaixoDe15(matriz);

   cout << endl;
   cout << "A temperatura media da cidade e: " << tempMedia << endl;
   cout << "O dia mais quente (considerando as medias) e o dia: " << (diaMaisQuente + 1) << endl;
   cout << "Quantidade de temperaturas abaixo de 15 graus: " << qntdAbaixoDe15 << endl;

}

void preencherMatriz(float matriz[][COLUNAS])
{
    float valorDigitado;

   cout << "Digite o valor da temperatura:" << endl;
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {   
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }
}

float temperaturaMedia(float matriz[][COLUNAS], int numeroCidade){
    float soma = 0;
    float media = 0;

    for (int j = 0; j < COLUNAS; j++)
    {   
        soma += matriz[numeroCidade][j];
    }

    media = soma / COLUNAS;

    return media;
}

int diaComMaiorMedia(float matriz[][COLUNAS]){
    int diaMaisQuente = 0;
    float maiorMedia = 0;

    for (int j = 0; j < COLUNAS; j++)
    {
        float somaDoDia = 0;

        for (int i = 0; i < LINHAS; i++)
        {
            somaDoDia += matriz[i][j];
        }

        float mediaDoDia = somaDoDia / LINHAS;

        if (mediaDoDia > maiorMedia)
        {
            maiorMedia = mediaDoDia;
            diaMaisQuente = j;
        }
    }

    return diaMaisQuente;
}

int contarAbaixoDe15(float matriz[][COLUNAS]){
    int contador = 0;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] < 15)
            {
                contador++;
            }
        }
    }

    return contador;
}