#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

   int tamanho = 5;
   int soma = 0;
    

   int *v = (int *)malloc(tamanho * sizeof(int));

   for (int i = 0; i < tamanho; i++)
    {
        cin >> *(v + i);
    }

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(v + i);
    }

    cout << "A soma dos elementos do vetor e: " << soma;

    free(v);
    v = nullptr;
}