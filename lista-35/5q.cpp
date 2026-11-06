#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int linha;
    int coluna;
  

    cout << "Digite o tamanho da linha da matriz: ";
    cin >> linha;

    cout << "Digite o tamanho da coluna da matriz: ";
    cin >> coluna;

    int *m = (int *)malloc(linha * coluna * sizeof(int));

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> *(m + i * coluna + j);
        }
    }


  


  

    free(m);
    m = NULL;
}
