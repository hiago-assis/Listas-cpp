#include <iostream>
using namespace std;


// Com for
int main() {

    int N;
    int soma = 0;
    int quantidade = 0;

    for(int i = N; i != 0; i = N){
        cout << "Digite os numeros inteiros(digite 0 para sair): ";
        cin >> N;

        if(N != 0){
        soma += N;
        quantidade++;
        }
        
    }
    
    cout << "A soma e: " << soma << "\n";
    cout << "Quantidade de valores validos: " << quantidade;

    return 0;

}