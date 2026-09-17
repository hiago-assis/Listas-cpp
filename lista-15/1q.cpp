#include <iostream>
using namespace std;



void modificarVetor(int vetor[], int tamanho);
const int TAMANHO = 10;

int main(){

    int vetor[TAMANHO];


    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    modificarVetor(vetor, TAMANHO);


    cout << "Vetor modificado: ";
    for (int i = 0; i < TAMANHO; i++) {
        cout << vetor[i] << " ";
    }



    return 0;
}



void modificarVetor(int vetor[], int tamanho) {

    int metadeVetor = tamanho / 2;
    int indiceSegundaMetade;

    for(int j = 0; j < metadeVetor; j++){

        indiceSegundaMetade = metadeVetor + j;

        int temp = vetor[j];
        vetor[j] = vetor[indiceSegundaMetade];
        vetor[indiceSegundaMetade] = temp;

    }

    



    
}
