#include <iostream>
using namespace std;


int main(){

    int N;
    int maior = 0;
    int menor = 0;
    int qntd;
    int qntdPar = 0;
    int qntdPositivo = 0;
    int qntdNegativo = 0;
    int soma = 0;
    float media;


    cout << "Quantos numeros inteiros quer digitar?: ";
    cin >> qntd;

    while(qntd < 0){
         cout << "Numero incorreto digite novamente(Maior que 0): ";
         cin >> qntd;
    }


    for(int i = 0; i < qntd; i++){
        cout << "Digite um numero inteiro: ";
        cin >> N;


        if(i == 0){
            maior = N;
            menor = N;
        }


        if(N > maior){
            maior = N;
        }

        if(N < menor){
            menor = N;
        }

        if(N % 2 == 0){
            qntdPar++;
        }

        if(N < 0){
            qntdNegativo++;
        }else{
            qntdPositivo++;
            soma+= N;
        }
    }

    
    
    cout << maior << endl;
    cout << menor << endl;
    cout << qntdPar << endl;
    cout << qntdNegativo << endl;
    if(qntdPositivo <= 0){
        cout << "Nenhum numero positivo foi informado" << endl;
    }else{
        media = soma / qntdPositivo;
        cout << media << endl;
    }
    
}