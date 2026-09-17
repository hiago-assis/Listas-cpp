#include <iostream>
using namespace std;


const int TAMANHO = 5;


bool contarVetor(int vetorUm[], int vetorDois[], int TAMANHO){


    for(int i = 0; i < TAMANHO; i++){
        if(vetorUm[i] != vetorDois[i]){
            return false;
        }else{
            return true;
        }
    }

}




int main() {

    int vetorUm[TAMANHO];
    int vetorDois[TAMANHO];
    int resultadoValorRepetido;
 
    cout << "Digite numeros inteiros do vetor 1:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetorUm[i];
    }


    cout << "Digite numeros inteiros do vetor 2:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetorDois[i];
    }

    resultadoValorRepetido = contarVetor(vetorUm,vetorDois,TAMANHO);
    

    if(resultadoValorRepetido){
        cout << "Valores repetidos";
    }else{

        cout << "Valores diferentes";
    }

 
    return 0;
}