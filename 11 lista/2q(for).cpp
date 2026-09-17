#include <iostream>
using namespace std;

//Com FOR

int main(){

    int N;
    int contadorNumPrimos = 0;
    int contadorNumTestados = 0;
    int primo = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;



    cout << "Os primeiros " << N << " numeros primos sao: ";

   for(int numero = 2; contadorNumPrimos < N; numero++){
        contadorNumTestados++;

        primo = 1;

        for(int i = 2; i < numero; i++){
            if(numero % i == 0){
                primo = 0;
            }
        }

        if(primo == 1){
            cout << numero << " ";
            contadorNumPrimos++;
        }
    }

    
    cout << "\nQuantidade de numeros testados: " << contadorNumTestados << "\n";

    return 0;


}