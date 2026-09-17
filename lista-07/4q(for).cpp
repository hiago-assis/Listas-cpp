#include <iostream>
using namespace std;

int main() {

    // Com FOR
    int N;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    cout << "Lista de numeros pares: ";
    for(int i = 1; i <= N; i++){
        if(i % 2 == 0){
            cout << " " << i;
        }
    }


    return 0;

}