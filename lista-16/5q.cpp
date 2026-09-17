#include <iostream>
using namespace std;

const int LIN = 3;
const int COL = 5;
void maior(int matriz[][COL]);

int main()
{

    int matriz[LIN][COL];

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    maior(matriz);
}

void maior(int matriz[][COL])
{

    int maiorValor;

    for (int i = 0; i < LIN; i++)
    {
        maiorValor = 0;
        for (int j = 0; j < COL; j++)
        {
            if (matriz[i][j] > maiorValor)
            {
                maiorValor = matriz[i][j];
            }
        }
        cout << "O maior valor da linha " << (i + 1) << ": " << maiorValor << " " << endl;
    }
}