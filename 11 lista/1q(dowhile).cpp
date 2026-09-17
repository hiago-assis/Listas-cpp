#include <iostream>
using namespace std;

//Com DO WHILE

int main(){


    int N;
    int somaPerfeitos = 0;
    int i = 1;
    string classificao;

    cout << "Digite um numero inteiro:" ;
    cin >> N;


    cout << "Os divisores encontrados sao: ";    
    do{

        if(N % i == 0){
            somaPerfeitos += i;
            cout << i << " ";
        }
        i++;
        
    }while(i < N);

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