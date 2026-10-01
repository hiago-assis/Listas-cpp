#include <iostream>
using namespace std;

void imprimir(int N);

int main()
{

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;


    imprimir(num);


    return 0;
}

void imprimir(int N)
{

    if (N == 0)
    {
        return;
    }

    imprimir(N / 10);

    cout << N % 10 << " ";
}