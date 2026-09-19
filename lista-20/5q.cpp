#include <iostream>
using namespace std;

const int TAM = 40;

void ordenar(int vetor[], int tamanho);

int main()
{

    int tamanho;
    int vetor[TAM];

    cout << "Digite o tamanho do vetor(ATE 40):";
    cin >> tamanho;


    while(tamanho > TAM){
        cout << "Digite novamente o tamanho do vetor(ATE 40): ";
        cin >> tamanho;
    }

    cout << "Digite os numeros inteiros:" << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    ordenar(vetor, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }

    return 0;
}
void ordenar(int vetor[], int tamanho)
{

    int posicao = 0;
    
    int copia[TAM];
    for(int i = 0; i < tamanho; i++){
        copia[i] = vetor[i];
    }

     for(int i = 0; i < tamanho; i++){
        if(copia[i] < 0){
            vetor[posicao] = copia[i];
            posicao++;
        }
    }

    for(int i = 0; i < tamanho; i++){
        if(copia[i] == 0){
            vetor[posicao] = copia[i];
            posicao++;
        }
    }

    for(int i = 0; i < tamanho; i++){
        if(copia[i] > 0){
            vetor[posicao] = copia[i];
            posicao++;
        }
    }
}