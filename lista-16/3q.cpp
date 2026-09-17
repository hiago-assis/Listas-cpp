#include <iostream>
using namespace std;

const int TAMANHO = 4;
void trocarElementos(int matriz[][TAMANHO], int linhaUm, int linhaDois);

int main()
{

    int matriz[TAMANHO][TAMANHO];
    int linhaUm;
    int linhaDois;
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }


    cout << "Digite uma linha valida da matriz(0 A 3):";
    cin >> linhaUm;
    cout << "Digite outra linha valida da matriz(0 A 3):";
    cin >> linhaDois;

    trocarElementos(matriz,linhaUm,linhaDois);


     for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    
}

void trocarElementos(int matriz[][TAMANHO], int linhaUm, int linhaDois){  

    int temp;
    
    for(int i = 0; i < TAMANHO;i++){

       temp = matriz[linhaUm][i];
       matriz[linhaUm][i] = matriz[linhaDois][i];
       matriz[linhaDois][i] = temp;
    }


   
}