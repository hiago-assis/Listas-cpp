#include <iostream>
using namespace std;


// Com do while
int main() {

    int N = 0;
    int quantidadePositivo = 0;
    int quantidadeNegativo = 0;
    int quantidadeZero = 0;

    do{

        cout << "Digite os numeros inteiros(digite 999 para sair): ";
        cin >> N;

        if(N < 0){
            quantidadeNegativo++;
        }else if(N > 0 && N != 999){
            quantidadePositivo++;
        }else if(N == 0){
            quantidadeZero++;
        }


    }while(N != 999);
        
    
    
    cout << "Quantidade de valores positivos: " << quantidadePositivo << "\n";
    cout << "Quantidade de valores negativo: " << quantidadeNegativo << "\n";
    cout << "Quantidade de zeros: " << quantidadeZero;

    return 0;

}