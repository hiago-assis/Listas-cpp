#include <iostream>
using namespace std;

void zero(int *v);

int main(){

    int valor;
    


    cout << "Digite um numero inteiro:";
    cin >> valor;

    cout << "Valor antes:" << valor << endl;

    zero(&valor);
    

    cout << "Valor apos:" << valor << endl;

}

void zero(int *v){

    *v = 0;

    

}