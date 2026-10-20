#include <iostream>
using namespace std;

void somaEdiferenca(int v1, int v2, int *soma, int *diferenca);

int main(){

    int primeiroValor;
    int segundoValor;
    int soma;
    int diferenca;
    


    cout << "Digite o primeiro numero inteiro:";
    cin >> primeiroValor;
    cout << "Digite o segundo numero inteiro:";
    cin >> segundoValor;

    somaEdiferenca(primeiroValor, segundoValor, &soma, &diferenca);

    cout << "O resultado da soma e: " <<soma << endl;
    cout << "O resultado da diferenca e: " << diferenca;


    
    return 0;
}

void somaEdiferenca(int v1, int v2, int *soma, int *diferenca){

    *soma = v1 + v2;
    *diferenca = v1 - v2;

}