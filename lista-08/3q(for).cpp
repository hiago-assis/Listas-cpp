#include <iostream>
using namespace std;

int main() {
    //COM FOR

    int N, contagemZeros = 0, contagemPositivos = 0, contagemNegativos = 0;

    for(int i = 1; i <= 8;i++){
     cout << "Digite um numero inteiro: ";
     cin >> N;

    if(N > 0){
        contagemPositivos++;
     }else if(N < 0){
        contagemNegativos++;
     }else{
        contagemZeros++;
     }
    }

    cout << "Positivos: " << contagemPositivos << "\n";
    cout << "Negativos: " <<contagemNegativos << "\n";
    cout << "Zeros: " << contagemZeros;
   

    return 0;
}