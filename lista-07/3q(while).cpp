#include <iostream>
using namespace std;

int main() {

    // Com while
    int N,soma = 0;
    int i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    while(i <= N){

        soma = soma + i;

        i++;
    }
    cout << "Soma = " << soma;

    return 0;
}