#include <iostream>
using namespace std;

int main() {

    // Com while
    int N, resultado, i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;


    while(i <= 10){

        resultado = N * i;
            cout << N <<"x" << i << "=" << resultado << "\n";
        
            i++;

    }

    return 0;
}