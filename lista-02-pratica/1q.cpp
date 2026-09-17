#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    int N;
    float calculoSerieHarmonica;

    cout << "Digite um numero inteiro: ";
    cin >> N;


    for (int i = 1; i <= N;i++){

        calculoSerieHarmonica += 1.0/i;


    }

    cout << "O resultado e: " << fixed << setprecision(4) << calculoSerieHarmonica;


    return 0;

}