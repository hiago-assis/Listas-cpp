#include <iostream>
using namespace std;

void somarDez(int *v);

int main(){

    int valor;
    


    cout << "Digite um numero inteiro:";
    cin >> valor;

    cout << "Valor antes:" << valor << endl;

    somarDez(&valor);
    

    cout << "Valor apos:" << valor << endl;

}

void somarDez(int *v){

    *v = *v + 10;

    

}