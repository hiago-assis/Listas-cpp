#include <iostream>
using namespace std;


int main(){

    int num;
    int algarismo;
    int somaPar = 0;
    int somaImpar = 0;
    bool equilibrado = false;

    cout << "Digite um numero(Numero Positivo): ";
    cin >> num;

    while (num <= 0)
    {
        cout << "Numero incorreto, digite novamente(Numero Positivo):";
        cin >> num;
    }

     while (num > 0)
    {
        algarismo = num % 10; // Pega o último algarismo

        if(algarismo % 2 == 0){   
            somaPar += algarismo;
        }else{
            somaImpar += algarismo;
        }

        num = num / 10;  // retira algarismo
    }

    if(somaPar == somaImpar){
        equilibrado = true;
    }

    cout << "A soma dos algarismos par e: " << somaPar << endl;
    cout << "A soma dos algarismo impar e: " << somaImpar << endl;

    if(equilibrado){
        cout << "O numero e equilibrado";
    }else{
        cout << "Numero nao e equilibrado";
    }

}