#include <iostream>
using namespace std;

bool vetorSimetrico(int vetor[], int tamanho);
const int TAMANHO = 10;


int main(){

     int vetor[TAMANHO];
     bool resultadoVetor;

    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    resultadoVetor = vetorSimetrico(vetor, TAMANHO);

    if(resultadoVetor){
        cout << "O vetor atende a condicao de somas simetricas.";
    }else{
        cout << "O vetor NAO atende a condicao de somas simetricas.";
    }

    return 0;



}

bool vetorSimetrico(int vetor[], int tamanho){
    int somaReferencia = vetor[0] + vetor[tamanho - 1]; // Guarda a soma do primeiro par de numeros.
    int primeiroElemento;
    int ultimoElemento;
    int somaAtual;

    for(int i = 0;i < tamanho/2;i++){ 

        primeiroElemento = vetor[i];
        ultimoElemento = vetor[tamanho - 1 - i];

        somaAtual = primeiroElemento + ultimoElemento;

        if(somaAtual != somaReferencia){
            return false;
        }
    }
    return true;
}
