#include <iostream>
using namespace std;

int main() {

    // Com DO WHILE
    int N;
    int i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    cout << "Lista de numeros pares: ";
    do{
        if(i % 2 == 0){
            cout << " " << i;
        }
        i++;
    }while(i <= N);


    return 0;

}