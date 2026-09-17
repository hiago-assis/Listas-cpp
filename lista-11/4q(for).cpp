#include <iostream>
using namespace std;

//Com FOR

int main(){

    int valor;
    int contadorCedulas = 0;
    int dinheiroRestante;

    cout << "Digite um valor em inteiro: ";
    cin >> valor;

    dinheiroRestante = valor;

    for(int i = 0;i < dinheiroRestante / 100;i++){

    }

    contadorCedulas += dinheiroRestante / 100;
    dinheiroRestante = dinheiroRestante % 100;

    // Cedula de 50
    contadorCedulas += dinheiroRestante / 50;
    dinheiroRestante = dinheiroRestante % 50;

    // Cedula de 20
    contadorCedulas += dinheiroRestante / 20;
    dinheiroRestante = dinheiroRestante % 20;

    // Cedula de 10
    contadorCedulas += dinheiroRestante / 10;
    dinheiroRestante = dinheiroRestante % 10;

    // Cedula de 5
    contadorCedulas += dinheiroRestante / 5;
    dinheiroRestante = dinheiroRestante % 5;

    // Cedula de 2
    contadorCedulas += dinheiroRestante / 2;
    dinheiroRestante = dinheiroRestante % 2;

    if(dinheiroRestante == 0){
        cout << "Quantidade minima de cedulas: " << contadorCedulas << "\n";
    } else {
        cout << "Nao e possivel formar esse valor exatamente com essas cedulas." << "\n";
    }

    return 0;
} 