#include <iostream>
using namespace std;

int somaAlgarismos(int n);

int main()
{
    int num;

    cout << "Digite um numero inteiro:";
    cin >> num;

    cout << somaAlgarismos(num);
}

int somaAlgarismos(int n)
{

    int soma = 0;
    int algarismo;

    if (n >= 0 && n <= 9)
    {
        return n;
    }

    while (n > 0)
    {
        algarismo = n % 10;
        soma += algarismo;
        n = n / 10;
    }

    return soma;
}