#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int linha;
    int coluna;
    int indiceLinhaUm;
    int indiceLinhaDois;
    int aux;

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

    cout << "Digite o indice da primeira linha: ";
    cin >> indiceLinhaUm;

    cout << "Digite o indice da segunda linha: ";
    cin >> indiceLinhaDois;

    cout << "Matriz normal: " << endl;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cout << *(m + i * coluna + j) << " ";
        }
        cout << endl;
    }

    // troca de elementos
   
        for (int j = 0; j < coluna; j++)
        {
            aux = *(m + indiceLinhaUm * coluna + j);
            *(m + indiceLinhaUm * coluna + j) = *(m + indiceLinhaDois * coluna + j);
            *(m + indiceLinhaDois * coluna + j) = aux;
        }
    

    cout << "Matriz modificada: " << endl;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cout << *(m + i * coluna + j) << " ";
        }
        cout << endl;
    }

    free(m);
    m = NULL;
}
