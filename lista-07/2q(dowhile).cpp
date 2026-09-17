#include <iostream>
using namespace std;

int main() {

    // Com do while
    int N, resultado, i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;



    do {

        resultado = N * i;
        cout << N <<"x" << i << "=" << resultado << "\n";
        i++;
        
     }while(i <= 10);



    return 0;
}