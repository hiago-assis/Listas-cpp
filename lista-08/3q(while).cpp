#include <iostream>
using namespace std;

int main() {
    //COM WHILE

    int N, contagemZeros = 0, contagemPositivos = 0, contagemNegativos = 0;
    int i = 1; 

    while(i <= 8){
     cout << "Digite um numero inteiro: ";
     cin >> N;

    if(N > 0){
        contagemPositivos++;
     }else if(N < 0){
        contagemNegativos++;
     }else{
        contagemZeros++;
     }
     i++;
    }

    cout << "Positivos: " << contagemPositivos << "\n";
    cout << "Negativos: " <<contagemNegativos << "\n";
    cout << "Zeros: " << contagemZeros;
   

    return 0;
}