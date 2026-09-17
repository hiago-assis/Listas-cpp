#include <iostream>
using namespace std;

const int MAX = 10;

void preencherMatriz(int matriz[][MAX], int n);
void exibirMatriz(int matriz[][MAX], int n);
bool verificarSimetria(int matriz[][MAX], int n);
int somaAcimaDiagonalPrincipal(int matriz[][MAX], int n);

int main()
{
    int n;
    bool verificar;
    int somaDiagonal;

    cout << "Digite a ordem da matriz (N, entre 2 e 10): ";
    cin >> n;

    while (n < 2 || n > 10)
    {
        cout << "Valor invalido, digite novamente (2 a 10): ";
        cin >> n;
    }

    int matriz[MAX][MAX];

    preencherMatriz(matriz, n);
    exibirMatriz(matriz, n);
    verificar = verificarSimetria(matriz, n);

    if(verificar){
        cout << "E simetrico";
    }else{
        cout << "Nao e simetrico";
    }

    somaDiagonal = somaAcimaDiagonalPrincipal(matriz,n);
    
    cout << "A soma da diagonal e: " << somaDiagonal;
}

void preencherMatriz(int matriz[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }
}


void exibirMatriz(int matriz[][MAX], int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
bool verificarSimetria(int matriz[][MAX], int n){
    
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            if(matriz[i][j] != matriz[j][i]){
                    return false;
            }
        }
    }

    return true;
}

int somaAcimaDiagonalPrincipal(int matriz[][MAX],int n){

    int soma = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            if(j > i){
                soma+= matriz[i][j];
            }
        }
    }

    return soma;

}