#include <iostream>
using namespace std;

int main(){

    int numAnterior;
    int numAtual;
    int qntdMaior = 0;
    int contadorVezes = 0;

    do{


        cout << "Digite um numero: ";
        cin >> numAtual;


        if(numAtual == 0){
            break;
        }

        if(contadorVezes == 0){
            contadorVezes++;
            numAnterior = numAtual;
            continue;
        }
        
        if(numAtual > numAnterior){
            qntdMaior++;
        }

        numAnterior = numAtual;

    }while(numAtual != 0);


    cout << qntdMaior;

    return 0;
}