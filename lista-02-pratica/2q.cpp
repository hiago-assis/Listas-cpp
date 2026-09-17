#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    int N;
    float fatorial = 1.0;
    float calculoSerie = 0.0;

    cout << "Digite um numero inteiro: ";
    cin >> N;


    for (int i = 1; i <=  N;i++){

        fatorial *= i;

        calculoSerie += i/fatorial;

    }

    cout << "O resultado e: " << fixed << setprecision(4) << calculoSerie;


    return 0;

}