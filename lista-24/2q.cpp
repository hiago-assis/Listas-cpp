#include <iostream>
using namespace std;


int algarismosPares(int N);

int main(){

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << algarismosPares(num);

}

int algarismosPares(int N){

    int algarismo;

    if(N == 0){
        return 0;
    }

    algarismo = N % 10;
    if(algarismo % 2 == 0){

        return 1 + algarismosPares(N/10);
    }else{
        return 0 + algarismosPares(N/10);
    }
}