#include <iostream>
using namespace std;

//Com FOR

int main(){

    int N;
    int somaPerfeitos = 0;
    string classificao;

    cout << "Digite um numero inteiro: " ;
    cin >> N;

    cout << "Os divisores encontrados sao: ";
    for(int i = 1; i < N;i++){
        if(N % i == 0){
            somaPerfeitos += i;
            cout << i << " ";
        }
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