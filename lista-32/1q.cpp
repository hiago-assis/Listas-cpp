#include <iostream>
using namespace std;

const int LINHA = 3;
const int COLUNA = 4;

int main()
{
    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];

    for (int i = 0; i < LINHA * COLUNA; i++)
    {
        cin >> *(mPtr++);
    }

    mPtr = &matriz[0][0];

    for (int i = 0; i < LINHA; i++)
    {
        cout << "Linha " << i << ":";
        for (int j = 0; j < COLUNA; j++)
        {
            cout << " " << *(mPtr + i * COLUNA + j);
        }
        cout << endl;
    }

    return 0;
}