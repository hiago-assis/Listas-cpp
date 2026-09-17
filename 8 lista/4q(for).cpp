#include <iostream>
using namespace std;

int main() {
    //COM FOR

    int N;
    int maiorNum = 0;

    cout << "Digite um numero inteiro: ";
    cin >> N;
    maiorNum = N;
    
    for(int i = 2; i <= 6;i++){
     cout << "Digite um numero inteiro: ";
     cin >> N;

    
    if(N > maiorNum){
       maiorNum = N;
     }

    }

    cout << "O maior numero e: " << maiorNum;
   

    return 0;
}