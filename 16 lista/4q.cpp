#include <iostream>
using namespace std;

const int TAMANHO = 4;
bool verificarDiagonal(int matriz[][TAMANHO]);

int main()
{

    int matriz[TAMANHO][TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    cout << verificarDiagonal(matriz);
    
}

bool verificarDiagonal(int matriz[][TAMANHO]){  

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {   
           if(i == j){

           }else if(matriz[i][j] != 0){
                return false;
           }
        }
    }
        return true;



   
}