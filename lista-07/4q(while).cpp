#include <iostream>
using namespace std;

int main() {

    // Com WHILE
    int N;
    int i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    cout << "Lista de numeros pares: ";
    while(i <= N){
        if(i % 2 == 0){
            cout << " " << i;
        }
        i++;
    }


    return 0;

}