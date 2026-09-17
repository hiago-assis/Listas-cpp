#include <iostream>
using namespace std;

int main() {
    //COM FOR

    int N;
    int soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> N;
    
    for(int i = 1; i <= N;i++){
    if(i % 2 != 0){
       soma += i;
     }
    }

    cout << "O Soma dos numeros e: " << soma;
   

    return 0;
}