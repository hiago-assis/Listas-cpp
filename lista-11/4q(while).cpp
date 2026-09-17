#include <iostream>
using namespace std;

int main(){

    int valor;
    int contadorCedulas = 0;
    int dinheiroRestante;

    cout << "Digite um valor em inteiro: ";
    cin >> valor;

    dinheiroRestante = valor;

    // Cedula de 100
    while(dinheiroRestante >= 100){
        dinheiroRestante -= 100;
        contadorCedulas++;
    }

    // Cedula de 50
    while(dinheiroRestante >= 50){
        dinheiroRestante -= 50;
        contadorCedulas++;
    }

    // Cedula de 20
    while(dinheiroRestante >= 20){
        dinheiroRestante -= 20;
        contadorCedulas++;
    }

    // Cedula de 10
    while(dinheiroRestante >= 10){
        dinheiroRestante -= 10;
        contadorCedulas++;
    }

    // Cedula de 5
    while(dinheiroRestante >= 5){
        dinheiroRestante -= 5;
        contadorCedulas++;
    }

    // Cedula de 2
    while(dinheiroRestante >= 2){
        dinheiroRestante -= 2;
        contadorCedulas++;
    }

    if(dinheiroRestante == 0){
        cout << "Quantidade minima de cedulas: " << contadorCedulas << "\n";
    } else {
        cout << "Nao e possivel formar esse valor exatamente com essas cedulas." << "\n";
    }

    return 0;
}