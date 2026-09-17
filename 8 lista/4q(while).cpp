#include <iostream>
using namespace std;

int main() {
    //COM WHILE

    int N;
    int maiorNum = 0;
    int i = 2;

    cout << "Digite um numero inteiro: ";
    cin >> N;
    maiorNum = N;
    
    while(i <= 6){
     cout << "Digite um numero inteiro: ";
     cin >> N;

    
    if(N > maiorNum){
       maiorNum = N;
     }

     i++;
    }

    cout << "O maior numero e: " << maiorNum;
   

    return 0;
}