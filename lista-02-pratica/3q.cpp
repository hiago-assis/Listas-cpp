#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    int B;
    int E;
    int calculoPotencia = 1;
    

    cout << "Digite uma base: ";
    cin >> B;
    cout << "Digite um expoente: ";
    cin >> E;


    for (int i = 0; i < E;i++){

        calculoPotencia *= B;

    }

    cout << "O resultado e: " << calculoPotencia;


    return 0;

}