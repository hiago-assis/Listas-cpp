#include <iostream>
using namespace std;



const int TAMANHO = 10;


bool contarVetor(int vetor[], int TAMANHO){

    for(int i = 0; i < TAMANHO - 1; i++){
        for(int j = i + 1; j < TAMANHO; j++){
            if(vetor[i] == vetor[j]){
                return true;
            }
        }
    }

    return false;

}




int main() {

    int vetor[TAMANHO];
    int resultadoValorRepetido;
 
    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }
    

    resultadoValorRepetido = contarVetor(vetor, TAMANHO);



    if(resultadoValorRepetido){
         cout << "O vetor possui valores repetidos" << endl;
    }else{
        cout << "O vetor nao possui valores repetios" << endl;
    }
   
 
    return 0;
}