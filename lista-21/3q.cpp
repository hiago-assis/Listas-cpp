#include <iostream>
using namespace std;

int main(){

   int num;
   int algarismo;

   cout << "Digite um numero inteiro: ";
   cin >> num;

    while (num > 0) {
        algarismo = num % 10; // Pega o último algarismo
        cout << algarismo << " ";
        num = num / 10;          // Remove o último algarismo
    }
    

   return 0;
}