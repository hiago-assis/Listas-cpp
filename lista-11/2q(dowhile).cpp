#include <iostream>
using namespace std;

int main(){

    int N;
    int contadorNumPrimos = 0;
    int contadorNumTestados = 0;
    int numero = 2;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    cout << "Os primeiros " << N << " numeros primos sao: ";

    do{
        contadorNumTestados++;

        int primo = 1;
        int i = 2;

        if(i < numero){
            do{
                if(numero % i == 0){
                    primo = 0;
                }
                i++;
            } while(i < numero);
        }

        if(primo == 1){
            cout << numero << " ";
            contadorNumPrimos++;
        }
        numero++;

    } while(contadorNumPrimos < N);

    cout << "\nQuantidade de numeros testados: " << contadorNumTestados;

    return 0;
}