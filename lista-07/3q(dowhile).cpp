#include <iostream>
using namespace std;

int main() {

    // Com do while
    int N,soma = 0;
    int i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    do{
        
        soma = soma + i;
        i++;
        
    }while(i <= N);
   
    cout << "Soma = " << soma;

    return 0;
}