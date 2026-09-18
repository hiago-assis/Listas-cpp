#include <iostream>
using namespace std;

const int MAX = 30;

int removerConsecutivosRepetidos(int vetor[], int tamanho);

int main(){

    int vetor[MAX];
    int quantidade;

    cout << "Quantos numeros deseja digitar (ate " << MAX << "): ";
    cin >> quantidade;

    if(quantidade > MAX){
        quantidade = MAX;
        cout << "Quantidade ajustada para o maximo de " << MAX << " numeros." << endl;
    }

    cout << "Digite os numeros inteiros:" << endl;
    for(int i = 0; i < quantidade; i++){
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    int novoTamanho = removerConsecutivosRepetidos(vetor, quantidade);

    cout << endl << "Vetor apos remover repeticoes consecutivas: ";
    for(int i = 0; i < novoTamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Novo tamanho do vetor: " << novoTamanho << endl;

    return 0;
}

int removerConsecutivosRepetidos(int vetor[], int tamanho){

    if(tamanho == 0) return 0;

    int novoTamanho = 1; // o primeiro elemento sempre fica

    for(int i = 1; i < tamanho; i++){
        if(vetor[i] != vetor[novoTamanho - 1]){ // vetor[0] != vetor[1 - 0] = 0
            vetor[novoTamanho] = vetor[i];
            novoTamanho++;
        }
    }

    return novoTamanho;
}