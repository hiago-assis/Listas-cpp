#include <iostream>
using namespace std;

//Com WHILE

int main(){

    int N;
    int contadorNumPrimos = 0;
    int contadorNumTestados = 0;
    
    int numero = 2;

    cout << "Digite um numero inteiro: ";
    cin >> N;


    cout << "Os primeiros " << N << " numeros primos sao: ";

    while(contadorNumPrimos < N){
        contadorNumTestados++;

        int primo = 1;
        int i = 2;

        while(i < numero){
            if(numero % i == 0){
                primo = 0;
            }
            i++;
        }

        if(primo == 1){
            cout << numero << " ";
            contadorNumPrimos++;
        }
        numero++;
    }



    cout << "\nQuantidade de numeros testados: " << contadorNumTestados;
    return 0;

}