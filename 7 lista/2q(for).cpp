#include <iostream>
using namespace std;

int main() {

    // Com FOR
    int N, resultado;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    cout << "Os multiplos de 3 sao: ";
    for(int i = 1; i <= 10; i++){

        resultado = N * i;
            cout << N <<"x" << i << "=" << resultado << "\n";

    }

    return 0;
}