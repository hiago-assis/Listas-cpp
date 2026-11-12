
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int tamanho;
    int soma = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int *v = (int *)malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++){
        cin >> *(v + i);
    }

    for(int i = 0; i < tamanho; i++){
        soma += *(v + i);
    }

    cout << soma;

    free(v);
    v = NULL;
}