#include <iostream>
using namespace std;

const int LINHA = 3;
const int COLUNA = 3;

void multiplicarPorK(int *m, int valorK);

int main()
{
    int matriz[LINHA][COLUNA];
    int K;
    int *mPtr = &matriz[0][0];

    for (int i = 0; i < LINHA * COLUNA; i++)
    {
        cout << "Linha: " << i / COLUNA << " Coluna: " << i % COLUNA << ": ";
        cin >> *(mPtr++);
    }

    cout << "Digite um valor: ";
    cin >> K;

    mPtr = &matriz[0][0];

    multiplicarPorK(mPtr, K);

    mPtr = &matriz[0][0];

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            cout << *(mPtr++) << " ";
        }
        cout << endl;
    }

    return 0;
}

void multiplicarPorK(int *m, int valorK)
{

    for (int i = 0; i < LINHA * COLUNA; i++)
    {
        *m = *m * valorK;
        m++;
    }
}
