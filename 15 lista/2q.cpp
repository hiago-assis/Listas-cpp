#include <iostream>
using namespace std;



int maiorDiferenca(int vetor[], int tamanho);
const int TAMANHO = 50;


int main(){

     int vetor[TAMANHO];
     int maiorVariacao;


    cout << "Digite numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    maiorVariacao = maiorDiferenca(vetor, TAMANHO);

    cout << "A maior variacao entre duas medicoes consecutivas foi:" << maiorVariacao;



}

int maiorDiferenca(int vetor[], int tamanho){

    int maiorDiferenca = 0;
    int diferenca;
    int tempUm;
    int tempDois;

    for(int i = 0; i < tamanho - 1 ;i++){
        tempUm = vetor[i];
        tempDois = vetor[i + 1];
        
        diferenca = tempUm - tempDois;

        if(diferenca < 0){
            diferenca = -diferenca;
        }
      

        if(diferenca > maiorDiferenca){
            maiorDiferenca = diferenca;

        }
        }
        return maiorDiferenca;
    }
