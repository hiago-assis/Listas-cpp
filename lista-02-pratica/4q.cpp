#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    int N;
    float fatorial = 1.0;
    float calculoEuler = 1.0;
    cout << "Digite um numero inteiro: ";
    cin >> N;


    for (int i = 1; i <=  N;i++){

        fatorial *= i;

        calculoEuler += 1.0/fatorial;


    }

    cout << "O resultado e: " << fixed << setprecision(6) << calculoEuler;


    return 0;

}