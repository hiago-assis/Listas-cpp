#include <iostream>
using namespace std;


// Com while
int main() {

    int N = 0;
    int maiorNumero = 0;
    int menorNumero = 0;

    cout << "Digite os numeros inteiros(digite -1 para sair): ";
    cin >> N;

    menorNumero = N;
    maiorNumero = N;

    while(N != -1){

        if(N > maiorNumero){
            maiorNumero = N;
        }

        if(N < menorNumero){
            menorNumero = N;
        }
        

        cout << "Digite os numeros inteiros(digite -1 para sair): ";
        cin >> N;

    }
    
    cout << "Maior numero: " << maiorNumero << "\n";
    cout << "Menor numero: " << menorNumero;
 

    return 0;

}