#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

   int tamanho;
   int qntd = 0;
   
   cout << "Digite o tamanho do vetor: ";
   cin >> tamanho;

   int *v = (int *)malloc(tamanho * sizeof(int));

   for (int i = 0; i < tamanho; i++)
    {
        cin >> *(v + i);
    }

    for (int i = 0; i < tamanho; i++)
    {
       if((*(v + i) % 2 == 0)){
        qntd++;
       }
    }

    cout << "A quantidade de pares e: " << qntd;

    free(v);
    v = nullptr;
}