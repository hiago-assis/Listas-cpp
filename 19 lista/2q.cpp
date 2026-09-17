#include <iostream>
using namespace std;

const int MAX = 10;

void alterarValores(int matriz[][MAX], int n);
void imprimirMatriz(int matriz[][MAX], int n);

int main()
{

    int n;
    int valorDigitado;
   
    cout << "Digite a ordem da matriz quadrada (Maximo:10):";
    cin >> n;

    while (n < 1 || n > MAX)
    {
        cout << "Valor invalido, digite novamente (1 a 10):";
        cin >> n;
    }

    int matriz[MAX][MAX];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            matriz[i][j] = valorDigitado;
        }
    }

    imprimirMatriz(matriz, n);
    cout << endl;
    alterarValores(matriz, n);
    imprimirMatriz(matriz, n);

}

void alterarValores(int matriz[][MAX], int n){

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1){  
                matriz[i][j] = 0;
            }
        }
    }

}

void imprimirMatriz(int matriz[][MAX], int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}