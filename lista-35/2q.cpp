#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int linha;
    int coluna;
    int qntdNegativo = 0;
    int qntdPositivo = 0;
    int qntdZero = 0;

    cout << "Digite o tamanho da linha da matriz: ";
    cin >> linha;

    cout << "Digite o tamanho da coluna da matriz: ";
    cin >> coluna;

    int *m = (int *)malloc(linha * coluna * sizeof(int));
    int *p = m; // usando outra forma de percorrer a matriz.

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> *(m + i * coluna + j);
        }
    }

    

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if(*p < 0){
                qntdNegativo++;
            }else if(*p > 0){
                qntdPositivo++;
            }else if(*p == 0){
                qntdZero++;
            }
            p++; // usando outra forma de percorrer a matriz.
        }
        
    }

    cout << "Quantidade de positivo: " << qntdPositivo << endl;
    cout << "Quantidade de negativo: " << qntdNegativo << endl;
    cout << "Quantidade de zero: " << qntdZero;
    free(m);
    m = NULL;
}
