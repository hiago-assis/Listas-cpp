#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

   int tamanho;
   
   cout << "Digite o tamanho do vetor: ";
   cin >> tamanho;

   int *v = (int *)malloc(tamanho * sizeof(int));

   for (int i = 0; i < tamanho; i++)
    {
        cin >> *(v + i);
    }

    for (int i = 0; i < tamanho; i++)
    {
       if((*(v + i) < 0)){
         *(v + i) = 0;
       }
    }

    for (int i = 0; i < tamanho; i++)
    {
        cout << *(v + i) << " ";
    }


    free(v);
    v = NULL;
}