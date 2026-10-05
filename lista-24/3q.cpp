#include <iostream>
using namespace std;

int maiorAlgarismo(int N);

int main()
{

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << maiorAlgarismo(num);
}

int maiorAlgarismo(int N)
{
    int algarismoAtual;
    int restoNum;

    if(N == 0){
        return 0;
    }
  
    algarismoAtual = N % 10;
    restoNum = maiorAlgarismo(N/10);


    if(restoNum > algarismoAtual){
        return restoNum;
    }else{
        return algarismoAtual;
    }
  
} 