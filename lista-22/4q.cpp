#include <iostream> 
using namespace std;

int main(){

    int num;
    int temp;
    int diferencaAtual;
    int maiorDiferenca;


    for(int i = 0; i < 4;i++){
        cout << "Digite um numero inteiro: ";
        cin >> num;

        if(i == 0){
            temp = num;
            maiorDiferenca = 0;
            continue;
        }


        // OUTRA FORMA DE SER FEITA 
        /*
        if(num < temp){
            diferencaAtual = temp - num;
        }else{
            diferencaAtual = num - temp;
        }
        */
        // OUTRA FORMA DE SER FEITA 

        
        diferencaAtual = temp - num;

        if(diferencaAtual < 0){
            diferencaAtual = -diferencaAtual;
        }
    

        if(diferencaAtual > maiorDiferenca){
            maiorDiferenca = diferencaAtual;
        }

        temp = num;
    }


cout << maiorDiferenca;
}