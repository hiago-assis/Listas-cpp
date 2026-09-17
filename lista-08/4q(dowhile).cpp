#include <iostream>
using namespace std;

int main() {
    //COM DO WHILE

    int N;
    int maiorNum = 0;
    int i = 2;

    cout << "Digite um numero inteiro: ";
    cin >> N;
    maiorNum = N;
    
    do{

        cout << "Digite um numero inteiro: ";
        cin >> N;

    
        if(N > maiorNum){
            maiorNum = N;
        }
     i++;
    }while(i <= 6);
     

    cout << "O maior numero e: " << maiorNum;
   

    return 0;
}