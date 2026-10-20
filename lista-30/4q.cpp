#include <iostream>
using namespace std;

void trocarValores(int *v1, int *v2);

int main(){

    int primeiroValor;
    int segundoValor;
    


    cout << "Digite o primeiro numero inteiro:";
    cin >> primeiroValor;
    cout << "Digite o segundo numero inteiro:";
    cin >> segundoValor;

    cout << "Antes:" << endl;
    cout << "a = " << primeiroValor << endl;
    cout << "b = " << segundoValor << endl;

    trocarValores(&primeiroValor, &segundoValor);

    cout << "Depois:" << endl;
    cout << "a = " << primeiroValor << endl;
    cout << "b = " << segundoValor;

    
    return 0;
}

void trocarValores(int *v1, int *v2){

    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;

}