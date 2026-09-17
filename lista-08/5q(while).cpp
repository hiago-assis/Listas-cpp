#include <iostream>
using namespace std;

int main() {
    //COM WHILE

    int N;
    int soma = 0;
    int i = 1; 

    cout << "Digite um numero inteiro: ";
    cin >> N;
    
    while(i <= N){
    if(i % 2 != 0){
       soma += i;
     }
     i++;
    }

    cout << "O Soma dos numeros e: " << soma;
   
    return 0;
}