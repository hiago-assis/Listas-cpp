#include <iostream>
using namespace std;

int maiorQue5(int N);

int main()
{

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;


    cout << maiorQue5(num);


    return 0;
}

int maiorQue5(int N)
{
    int algarismo;

    if (N == 0)
    {
        return 0;
    }

    algarismo = N % 10;

    if (algarismo > 5)
    {
        return 1 + maiorQue5(N / 10);
    }
    else
    {
        return 0 + maiorQue5(N / 10);
    }
    
}