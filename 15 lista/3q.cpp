#include <iostream>
using namespace std;



int segundoMaiorValor(int vetor[], int tamanho);
const int TAMANHO = 8;


int main(){

     int vetor[TAMANHO];
     int segundoValor;


    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    segundoValor = segundoMaiorValor(vetor, TAMANHO);

    cout << "O segundo maior valor distinto e: " << segundoValor;

    return 0;



}

int segundoMaiorValor(int vetor[], int tamanho){

    int maiorNumero = 0;
    int segundoValor = 0;
    int valoresVetor;
    int tempUm;

    for(int i = 0; i < tamanho;i++){
        tempUm = vetor[i];

        if(tempUm > maiorNumero){
            maiorNumero = tempUm;
        }
    }


    for(int i = 0; i < tamanho;i++){
        valoresVetor = vetor[i];
        if (valoresVetor < maiorNumero && valoresVetor > segundoValor)
        {
            segundoValor = valoresVetor;
        }
    }

        return segundoValor;
    }
