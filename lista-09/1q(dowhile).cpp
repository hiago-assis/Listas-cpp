#include <iostream>
using namespace std;


// Com do while
int main() {

    int N;
    int soma = 0;
    int quantidade = 0;

    do{

        cout << "Digite os numeros inteiros(digite 0 para sair): ";
        cin >> N;

        if(N != 0){
        soma += N;
        quantidade++;
        }


    }while(N != 0);
      


    cout << "A soma e: " << soma << "\n";
    cout << "Quantidade de valores validos: " << quantidade;


    return 0;

}