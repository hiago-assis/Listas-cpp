#include <iostream>
using namespace std;

int main() {

    // Com FOR
    int N,soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    for(int i = 1; i <= N; i++){

        soma = soma + i;

    }
    cout << "Soma = " << soma;

    return 0;
}