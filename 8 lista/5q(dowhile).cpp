#include <iostream>
using namespace std;

int main() {
    //COM DO WHILE

    int N;
    int soma = 0;
    int i = 1; 

    cout << "Digite um numero inteiro: ";
    cin >> N;
    
    do{
        if(i % 2 != 0){
       soma += i;
     }
     i++;

        
    }while(i <= N);
    

    cout << "O Soma dos numeros e: " << soma;
   
    return 0;
}