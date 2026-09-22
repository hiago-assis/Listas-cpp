#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int N;
    float serie = 0;
    float somaPositivo = 0;
    float somaNegativo = 0;

    cout << "Digite um numero inteiro(maior que 0): ";
    cin >> N;

    while(N <= 0){
        cout << "Numero incorreto, Digite um numero inteiro(maior que 0): ";
        cin >> N;
    }

    for(int i = 1; i <= N;i++){

        if(i % 2 == 0){
            somaNegativo -= 1.0/i;
            serie -= 1.0/i;
        }else{
            somaPositivo += 1.0/i;
            serie += 1.0/i;
        }

    }

    
    cout << "O resultado e: " << fixed << setprecision(4) << serie << endl;
    cout << "O resultado da soma positivo: " << fixed << setprecision(4) << somaPositivo << endl;
    cout << "O resultado da soma negativo: " << fixed << setprecision(4) << somaNegativo;
}