#include <iostream>
using namespace std;

//Com WHILE

int main(){


    int N;
    int contadorRecorde = 0;
    int sequenciaAtual = 0;
    int i = 1;

    while(i != 0){

        cout << "Digite os numeros inteiros(digite 0 para sair): ";
        cin >> N;

        if(N > 0){
            sequenciaAtual++;
            if(sequenciaAtual > contadorRecorde){
                contadorRecorde = sequenciaAtual;
            }
        }else if(N < 0){
            sequenciaAtual = 0;
        }
        i = N;
    }

    cout << "A maior sequencia de numeros positivos: " << contadorRecorde;




return 0;

}