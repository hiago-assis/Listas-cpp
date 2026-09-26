#include <iostream>
using namespace std;


int main(){

    int num;
    int algarismo;
    int somaPar = 0;
    int somaImpar = 0;
    int posicao = 1;

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

        if(posicao % 2 == 0){
            somaPar += algarismo;
            posicao++;
        }else{
            somaImpar += algarismo;
            posicao++;
        }

        num = num / 10;  // retira algarismo
    }

    cout << "A soma dos algarismos na posicao par e: " << somaPar << endl;
    cout << "A soma dos algarismo na posicao impar e: " << somaImpar << endl;

}