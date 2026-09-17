#include <iostream>
using namespace std;

const int TAMANHO = 5;

int procurar(int vetor[], int TAMANHO, int valorProcurado){

    int contadorNum = 0;

    for(int i = 0; i < TAMANHO; i++){
        if(vetor[i] == valorProcurado){
            contadorNum++;
        }
    }

    return contadorNum;

}


int main() {

    int vetor[TAMANHO];
    int numeroBuscado;
    int contador;
 
    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    cout << "Digite o numero a ser buscado no vetor: " ;
    cin >> numeroBuscado;

    contador = procurar(vetor, TAMANHO, numeroBuscado);

    cout << endl;


    if(contador > 0){
        cout << "A quantidade de vezes que aparece no vetor e: " << contador;
    }else{
        cout << "Nao houve ocorrencia desse numero no vetor";

    }

    


 
    return 0;
}