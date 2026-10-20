#include <iostream>
using namespace std;

int main(){

    int valor;
    int *ptrValor = &valor;

    cout << "Digite um numero inteiro:";
    cin >> valor;

    cout << "Valor antes:" << valor << endl;
    *ptrValor = valor * 2;


    cout << "Valor apos:" << valor << endl;
   


}