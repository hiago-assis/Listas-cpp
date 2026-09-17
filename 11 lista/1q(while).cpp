#include <iostream>
using namespace std;

//Com WHILE

int main(){


    int N;
    int somaPerfeitos = 0;
    int i = 1;
    string classificao;

    cout << "Digite um numero inteiro:" ;
    cin >> N;


    cout << "Os divisores encontrados sao: ";    
    while(i < N){
        if(N % i == 0){
            somaPerfeitos += i;
            cout << i << " ";
        }
        i++;
    }

    if(somaPerfeitos == N){
        classificao = "Perfeito";
    }else if(somaPerfeitos > N){
        classificao = "Abundante";
    }else if(somaPerfeitos < N){
        classificao = "Deficiente";
    }

    cout << "\nA soma dos divisores e: " << somaPerfeitos;
    cout << "\nO numero e: " << classificao;


    return 0;
}